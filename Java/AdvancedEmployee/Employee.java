//Problem 10.17
public class Employee implements Payable
{
    private final String firstName;
    private final  String lastName;
    private final String socialSecurityNumber;
    private CompensationModel type;


    public Employee(String firstName, String lastName, String socialSecurityNumber, CompensationModel type)
    {
        this.firstName = firstName;
        this.lastName = lastName;
        this.socialSecurityNumber = socialSecurityNumber;
        this.type = type;
    }

    public double getPaymentAmount()
    {
        return type.earnings();
    }

    public void setType(CompensationModel type)
    {
        this.type = type;
    }

    public String getFirstName()
    {
        return firstName;
    }

    public String getLastName()
    {
        return lastName;
    }

    public String getSocialSecurityNumber()
    {
        return socialSecurityNumber;
    }

    public CompensationModel getType()
    {
        return type;
    }

    @Override
    public String toString()
    {
        String str = "\nName: " + getFirstName() + " " + getLastName() + "\nSSN: " + getSocialSecurityNumber() + "\nType of compensation:" + type;
        return str;
    }
}

