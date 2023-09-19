//Problem 10.18
public class PayableInterfaceTest
{
    public static void main(String[] args)
    {
        HourlyCompensationModel hourlyEmployee = new HourlyCompensationModel(20, 45);
        SalariedCompensationModel salariedEmployee  = new SalariedCompensationModel(1000);
        CommissionCompensationModel commissionEmployee = new CommissionCompensationModel(50000, 0.05);
        BasePlusCommissionCompensationModel basePlusCommissionEmployee  = new BasePlusCommissionCompensationModel(45000, 0.02, 1500);

        Employee first = new Employee("Ben", "Ebadinia", "543-11-5432", commissionEmployee);
        Employee second = new Employee("Alegra", "Ramos", "123-45-6789", basePlusCommissionEmployee);
        Employee third = new Employee("Brad", "Ebadinia", "987-65-4321", hourlyEmployee);
        Employee fourth = new Employee("Kamran", "Ebadinia", "222-11-3333", salariedEmployee);

        Payable payableObjects[] = new Payable[ 6 ];

        payableObjects[0] = new Invoice("01234", "Seat", 2, 375.00);
        payableObjects[1] = new Invoice("56789", "Tire", 4, 79.95);
        payableObjects[2] = first;
        payableObjects[3] = second;
        payableObjects[4] = third;
        payableObjects[5] = fourth;



        System.out.println("Invoices and Employees processed polymorphically: ");

        for (Payable currentPayable : payableObjects)
        {
            System.out.println(currentPayable.toString() + "\nPayment Due: " + String.format("%.2f", currentPayable.getPaymentAmount()));
        }
    }
}
