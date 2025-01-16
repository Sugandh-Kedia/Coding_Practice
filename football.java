import java.util.Scanner;

public class football {
    static String solution(int goal, String[] names) {
        String temp = names[0];
        String tempo = "";
        int a = 0, b = 0;

        for (int i = 0; i < goal; i++) {
            if (names[i].equals(temp)) {
                a++;
            } else {
                tempo = names[i];
                b++;
            }
        }

        // Return the player with the most goals or the only player
        if (a > b || goal == 1) {
            return temp;
        } else {
            return tempo;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int round = sc.nextInt();
        sc.nextLine(); // Consume the leftover newline

        String[] goaler = new String[round];
        for (int i = 0; i < round; i++) {
            goaler[i] = sc.nextLine();
        }

        String winner = solution(round, goaler);
        System.out.println(winner);

        sc.close();
    }
}
