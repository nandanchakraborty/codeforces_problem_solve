import java.util.Arrays;
import java.util.Scanner;

 class puzzle {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int n = sc.nextInt()-1;
            int m = sc.nextInt();
            int[] a = new int[m];
            for (int i=0;i<m;i++){
                a[i] = sc.nextInt();
            }
            int minDifference = Integer.MAX_VALUE;
            Arrays.sort(a);
            for (int i=0; i<=m-n-1;i++){
                int difference = a[i+n]- a[i];
                if (difference < minDifference){
                    minDifference = difference ;
                }
            }
            System.out.println(minDifference);
        }
    }

