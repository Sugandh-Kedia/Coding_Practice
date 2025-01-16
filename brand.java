import java.util.Scanner;

class brand{
    public static void main(String []Arg){
        String brand;
        Scanner sr=new Scanner(System.in);
        System.out.println("Enter the brand name:");
        brand=sr.nextLine();
        switch (brand) {
            case "Nike":
                System.out.println("Just do it");
                break;
        
            case "Adidas":
                System.out.println("Impossible is nothing");
                break;
            case "Puma":
                System.out.println("Forever Faster");
                break;
            case "Reebok":
                System.out.println("I am What I am");
                break;
            
            default:
            System.out.println("Invalid Input, pls try again");
                break;
        }

        sr.close();
    } 
}