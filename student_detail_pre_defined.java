class Student {
    String sname;
    int rollnumber;
    float marks;

    public void accept_details() {
        sname = "Sugandh Kedia";
        rollnumber = 55;
        marks = 93.5f;
    }

    public void display_details() {
        System.out.println("Student name is: " + sname);
        System.out.println("Student roll number is: " + rollnumber);
        System.out.println("Marks of the student is: " + marks);
    }


	public static void main (String args[]){
		Student s1=new Student();
		s1.accept_details();
		s1.display_details();
	}
}