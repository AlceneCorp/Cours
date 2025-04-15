using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Cours_C__03
{
    public class Etudiant
    {
        private String _nom;
        private Int32 _age;
        private Double _note;

        public Double Note
        {
            get => _note;
            set => _note = value;
        }

        public String Name
        {
            get => _nom;
            set => _nom = value;
        }

        public Etudiant() { }

        public Etudiant(String param_Nom, Int32 param_Age, Double param_Note)
        {
            this._nom = param_Nom;
            this._age = param_Age;
            this._note = param_Note;
        }
        public void Afficher()
        {
            Console.WriteLine($"Nom : {this._nom}, Age : {this._age}, Note : {this._note}");
        }
    }
}
