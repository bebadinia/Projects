//Problem 9.16
public class Employee2
{
    private String firstName;
    private String lastName;
    private String socialSecurityNumber;
    private CommissionCompensationModel type;


    public Employee2(String firstName, String lastName, String socialSecurityNumber, CommissionCompensationModel type)
    {
        this.firstName = firstName;
        this.lastName = lastName;
        this.socialSecurityNumber = socialSecurityNumber;
        this.type = type;
    }

    public void setFirstName(String firstName)
    {
        this.firstName = firstName;
    }

    public void setLastName(String lastName)
    {
        this.lastName = lastName;
    }

    public void setSocialSecurityNumber(String socialSecurityNumber)
    {
        this.socialSecurityNumber = socialSecurityNumber;
    }

    public void setType(CommissionCompensationModel type)
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

    public CommissionCompensationModel getType()
    {
        return type;
    }

    @Override
    public String toString()
    {
        String str = "\nName: " + getFirstName() + " " + getLastName() + "\nSSN: " + getSocialSecurityNumber() + type.toString();
        return str;
    }
}
