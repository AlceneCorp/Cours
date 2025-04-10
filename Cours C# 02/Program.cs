//Les variables

using System;
using System.Threading.Channels;



namespace Cours_C__02
{
    internal class Program
    {
        static void Main(string[] args)
        {

            /*
            Int32 Nombre entier(positif ou négatif)  Int32 age = 30;
            Double Nombre à virgule(flottant) Double pi = 3.14;
            Boolean Vrai ou faux(true ou false)	Boolean ok = false;
            Char Un seul caractère(entre apostrophes)   Char lettre = 'A';
            String Texte(chaîne de caractères)    String nom = "Ali";
            */
            Console.WriteLine($"Talle d'un Int32 : {sizeof(Int32)}");
            Console.WriteLine($"Talle d'un Double : {sizeof(Double)}");
            Console.WriteLine($"Talle d'un Boolean : {sizeof(Boolean)}");
            Console.WriteLine($"Talle d'un Char : {sizeof(Char)}{Environment.NewLine}");

            //Déclaration est initialisation des différents type de variables
            Int32 age = 25;
            Double temperature = 36.6;
            Boolean estConnecte = true;
            Char lettre = 'A';
            String prenom = "Lucie";

            //Affichage des variables
            Console.WriteLine($"Age : {age}");
            Console.WriteLine($"Température : {temperature}");
            Console.WriteLine($"Est connecté : {estConnecte}");
            Console.WriteLine($"Lettre : {lettre}");
            Console.WriteLine($"Prénom : {prenom}");

        }
    }
}
