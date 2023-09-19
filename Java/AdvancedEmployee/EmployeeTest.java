//Problem 9.14
public class EmployeeTest
{
    public static void main (String[] args)
    {
        CommisionEmployee employee1 = new CommisionEmployee("Ben", "Ebadinia", "543-11-5432", 50000, 0.05);
        BasePlusCommisionEmployee employee2 = new BasePlusCommisionEmployee("Alegra", "Ramos", "123-45-6789", 45000, 0.02, 1500);

        System.out.println(employee1.toString());
        System.out.println(employee2.toString());
    }
}
