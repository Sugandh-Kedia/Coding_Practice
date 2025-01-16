import java.util.Scanner;

public class MultiLevelInherit {
    class MultiLevelInherit {
        private int side;
        Scanner sr = new Scanner(System.in);

        public Square() {
            System.out.println("Enter the value of the side: ");
            side = sr.nextInt();
        }

        public void perimeter() {
            System.out.println("Perimeter of the square is: " + (4 * side));
        }

        public int getSide() {
            return side;
        }
    }

    class Rectangle extends MultiLevelInherit {
        private int breadth;

        public Rectangle() {
            super();
            System.out.println("Enter the breadth of the rectangle: ");
            breadth = sr.nextInt();
        }

        @Override
        public void perimeter() {
            super.perimeter();
            int length = super.getSide();
            System.out.println("Perimeter of the rectangle is: " + (2 * (length + breadth)));
        }

        public int getBreadth() {
            return breadth;
        }
    }

    class Triangle extends Rectangle {
        private int side3;

        public Triangle() {
            super();
            int side1 = super.getSide();
            int side2 = super.getBreadth();
            System.out.println("Enter the 3rd side of the triangle: ");
            side3 = sr.nextInt();
        }

        @Override
        public void perimeter() {
            super.perimeter(); // Call the perimeter method of Rectangle
            System.out.println("Perimeter of the triangle is: " + (super.getSide() + super.getBreadth() + side3));
        }
    }

    public static void main(String[] args) {
        MultiLevelInherit.Triangle T1 = new MultiLevelInherit().new Triangle();
        T1.perimeter();
    }
}

