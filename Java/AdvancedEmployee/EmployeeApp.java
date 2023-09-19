//Problem 10.17
public class EmployeeApp
{
    public static void main (String[] args)
    {
        HourlyCompensationModel hourlyEmployee = new HourlyCompensationModel(20, 45);
        SalariedCompensationModel salariedEmployee  = new SalariedCompensationModel(1000);
        CommissionCompensationModel commissionEmployee = new CommissionCompensationModel(50000, 0.05);
        BasePlusCommissionCompensationModel basePlusCommissionEmployee  = new BasePlusCommissionCompensationModel(45000, 0.02, 1500);

        Employee first = new Employee("Ben", "Ebadinia", "543-11-5432", commissionEmployee);
        Employee second = new Employee("Alegra", "Ramos", "123-45-6789", basePlusCommissionEmployee);
        Employee third = new Employee("Brad", "Ebadinia", "987-65-4321", hourlyEmployee);
        Employee fourth = new Employee("Kamran", "Ebadinia", "222-11-3333", salariedEmployee);


        System.out.println(first.toString());
        System.out.println(second.toString());
        System.out.println(third.toString());
        System.out.println(fourth.toString());
    }
}
