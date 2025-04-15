using StationService.Models.Enums;

namespace StationService.Models
{
    public class VenteClient
    {
        public String ClientName { get; set; }
        public FuelType FuelType { get; set; }
        public Double Quantity { get; set; }
        public Double TotalPrice { get; set; }

        public VenteClient(String param_clientName, FuelType param_fuelType, Double param_quantity, Double param_totalPrice)
        {
            ClientName = param_clientName;
            FuelType = param_fuelType;
            Quantity = param_quantity;
            TotalPrice = param_totalPrice;
        }

        public override String ToString()
        {
            return $"{ClientName} | {FuelType} - {Quantity}L pour {TotalPrice:F2} euros";
        }
    }
}
