using StationService.Models.Enums;

namespace StationService.Models
{
    public class CarburantStock
    {
        public FuelType FuelType { get; set; }
        public Double QuantityInLiters { get; set; }
        public Double PricePerLiter { get; set; }

        public CarburantStock(FuelType param_fuelType, Double param_quantity, Double param_pricePerLiter)
        {
            FuelType = param_fuelType;
            QuantityInLiters = param_quantity;
            PricePerLiter = param_pricePerLiter;
        }

        public Boolean HasEnoughFuel(Double param_requested)
        {
            return QuantityInLiters >= param_requested;
        }

        public void UseFuel(Double param_amount)
        {
            QuantityInLiters -= param_amount;
            if(QuantityInLiters < 0)
            {
                QuantityInLiters = 0;
            }
        }

        public void Restock(Double param_amount)
        {
            QuantityInLiters += param_amount;
        }
    }
}
