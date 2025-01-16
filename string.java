import java.util.*;

public class string {
    public static void main(String[] args) {
        Scanner sr=new Scanner(System.in);
        System.out.println("Enter the first word");
        String str1=sr.nextLine();
        System.out.println("Enter the first word");
        String str2=sr.nextLine();
        boolean a=str1.equalsIgnoreCase(str2);
        System.out.println(a);
    }
}
