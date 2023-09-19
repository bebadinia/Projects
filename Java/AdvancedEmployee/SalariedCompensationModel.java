//Problem 10.17
public class SalariedCompensationModel implements CompensationModel
{
    private double weeklySalary;

    public SalariedCompensationModel(double weeklySalary)
    {
        if (weeklySalary < 0.0) {
            throw new IllegalArgumentException("Weekly salary must be >= 0.0");
        }

        this.weeklySalary = weeklySalary;
    }

    public void setWeeklySalary(double weeklySalary)
    {
        if (weeklySalary < 0.0) {
            throw new IllegalArgumentException("Weekly salary must be >= 0.0");
        }

        this.weeklySalary = weeklySalary;
    }

    public double getWeeklySalary()
    {
        return weeklySalary;
    }

    public double earnings()
    {
        return getWeeklySalary();
    }

    @Override
    public String toString()
    {
        String str = "\nSalaried Employee" + "\n Weekly Salary: $" + getWeeklySalary();
        return str;
    }
}
