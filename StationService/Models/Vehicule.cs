using System;
using StationService.Models.Enums;

namespace StationService.Models
{
    public class Vehicule
    {
        public FuelType FuelType { get; set; }

        public Double TankCapacity { get; set; }

        public Double CurrentFuel { get; set; }

        public Vehicule(FuelType param_fuelType, Double param_tankCapacity, Double param_currentFuel)
        {
            this.FuelType = param_fuelType;
            this.TankCapacity = param_tankCapacity;
            this.CurrentFuel = param_currentFuel;
        }

        public Double GetMissingFuel() => (this.TankCapacity - this.CurrentFuel);

        public void Refuel(Double param_quantity)
        { 
            this.CurrentFuel += param_quantity;

            if(this.CurrentFuel > this.TankCapacity)
            {
                CurrentFuel = this.TankCapacity;
            }
        }
    }
}
