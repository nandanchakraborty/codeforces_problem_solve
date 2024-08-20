import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class MakeAllEqual {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int n = sc.nextInt();
            Map<Integer, Integer> map = new HashMap<>();
            int max = 0;
            for(int i = 0; i < n; i++) {
                int cur = sc.nextInt();
                map.put(cur, map.getOrDefault(cur, 0) + 1);
                max = Math.max(max, map.get(cur));
            }
            System.out.println(n - max);
        }
    }
}