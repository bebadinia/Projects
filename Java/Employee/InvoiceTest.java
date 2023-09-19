import java.util.Scanner;

//Section 3.12

public class InvoiceTest
{
    public static void main(String[] args)
    {
        Invoice invoice1 = new Invoice("1111", "Wrench", -5,25.00);
        Invoice invoice2 = new Invoice("2222", "Screwdriver", 3,12.99);

        System.out.println("Invoice 1 Part Number: " + invoice1.getPartNum());
        System.out.println("Invoice 1 Part Description: " + invoice1.getPartDes());
        System.out.println("Invoice 1 Part Quantity: " + invoice1.getPartQuan());
        System.out.println("Invoice 1 Part Price: " + invoice1.getPartPrice());
        System.out.println("Invoice 1 Invoice Total: " + invoice1.getInvoiceAmount());

        System.out.println("\n");

        System.out.println("Invoice 2 Part Number: " + invoice2.getPartNum());
        System.out.println("Invoice 2 Part Description: " + invoice2.getPartDes());
        System.out.println("Invoice 2 Part Quantity: " + invoice2.getPartQuan());
        System.out.println("Invoice 2 Part Price: " + invoice2.getPartPrice());
        System.out.println("Invoice 2 Invoice Total: " + invoice2.getInvoiceAmount());


    }
}
