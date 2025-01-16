import java.util.*;
public class student
{
    private String name;
    private int roll_no;
    private int id;
    private int marks;

    // constructor
    student(String name, int roll_no, int id, int marks){
        this.name=name;
        this.roll_no=roll_no;
        this.id=id;
        this.marks=marks;
    }
    //methods
    public void display(){
        System.out.println("Name of the student is: "+name);
        System.out.println("Roll number of student is: "+roll_no);
        System.out.println("Id of the student is: "+id);
        System.out.println("Marks of the student is: "+marks);
    }
    public static void main(String[] args){
        Scanner sr=new Scanner(System.in);
        System.out.println("Enter the number of the student: ");
        int no=sr.nextInt();
        sr.nextLine();
        student[] s=new student[no];
        for(int i=0;i<no;i++){  
            System.out.println("--------------------Enter the details of student no.:"+(i+1)+"--------------------");  
            System.out.println("Enter the name of the student: ");
            String name=sr.nextLine();
            System.out.println("Enter roll number of student: ");
            int roll_no=sr.nextInt();
            sr.nextLine();
            System.out.println("Enter the id of the student: ");
            int id =sr.nextInt();
            sr.nextLine();
            System.out.println("Enter the marks of the student marks: ");
            int marks=sr.nextInt();
            sr.nextLine();
            s[i]=new student(name,roll_no,id,marks);
        }
        for(int i=0;i<no;i++){
            System.out.println("--------------------Details of the student no. is:"+i+"--------------------");  
            s[i].display();
        }
        sr.close();
    }
}