//Problem 9.14
public class Employee
{
    private final String firstName;
    private final String lastName;
    private final String socialSecurityNumber;


    public Employee(String firstName, String lastName, String socialSecurityNumber)
    {
        this.firstName = firstName;
        this.lastName = lastName;
        this.socialSecurityNumber = socialSecurityNumber;
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

    public String toString()
    {
        return String.format("%s %s\n Social Security Number: %s\n", getFirstName(), getLastName(), getSocialSecurityNumber());
    }
}