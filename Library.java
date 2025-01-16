import java.io.*;

public class Library {
    String bookName;
    int serialNumber;
    String author;

    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public void acceptDetails() throws IOException {
        System.out.println("Enter the name of the book:");
        bookName = br.readLine();
        System.out.println("Enter the Serial No:");
        serialNumber = Integer.parseInt(br.readLine());
        System.out.println("Enter the author's name:");
        author = br.readLine();
    }

    public void displayDetails() {
        System.out.println("Book name is: " + bookName);
        System.out.println("Book serial no is: " + serialNumber);
        System.out.println("Author of the book is: " + author);
    }

    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the number of books:");
        int numberOfBooks = Integer.parseInt(br.readLine());
        Library[] arr = new Library[numberOfBooks];
        for (int i = 0; i < numberOfBooks; i++) {
            arr[i] = new Library(); // Initialize each element in the array
            arr[i].acceptDetails();
        }
        System.out.println("\nBook Details:");
        for (int i = 0; i < numberOfBooks; i++) {
            arr[i].displayDetails();
            System.out.println("--------------------------------");
        }
    }
}
