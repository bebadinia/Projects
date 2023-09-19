// Section 3.12

public class Invoice
{
    private String partNum;
    private String partDes;
    private int partQuan;
    private double partPrice;

    public Invoice(String partNum, String partDes, int partQuan, double partPrice)
    {
        this.partNum = partNum;
        this.partDes = partDes;

        if (partQuan < 0)
        {
            this.partQuan = 0;
        }
        else
        {
            this.partQuan = partQuan;
        }

        if (partPrice < 0.0)
        {
            this.partPrice = 0.0;
        }
        else
        {
            this.partPrice = partPrice;
        }
    }

    public String getPartNum()
    {
        return partNum;
    }

    public void setPartNum(String partNum)
    {
        this.partNum = partNum;
    }

    public String getPartDes()
    {
        return partDes;
    }

    public void setPartDes(String partDes)
    {
        this.partDes = partDes;
    }

    public int getPartQuan()
    {
        return partQuan;
    }

    public void setPartQuan(int partQuan)
    {
        if (partQuan < 0)
        {
            partQuan = 0;
        }

        this.partQuan = partQuan;
    }

    public double getPartPrice()
    {
        return partPrice;
    }

    public void setPartPrice(double partPrice)
    {
        if (partPrice < 0.0)
        {
            partPrice = 0.0;
        }

        this.partPrice = partPrice;
    }

    public double getInvoiceAmount()
    {
        return partPrice*partQuan;
    }

}
