//Problem 9.14
public class CommisionEmployee extends Employee
{
    private double grossSales;
    private double commissionRate;

    // five-argument constructor
    public CommisionEmployee(String firstName, String lastName, String socialSecurityNumber, double grossSales, double commissionRate)
    {
        super(firstName,lastName,socialSecurityNumber);

        if (grossSales < 0.0)
            throw new IllegalArgumentException("Gross sales must be >= 0.0");

        if (commissionRate <= 0.0 || commissionRate >= 1.0)
            throw new IllegalArgumentException("Commission rate must be > 0.0 and < 1.0");

        this.grossSales = grossSales;
        this.commissionRate = commissionRate;
    }


    public void setGrossSales(double grossSales)
    {
        if (grossSales < 0.0)
            throw new IllegalArgumentException("Gross sales must be >= 0.0");

        this.grossSales = grossSales;
    }

    public double getGrossSales()
    {
        return grossSales;
    }

    public void setCommissionRate(double commissionRate)
    {
        if (commissionRate <= 0.0 || commissionRate >= 1.0)
            throw new IllegalArgumentException("Commission rate must be > 0.0 and < 1.0");

        this.commissionRate = commissionRate;
    }

    public double getCommissionRate()
    {
        return commissionRate;
    }

    public double earnings()
    {
        return getCommissionRate() * getGrossSales();
    }

    @Override
    public String toString()
    {
        return String.format("Commission Employee\n %s Gross Sales: %.2f\n Commission Rate: %.2f\n Total Earnings: %.2f\n", super.toString(), getGrossSales(), getCommissionRate(), earnings());
    }
}
