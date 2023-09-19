//Problem 10.18
public class Invoice implements Payable
{
    private final String partNumber;
    private final String partDescription;
    private final int quantity;
    private final double pricePerItem;

    public Invoice(String partNumber, String partDescription, int quantity, double pricePerItem)
    {
            if (quantity < 0)
            {
                throw new IllegalArgumentException("Quantity must be >= 0");
            }

            if (pricePerItem < 0.0)
            {
                throw new IllegalArgumentException("Price per item must be >= 0");
            }

            this.quantity = quantity;
            this.partNumber = partNumber;
            this.partDescription = partDescription;
            this.pricePerItem = pricePerItem;
    }

    public String getPartNumber()
    {
        return partNumber;
    }

    public String getPartDescription()
    {
        return partDescription;
    }

    public int getQuantity()
    {
        return quantity;
    }

    public double getPricePerItem()
    {
        return pricePerItem;
    }

    @Override
    public String toString()
    {
        String str = "\nInvoice" + "\nPart Number: " + getPartNumber() + "\nDescription: " + getPartDescription() + "\nQuantity: " + getQuantity() + "\nPrice-Per-Item: " + getPricePerItem();
        return str;
    }

    @Override
    public double getPaymentAmount()
    {
        return getQuantity() * getPricePerItem();
    }
}
