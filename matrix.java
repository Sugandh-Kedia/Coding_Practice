import java.util.*;
public class matrix {
    public static void main(String[] args) {
        Scanner sr=new Scanner(System.in);
        System.out.println("Enter the number of rows of the matrix");
        int row=sr.nextInt();
        System.out.println("Enter the number of column of the matrix");
        int column=sr.nextInt();
        int arr[][]=new int[row][column];
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                System.out.println("Enter the elements of the matrix");
                arr[i][j]=sr.nextInt(); 
            }
        }
        System.out.println("The elements of the matrix are");
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                System.out.print(arr[i][j]+"    ");
            }
            System.out.println("\n");
        }
    }
}
