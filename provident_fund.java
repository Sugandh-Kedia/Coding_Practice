import java.util.Scanner;

public class provident_fund {
    public static void main(String[] args) {
        Scanner sr= new Scanner(System.in);
        System.out.println("Enter the basic salary pay: ");
        double bsp=sr.nextDouble();
        double provident_fund = bsp * 0.12;
        System.out.print("provident fund acoording to your salary is: "+ provident_fund);
        sr.close();
    }
}
