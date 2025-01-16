import java.util.Scanner;

public class digit_summation {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int digit = scanner.nextInt();
        int once=(digit%10)/1;
        int ten=(digit%100)/10;
        int hundred=(digit%1000)/100;
        
        int sum=(once+ten+hundred);
        System.out.println(sum);
    }
}
