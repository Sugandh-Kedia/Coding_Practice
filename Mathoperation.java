import java.util.Scanner;
public class Mathoperation {
    public static void main(String[] args) {
        Scanner sr=new Scanner(System.in);
        System.out.println("Enter the first number: ");
        int a=sr.nextInt();
        System.out.println("Enter the second number");
        int b=sr.nextInt();
        int c=0;
        while(c<6){
        System.out.println("Enter 1 for addition");
            System.out.println("Enter 2 for Multiplication");
            System.out.println("Enter 3 for Subtraction");
            System.out.println("Enter 4 for division");
            System.out.println("Enter 5 for Modulus");
            System.out.println("Enter any number greater then 5 for exiting the loop\n");
            c=sr.nextInt();
            int d=0;
            switch (c) {
                case 1:
                    d=a+b;
                    System.out.println("Result is: "+d);
                    break;
                case 2:
                    d=a*b;
                    System.out.println("Result is: "+d);
                    break;
                case 3:
                    d=b-a;
                    System.out.println("Result is: "+d);
                    break;
                case 4:
                    d=a/b;
                    System.out.println("Result is: "+d);
                    break;
                case 5:
                    d=a%b;
                    System.out.println("Result is: "+d);
                    break;
                default:
                    System.out.println("Invalid option has been choosen");
                    break;
            }
            System.out.println(" ");
        }
        sr.close();
    }
    
}
