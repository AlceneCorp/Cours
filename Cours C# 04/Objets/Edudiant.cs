using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Cours_C__04.Objets
{
    internal class Etudiant
    {
        public String Name { get; }

        public Int32 Age { get; }

        public Double Note { get; }

        public Etudiant(String param_name = "", Int32 param_age = 0, Double param_note = 0.0)
        {
            this.Name = param_name;
            this.Age = param_age;
            this.Note = param_note;
        }
    }
}
