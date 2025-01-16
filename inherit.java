import java.util.*;
public class inherit{
    static class college{
        Scanner sc=new Scanner(System.in);
        private String clg_name;
        private String clg_city;
        public void acceptCollege(){
            System.out.println("Enter the college name: ");
            clg_name=sc.next();
            System.out.println("Enter the college city");
            clg_city=sc.next();
        }
        public void displayCollege(){
            System.out.println("--------------------**Details of the college is**--------------------");
            System.out.println("Name of the college is: "+clg_name);
            System.out.println("City in which college is present: "+clg_city);
            System.out.println("----------------------------------------------------------------------");
        }
    }
    static class course extends college{
        private String degree, branch;
        public void acceptCourse(){
            System.out.println("Enter the degree name: ");
            degree=sc.next();
            System.out.println("Enter the branch name: ");
            branch=sc.next();
        }
        public void displayCourse(){
            System.out.println("--------------------**Details of the course is**--------------------");
            System.out.println("Name of the degree: "+degree);
            System.out.println("Name of the branch is: "+branch);
            System.out.println("----------------------------------------------------------------------");
        }
    }

    public static void main(String[] args) {
        course c1=new course();
        c1.acceptCollege();
        c1.acceptCourse();
        c1.displayCollege();
        c1.displayCourse();
    }
}