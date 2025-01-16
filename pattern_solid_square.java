import java.util.Scanner;

public class pattern_solid_square {
    public static void main(String[] args) {
        Scanner sr= new Scanner(System.in);
        System.out.println("Enter the length of the side of the square: ");
        int side=sr.nextInt();
        for(int i=0;i<side;i++){
            for(int j=0;j<side;j++){
                System.out.print("*");
            }
            System.out.print("\n");
        }
        sr.close();
    }
}
