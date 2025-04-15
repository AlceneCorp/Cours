using Cours_C__06.Objets;

namespace Cours_C__06
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Héritage et Polymorphysme

            Humain test = new Femme(20, "test", "test");
            Humain test1 = new Homme(20, "test", "test");

            Console.WriteLine($"{test.GetType()}");

            test.Marcher();
            test1.Marcher();
            
            test.Accoucher();
            test1.Accoucher();
        }
    }
}
