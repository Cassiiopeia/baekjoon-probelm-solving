import java.util.*;

class Solution_0317_03 {
    public void solution(int A, int B) {
        String stringA = String.valueOf(A);
        String stringB = String.valueOf(B);

        char[] bArray = stringB.toCharArray();
        int bLength = stringB.length();

        for (int i = bLength - 1; i >= 0; i--) {
            System.out.println(A * Character.getNumericValue(bArray[i]));
        }
        System.out.println(A * B);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int A = scanner.nextInt();
        int B = scanner.nextInt();

        Solution_0317_03 solution = new Solution_0317_03();
        solution.solution(A, B);
    }
}
