//Problem 10.17
public class BasePlusCommissionCompensationModel implements CompensationModel
{
    private double baseSalary;
    private double grossSales;
    private double commissionRate;

    public BasePlusCommissionCompensationModel(double grossSales, double commissionRate, double baseSalary)
    {
        if (baseSalary < 0.0)
            throw new IllegalArgumentException("Base salary must be >= 0.0");

        this.baseSalary = baseSalary;
        this.commissionRate = commissionRate;
        this.grossSales = grossSales;
    }

    public void setBaseSalary(double baseSalary)
    {
        if (baseSalary < 0.0)
            throw new IllegalArgumentException("Base salary must be >= 0.0");

        this.baseSalary = baseSalary;
    }

    public double getBaseSalary()
    {
        return baseSalary;
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
        return getBaseSalary() + getGrossSales() * getCommissionRate();
    }

    @Override
    public String toString()
    {
        String str = "\nBase-plus-Commission Employee" + "\nGross Sales: $" + getGrossSales() + "\nCommission Rate: " + getCommissionRate() + "\nBase Salary: $" + getBaseSalary() + "\nEarnings: $" + earnings();
        return str;
    }
}
