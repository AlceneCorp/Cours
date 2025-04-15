using StationService.Models;
using StationService.Models.Enums;
using System.Globalization;

namespace StationService.Services
{
    public class StationService
    {
        private Dictionary<FuelType, CarburantStock> _stocks;
        private List<VenteJournalier> _historiqueVentes;
        private Double _compteGerant;
        private Int32 _jourActuel;
        private Random _random;

        public StationService()
        {
            _stocks = new Dictionary<FuelType, CarburantStock>
            {
                { FuelType.SP95, new CarburantStock(FuelType.SP95, 1000, 1.85) },
                { FuelType.SP98, new CarburantStock(FuelType.SP98, 800, 1.95) },
                { FuelType.Diesel, new CarburantStock(FuelType.Diesel, 1200, 1.75) },
                { FuelType.E85, new CarburantStock(FuelType.E85, 600, 1.40) },
            };

            _historiqueVentes = new List<VenteJournalier>();
            _compteGerant = 0;
            _jourActuel = 1;
            _random = new Random();
        }

        public void LancerJournee()
        {
            Console.WriteLine($"\n  JOUR {_jourActuel} ------------------------------");

            Int32 nbClients = _random.Next(3, 10);
            VenteJournalier ventesDuJour = new VenteJournalier(_jourActuel);

            for(Int32 i = 0; i < nbClients; i++)
            {
                Client client = GenererClientAleatoire();
                Console.WriteLine($"Client #{i + 1} : {client}");

                FuelType typeCarburant = client.Vehicule.FuelType;
                Double manque = client.Vehicule.GetMissingFuel();

                CarburantStock stock = _stocks[typeCarburant];
                Double prixLitre = stock.PricePerLiter;
                Double coutTotal = manque * prixLitre;

                if(!stock.HasEnoughFuel(manque))
                {
                    Console.WriteLine(" Pas assez de carburant en stock.");
                    continue;
                }

                if(!client.CanAfford(coutTotal))
                {
                    Console.WriteLine(" Le client n'a pas assez d'argent.");
                    continue;
                }

                client.Pay(coutTotal);
                stock.UseFuel(manque);
                client.Vehicule.Refuel(manque);
                _compteGerant += coutTotal;

                var vente = new VenteClient($"{client.FirstName} {client.LastName}", typeCarburant, manque, coutTotal);
                ventesDuJour.AjouterVente(vente);

                Console.WriteLine($"    {manque:F2}L achetés pour {coutTotal:C2}");
            }

            _historiqueVentes.Add(ventesDuJour);
            ventesDuJour.AfficherRésumé();
            _jourActuel++;
        }

        public void AfficherEtatStation()
        {
            Console.WriteLine("\nÉtat des stocks :");
            foreach(var stock in _stocks.Values)
            {

                Console.WriteLine($"  {stock.FuelType} : {stock.QuantityInLiters}L à {stock.PricePerLiter:F2} euros/L");
                
            }

            Console.WriteLine($"\nCompte du gérant : {_compteGerant:F2} euros");
        }

        public void RestockerCarburant(FuelType param_fuelType, Double param_quantite)
        {
            if(_stocks.ContainsKey(param_fuelType))
            {
                _stocks[param_fuelType].Restock(param_quantite);
                Console.WriteLine($"{param_quantite}L de {param_fuelType} ajoutés au stock.");
            }
        }

        private Client GenererClientAleatoire()
        {
            var prenoms = new[] { "Lucas", "Marie", "Jordan", "Emma", "Alexandre", "Chloé", "Emilien" };
            var noms = new[] { "Dupont", "Martin", "Bernard", "Lemoine", "Roux", "Durand" };

            String prenom = prenoms[_random.Next(prenoms.Length)];
            String nom = noms[_random.Next(noms.Length)];
            Double argent = _random.Next(20, 120);

            FuelType typeCarburant = (FuelType)_random.Next(Enum.GetValues(typeof(FuelType)).Length);
            Double capacite = _random.Next(40, 61);
            Double restant = _random.NextDouble() * (capacite / 4); // reste 0 à 25% du réservoir

            Vehicule vehicule = new Vehicule(typeCarburant, capacite, restant);

            return new Client(prenom, nom, argent, vehicule);
        }

        public void AfficherHistorique()
        {
            foreach(var jour in _historiqueVentes)
            {
                jour.AfficherRésumé();
            }
        }
    }
}
