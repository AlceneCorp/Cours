namespace StationService.Models
{
    public class VenteJournalier
    {
        public Int32 Jour { get; set; }
        public List<VenteClient> Ventes { get; set; }
        public Double BeneficesTotaux => Ventes.Sum(v => v.TotalPrice);

        public VenteJournalier(Int32 param_jour)
        {
            Jour = param_jour;
            Ventes = new List<VenteClient>();
        }

        public void AjouterVente(VenteClient param_vente)
        {
            Ventes.Add(param_vente);
        }

        public void AfficherRésumé()
        {
            Console.WriteLine($"\n--- Résumé des ventes du jour {Jour} ---");
            foreach(var vente in Ventes)
            {
                Console.WriteLine(vente.ToString());
            }
            Console.WriteLine($"Bénéfices totaux : {BeneficesTotaux:F2} euros\n");
        }
    }
}
