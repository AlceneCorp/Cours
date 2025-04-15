using StationService.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StationService.Models
{
    public class Client
    {
        public String FirstName { get; set; }
        public String LastName { get; set; }
        public Double Money { get; set; }
        public Vehicule Vehicule { get; set; }

        public Client(String param_firstName, String param_lastName, Double param_money, Vehicule param_vehicule)
        {
            FirstName = param_firstName;
            LastName = param_lastName;
            Money = param_money;
            Vehicule = param_vehicule;
        }

        public Boolean CanAfford(Double param_price)
        {
            return Money >= param_price;
        }

        public void Pay(Double param_amount)
        {
            if(param_amount <= Money)
            {
                Money -= param_amount;
            }
        }

        public override String ToString()
        {
            return $"{FirstName} {LastName} - {Vehicule.FuelType} | Réservoir : {Vehicule.CurrentFuel}/{Vehicule.TankCapacity}L | Argent : {Money:F2} euros";
        }
    }
}
