
// you can also use imports, for example:
import java.util.*;
import java.lang.Object;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    public static void main(String[] args) {
        // int n = 285;
        // int k = 20;
        // System.out.println(solution2(n, k));
        int n = 5;
        int k = 8;
        System.out.println(solution3(n, k));
        // String s = "RLLLRRRLLR";
        // System.out.println(solution1(s));
    }

    public static int solution1(String S) {
        // write your code in Java SE 8

        return 1;
    }

    public static int solution3(int N, int K) {
        // write your code in Java SE 8
        List<Integer> n = new ArrayList<>();
        int glasses = 0;
        int sum = N * (1 + N) / 2;
        if (sum < K) {
            return -1;
        }
        int k = 0;
        for (int i = N; i > 0; i--) {
            n.add(i);
        }
        for (int i : n) {
            if (K - i >= 0) {
                K -= i;
                glasses++;
                sum += i;
            }
        }
        return glasses;
    }

    public static int solution2(int N, int K) {
        // write your code in Java SE 8
        List<Integer> n = new ArrayList<>();
        List<String> s = new ArrayList<>();
        String snum = String.valueOf(N);
        for (int i = 0; i < snum.length(); i++) {
            String l = snum.substring(i, i + 1);
            n.add(Integer.parseInt(l));
        }
        for (int i = 0; i < n.size(); i++) {
            while (n.get(i) < 9) {
                if (K > 0) {
                    n.set(i, n.get(i) + 1);
                    K -= 1;
                } else {
                    break;
                }
            }
        }
        for (int i : n) {
            s.add(String.valueOf(i));
        }
        String result = String.join("", s);
        return Integer.parseInt(result);
    }
}
