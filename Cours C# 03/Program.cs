namespace Cours_C__03
{
    internal class Program
    {
        /// <summary>
        /// Methode principal du programe ! 
        /// </summary>
        /// <param name="args">Liste d'arguments</param>
        static void Main(string[] args)
        {
            Int32 n;
            Console.WriteLine("Combien d'étudiants voulez-vous enregistrer ?");
            n = Int32.Parse(Console.ReadLine());

            List<Etudiant> etudiants = new List<Etudiant>(n);

            for(int i = 0; i < etudiants.Capacity; i++)
            {
                String nom;
                Int32 age;
                Double note;

                Console.WriteLine($"\nEtudiant {i + 1} : ");
                Console.WriteLine($"Nom : ");
                nom = Console.ReadLine();
                Console.WriteLine($"Age : ");
                age = Int32.Parse(Console.ReadLine());
                Console.WriteLine($"Note : ");
                note = Double.Parse(Console.ReadLine());

                etudiants.Add(new Etudiant(nom, age, note));

            }

            Etudiant meilleur = new Etudiant();

            foreach(Etudiant etudiant in etudiants)
            {
                if(etudiant.Note > meilleur.Note)
                {
                    meilleur = etudiant;
                }
            }

            Console.WriteLine($"L'étudiant avec la meilleure note est : {meilleur.Name} avec {meilleur.Note}/20");

        }
    }
}
