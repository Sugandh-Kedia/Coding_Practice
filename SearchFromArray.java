import java.util.*;

public class SearchFromArray {
    public static void main(String[] args) {
        Scanner sr = new Scanner(System.in);
        System.out.println("Enter the number of elements:");
        int n = sr.nextInt();
        int[] arr = new int[n];
        int[] index=new int[n];
        int a=0;
        System.out.println("Enter the array elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = sr.nextInt();
        }
        System.out.println("Enter the number to find occurrences:");
        int target = sr.nextInt();
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                count++;
                index[a]=i;
                a++;
            }
        }if(count>0){
            System.out.println("Number of occurrences: " + count);
            System.out.print("Indices where " + target + " is found: ");
            for(int j=0;j<count;j++){
                System.out.print(index[j]+",");
            }
        }else{
            System.out.println("error");
        }
    }
}
