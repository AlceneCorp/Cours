using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Cours_C__06.Objets
{
    public class Femme : Humain
    {
        Char _sexe = 'F';

        public Femme(int age, String nom, String prenom) : base(age, nom, prenom)
        {

        }

        public override void Accoucher()
        {
            Console.WriteLine("La femme accouche !");
        }
    }
}
