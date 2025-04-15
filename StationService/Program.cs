using StationService.Models;
using StationService.Models.Enums;
using StationService.Services;
using System.Globalization;

class Program
{
    static void Main(string[] args)
    {
        

        Console.WriteLine("Bienvenue à la station-service !");
        var stationService = new StationService.Services.StationService();

        

        Boolean continuer = true;
        while(continuer)
        {
            AfficherMenu();
            String choix = Console.ReadLine();

            switch(choix)
            {
                case "1":
                    stationService.LancerJournee();
                    break;
                case "2":
                    stationService.AfficherEtatStation();
                    break;
                case "3":
                    RestockerCarburant(stationService);
                    break;
                case "4":
                    stationService.AfficherHistorique();
                    break;
                case "5":
                    continuer = false;
                    Console.WriteLine("Merci d'avoir utilisé la station-service. À bientôt !");
                    break;
                default:
                    Console.WriteLine("Option invalide, essayez à nouveau.");
                    break;
            }

            if(continuer)
            {
                Console.WriteLine("\nAppuyez sur une touche pour revenir au menu...");
                Console.ReadKey();
                Console.Clear();
            }
        }
    }

    static void AfficherMenu()
    {
        Console.WriteLine("\n--- Menu ---");
        Console.WriteLine("1 - Lancer une nouvelle journée");
        Console.WriteLine("2 - Afficher l'état des stocks et du compte");
        Console.WriteLine("3 - Restocker un carburant");
        Console.WriteLine("4 - Afficher l'historique des ventes");
        Console.WriteLine("5 - Quitter");
        Console.Write("Choisissez une option : ");
    }

    static void RestockerCarburant(StationService.Services.StationService stationService)
    {
        Console.WriteLine("\nQuel carburant voulez-vous restocker ?");
        foreach(var fuelType in Enum.GetValues<FuelType>())
        {
            Console.WriteLine($"- {fuelType}");
        }

        String choixCarburant = Console.ReadLine();
        if(Enum.TryParse(choixCarburant, true, out FuelType carburant))
        {
            Console.WriteLine("Combien de litres voulez-vous ajouter ?");
            if(Double.TryParse(Console.ReadLine(), out Double quantite))
            {
                stationService.RestockerCarburant(carburant, quantite);
            }
            else
            {
                Console.WriteLine(" Quantité invalide.");
            }
        }
        else
        {
            Console.WriteLine(" Carburant invalide.");
        }
    }
}
