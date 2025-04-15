namespace Cours_C__05
{
    internal class Program
    {
        private static int _a;
        static void Main(string[] args)
        {
            _a = 5;
            Console.WriteLine($"Le carré de {_a} = {Carre(_a)}");
        }

        public static int Carre(int param_Entier) => param_Entier * param_Entier;
    }
}
