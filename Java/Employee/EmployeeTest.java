//Section 3.13

public class EmployeeTest
{
    public static void main(String[] args)
    {
        Employee employee1 = new Employee("Jane", "Green", 1000.50);
        Employee employee2 = new Employee("John", "Blue", 2500.75);

        System.out.println(employee1.getfName() + employee1.getlName() + "'s Monthly Salary: " + String.format("%.2f", employee1.getmSalary()));
        System.out.println(employee2.getfName() + employee2.getlName() + "'s Monthly Salary: " + String.format("%.2f", employee2.getmSalary()));

        System.out.println("Increasing monthly salary by 10%");
        employee1.setmSalary(employee1.getmSalary() * 1.1);
        employee2.setmSalary(employee2.getmSalary() * 1.1);

        System.out.println(employee1.getfName() + employee1.getlName() + "'s Monthly Salary: " + String.format("%.2f", employee1.getmSalary()));
        System.out.println(employee2.getfName() + employee2.getlName() + "'s Monthly Salary: " + String.format("%.2f", employee2.getmSalary()));
    }
}
