using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Cours_C__06.Objets
{
    public abstract class Humain
    {
        Int32 _age;
        String _nom;
        String _prenom;


        public Humain(int age, string nom, string prenom)
        {
            _age = age;
            _nom = nom;
            _prenom = prenom;
        }

        public void Marcher()
        {

        }

        public virtual void Accoucher()
        { 
            if(this is Homme)
            {
                Console.WriteLine($"Arrête ton wookisme les hommes ça accouche pas.");
            }
        }
    }
}
