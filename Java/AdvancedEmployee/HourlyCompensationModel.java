//Problem 10.17
public class HourlyCompensationModel implements CompensationModel
{
    private double wage;
    private double hours;

    public HourlyCompensationModel(double wage, double hours)
    {
        if (wage < 0.0)
        {
            throw new IllegalArgumentException("Hourly wage must be >= 0.0");
        }

        if ((hours < 0.0) || (hours > 168.0))
        {
            throw new IllegalArgumentException("Hours worked must be >= 0.0 and <= 168.0");
        }

        this.wage = wage;
        this.hours = hours;
    }

    public void setWage(double wage)
    {
        if (wage < 0.0)
        {
            throw new IllegalArgumentException("Hourly wage must be >= 0.0");
        }
        this.wage = wage;
    }

    public void setHours(double hours)
    {
        if ((hours < 0.0) || (hours > 168.0))
        {
            throw new IllegalArgumentException("Hours worked must be >= 0.0 and <= 168.0");
        }
        this.hours = hours;
    }

    public double getWage()
    {
        return wage;
    }

    public double getHours()
    {
        return hours;
    }

    public double earnings()
    {
        if (getHours() <= 40)
        {
            return getWage() * getHours();
        }
        else
        {
            return 40 * getWage() + (getHours() - 40) * getWage() * 1.5;
        }
    }

    @Override
    public String toString()
    {
        String str = "\nHourly Compensation Employee" + "\n Wages: $" + getWage() + "\n Hours: " + getHours() + "\nEarnings: $" + earnings();
        return str;
    }
}
