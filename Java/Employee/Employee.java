//Section 3.13
public class Employee
{
    private String fName;
    private String lName;
    private double mSalary;

    public Employee(String fName, String lName, double mSalary)
    {
        this.fName = fName;
        this.lName = lName;
        this.mSalary = mSalary;
    }

    public String getfName()
    {
        return fName;
    }

    public void setfName(String fName)
    {
        this.fName = fName;
    }

    public void setlName(String lName)
    {
        this.lName = lName;
    }

    public String getlName()
    {
        return lName;
    }

    public double getmSalary()
    {
        return mSalary;
    }

    public void setmSalary(double mSalary)
    {
        this.mSalary = mSalary;
    }

}
