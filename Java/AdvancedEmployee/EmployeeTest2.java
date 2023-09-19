//Problem 9.16
public class EmployeeTest2
{
    public static void main (String[] args)
    {
        CommissionCompensationModel commissionEmployee = new CommissionCompensationModel(50000, 0.05);
        BasePlusCommissionCompensationModel basePlusCommissionEmployee  = new BasePlusCommissionCompensationModel(45000, 0.02, 1500);

        Employee2 first = new Employee2("Ben", "Ebadinia", "543-11-5432", commissionEmployee);
        Employee2 second = new Employee2("Alegra", "Ramos", "123-45-6789", basePlusCommissionEmployee);

        System.out.println(first.toString());
        System.out.println(second.toString());
    }
}
