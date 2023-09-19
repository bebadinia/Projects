//Problem 9.14
public class BasePlusCommisionEmployee extends CommisionEmployee
{
    private double baseSalary;

    public BasePlusCommisionEmployee(String firstName, String lastName, String socialSecurityNumber, double grossSales, double commissionRate, double baseSalary)
    {
        super(firstName, lastName, socialSecurityNumber, grossSales, commissionRate);

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


    @Override
    public double earnings()
    {
        return getBaseSalary() + super.earnings();
    }

    @Override
    public String toString()
    {
        return String.format("Base-plus-%s Base Salary: %.2f", super.toString(), getBaseSalary());
    }
}

