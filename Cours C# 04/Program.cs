using Cours_C__04.Objets;

namespace Cours_C__04
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Int32 n;
            Console.WriteLine("Combien d'étudiants voulez-vous enregistrer ?");


            while(!Int32.TryParse(Console.ReadLine(), out n) || n <= 0)
            {
                Console.WriteLine("Veuillez entrer un nombre entier positif !");
            }

            List<Etudiant> etudiants = new List<Etudiant>();

            for(Int32 i = 0; i < n; i++)
            {
                etudiants.Add(SaisirEtudiant(i));
            }

            Etudiant meilleur = etudiants.OrderByDescending(e => e.Note).First();


            Console.WriteLine($"\nL'étudiant avec la meilleure note est : {meilleur.Name} avec {meilleur.Note:F2}/20");
        }


        static Etudiant SaisirEtudiant(Int32 param_index)
        {
            Console.WriteLine($"\nÉtudiant {param_index + 1} :");

            Console.Write("Nom : ");
            String nom = Console.ReadLine();

            Int32 age;
            Console.Write("Age : ");
            while(!Int32.TryParse(Console.ReadLine(), out age) || age <= 0)
            {
                Console.Write("Âge invalide. Réessayez : ");
            }

            Double note;
            Console.Write("Note : ");
            while(!Double.TryParse(Console.ReadLine(), out note) || note < 0 || note > 20)
            {
                Console.Write("Note invalide. Réessayez : ");
            }

            return new Etudiant(nom, age, note);
        }
    }
}
