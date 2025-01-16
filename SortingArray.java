// assending
// import java.util.*;
// public class SortingArray{
//     public static void main(String[] args) {
//         Scanner sr=new Scanner(System.in);
//         System.out.println("Enter the number of elements");
//         int a=sr.nextInt();
//         int[] arr= new int[a];
//         for(int x=0;x<a;x++){
//             System.out.println("Enter the "+(x+1)+" Number");
//             arr[x]=sr.nextInt();
//         }
//         for(int j=0;j<a-1;j++){
//             for(int k=0;k<a-j-1;k++){
//                 if(arr[k]>arr[k+1]){
//                     int temp=arr[k];
//                     arr[k]=arr[k+1];
//                     arr[k+1]=temp;
//                 }
//             }
//         }
//         for(int x=0;x<a;x++){
//             System.out.print(arr[x]+" ");
//         }
//     }
// }

//desending

// import java.util.*;
// public class SortingArray{
//     public static void main(String[] args) {
//         Scanner sr=new Scanner(System.in);
//         System.out.println("Enter the number of elements");
//         int a=sr.nextInt();
//         int[] arr= new int[a];
//         for(int x=0;x<a;x++){
//             System.out.println("Enter the "+(x+1)+" Number");
//             arr[x]=sr.nextInt();
//         }
//         for(int j=0;j<a-1;j++){
//             for(int k=0;k<a-j-1;k++){
//                 if(arr[k]<arr[k+1]){
//                     int temp=arr[k];
//                     arr[k]=arr[k+1];
//                     arr[k+1]=temp;
//                 }
//             }
//         }
//         for(int x=0;x<a;x++){
//             System.out.print(arr[x]+" ");
//         }
//     }
// }