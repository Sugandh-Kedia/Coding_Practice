import java.util.*;
public class StudentDetail {
    public static void main(String[] args) {
        Scanner sr=new Scanner(System.in);
        System.out.println("Enter the number of students:");
        int numberOfStudents = sr.nextInt();
        String[] studentNames = new String[numberOfStudents];
        int[] studentRollNumbers = new int[numberOfStudents];
        double[] studentMarks = new double[numberOfStudents];
        System.out.println("-------------------------------------------------------------------------------------------------------------------");
        for (int i = 0; i < numberOfStudents; i++) {
            System.out.println("Enter details for Student " + (i + 1) + ":");
            System.out.print("Name: ");
            sr.nextLine();  
            studentNames[i] = sr.nextLine();
            System.out.print("Roll Number: ");
            studentRollNumbers[i] = sr.nextInt();
            System.out.print("Marks: ");
            studentMarks[i] = sr.nextDouble();
            System.out.println("---------------------------------------------------------------------------------------------------------------");
        }
        System.out.println("\nStudent Details:");
        System.out.println("-------------------------------------------------------------------------------------------------------------------");

        for (int i = 0; i < numberOfStudents; i++) {
            System.out.println("Student " + (i + 1) + ":");
            System.out.println("Name: " + studentNames[i]);
            System.out.println("Roll Number: " + studentRollNumbers[i]);
            System.out.println("Marks: " + studentMarks[i]);
            System.out.println("---------------------------------------------------------------------------------------------------------------");
        }
        sr.close();
    }
}



// import java.io.*;

// class Student {
//     String sname;
//     int rollnumber;
//     float marks;

//     BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

//     public void accept_details() throws IOException {
//         System.out.println("Enter the name of the student");
//         sname = br.readLine();
//         System.out.println("Enter the roll number");
//         rollnumber = Integer.parseInt(br.readLine());
//         System.out.println("Enter the marks of the student");
//         marks = Float.parseFloat(br.readLine());
//     }

//     public void display_details() {
//         System.out.println("Student name is: " + sname);
//         System.out.println("Student roll number is: " + rollnumber);
//         System.out.println("Marks of the student is: " + marks);
//     }

//     public static void main(String args[]) throws IOException {
//         BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//         System.out.println("Enter the number of students:");
//         int numberOfStudents = Integer.parseInt(br.readLine());
//         Student[] arr = new Student[numberOfStudents];
//         for (int i = 0; i < numberOfStudents; i++) {
//             arr[i] = new Student(); // Initialize each element in the array
//             arr[i].accept_details();
//         }
//         System.out.println("\nStudent Details:");
//         for (int i = 0; i < numberOfStudents; i++) {
//             arr[i].display_details();
//             System.out.println("--------------------------------");
//         }
//     }
// }
