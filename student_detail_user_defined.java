import java.io.*;

class Student {
    String sname;
    int rollnumber;
    float marks;

    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public void accept_details() throws IOException{
        System.out.println("Enter the name of the student");
        sname = br.readLine();
        System.out.println("Enter the roll number");
        rollnumber = Integer.parseInt(br.readLine());
        System.out.println("Enter the marks of the student");
        marks = Float.parseFloat(br.readLine());
    }

    public void display_details() {
        System.out.println("Student name is: " + sname);
        System.out.println("Student roll number is: " + rollnumber);
        System.out.println("Marks of the student is: " + marks);
    }


	public static void main (String args[]){
		Student s1=new Student();
		try {
            s1.accept_details();
            s1.display_details();
        } catch (IOException e) {
            e.printStackTrace();
        }
	}
}