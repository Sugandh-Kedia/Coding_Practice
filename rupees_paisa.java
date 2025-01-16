import java.util.Scanner;

public class rupees_paisa {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        scanner.close();
        System.out.print("Enter a number: ");
        int c_rupees = scanner.nextInt();   
        int  rupees= (c_rupees/100);
        int paisa = c_rupees % 100;  
        System.out.println("The rupees is: " + rupees);
        System.out.println("The paisa is: "+paisa);
    }
}
