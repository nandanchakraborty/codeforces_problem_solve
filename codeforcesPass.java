import java.util.Scanner;

public class codeforcesPass {



        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);

            int t = scanner.nextInt();
            scanner.nextLine(); // Consume newline left-over
            for (int i = 0; i < t; i++) {
                String s = scanner.nextLine();
                System.out.println(findMaxTimePassword(s));
            }

            scanner.close();
        }

        private static String findMaxTimePassword(String s) {
            int maxTime = -1;
            String bestPassword = "";

            for (char c = 'a'; c <= 'z'; c++) {
                for (int i = 0; i <= s.length(); i++) {
                    String newPassword = s.substring(0, i) + c + s.substring(i);
                    int time = calculateTime(newPassword);

                    if (time > maxTime) {
                        maxTime = time;
                        bestPassword = newPassword;
                    }
                }
            }

            return bestPassword;
        }

        private static int calculateTime(String s) {
            int time = 2; // Time to type the first character

            for (int i = 1; i < s.length(); i++) {
                if (s.charAt(i) == s.charAt(i - 1)) {
                    time += 1;
                } else {
                    time += 2;
                }
            }

            return time;
        }
    }



