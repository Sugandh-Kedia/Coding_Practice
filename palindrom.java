import java.util.Scanner;
public class palindrom{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int digit=scanner.nextInt();
        int reverse=0;
        int original=digit;
        while (original > 0) {
            int num = original % 10;
            reverse = (reverse * 10) + num;
            original /= 10;
        }

        if(digit==reverse){
            System.out.println("The entered number is palindriom");
        }else{
            System.out.println("The entered number is not a palindrom");
        }
        scanner.close();
    } 
}