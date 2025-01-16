import java.util.Scanner;

public class gross_salary {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a basic salary: ");
        int basic_salary = scanner.nextInt();   
        double  da= (basic_salary*(45.0/100));
        double  hra= (basic_salary*(10.0/100));
        double  tax= ((basic_salary+da)*(5.0/100));
        double gross_salary= (basic_salary)+(da)+(hra)-(tax);
        System.out.println("The gross salary is: " + gross_salary );
        scanner.close();
    }
}
