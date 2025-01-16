import java.util.Scanner;
public class left_hand_numebric_triangle_seperate {
    public static void main(String []Args){
        Scanner sr= new Scanner(System.in);
        System.out.println("Enter the length: ");
        int side=sr.nextInt();
        for(int i=1;i<=side;i++){
            int a=1;
            while (a<=i) {
                System.out.print(a);
                a++;
            }
            System.out.println(" ");
        }
        sr.close();
    }
    
}