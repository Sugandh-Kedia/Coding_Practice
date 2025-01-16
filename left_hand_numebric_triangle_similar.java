import java.util.Scanner;
public class left_hand_numebric_triangle_similar {

public static void main(String[] args) {
    Scanner sr= new Scanner(System.in);
    System.out.println("Enter the length: ");
    int side=sr.nextInt();
    for(int i=1;i<=side;i++){
        int temp=i;
        while (temp>0) {
            System.out.print(i);
            temp--;
        }
        System.out.println(" ");
    }
    sr.close();
}
}
