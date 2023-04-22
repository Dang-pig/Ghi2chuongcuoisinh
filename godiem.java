import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner inputScanner = new Scanner(System.in);
        boolean cangodiem = false;

        // Input and validation loop
        while (true) {
            System.out.print("Mày có cần gỡ điếm ko? (1/0):");
            int userInput = inputScanner.nextInt();

            if (userInput == 1) {
                cangodiem = true;
                break;
            } else if (userInput == 0) {
                cangodiem = false;
                break;
            } else {
                System.out.println("Mày có cần gỡ điếm ko? (1/0):");
            }
        }

        // Output based on cangodiem value
        if (cangodiem) {
            System.out.println("Ghi full tiêu đề + ghi nhớ 2 chương cuối");
        } else {
            System.out.println("Ghi full tiêu đề 2 chương cuối");
        }

        inputScanner.close();
    }
}
