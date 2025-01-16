import java.util.Scanner;
public class shape_inherit {
    public static void main(String[] args) {
        Scanner sr=new Scanner(System.in);
        int area;
        System.out.println("Choose the option: ");
        System.out.println("Enter 1 for square");
        System.out.println("Enter 2 for rectangle");
        System.out.println("Enter 3 for triangle");
        int a=sr.nextInt();
        switch(a){
            case 1:
                System.out.println("Enter the length of the side of the square: ");
                int side=sr.nextInt();
                area=side*side;
            case 2:

        }
    }
}
