//Problem 9.16
public class BasePlusCommissionCompensationModel extends CommissionCompensationModel
{
    private double baseSalary;

    public BasePlusCommissionCompensationModel(double grossSales, double commissionRate, double baseSalary)
    {
        super(grossSales, commissionRate);

        if (baseSalary < 0.0)
            throw new IllegalArgumentException("Base salary must be >= 0.0");

        this.baseSalary = baseSalary;
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


    public double earnings()
    {
        return getBaseSalary() + super.earnings();
    }

    @Override
    public String toString()
    {
        String str = "\nBase-plus-Commission Employee" + "\nGross Sales: " + getGrossSales() + "\nCommission Rate: " + getCommissionRate() + "\nBase Salary: " + getBaseSalary() + "\nEarnings: " + earnings();
        return str;
    }
}
