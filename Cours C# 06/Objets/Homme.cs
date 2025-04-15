using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Cours_C__06.Objets
{
    public class Homme : Humain
    {
        Char _sexe = 'M';

        public Homme(int age, String nom, String prenom) : base(age, nom, prenom)
        {

        }
    }
}
