import java.util.*;
//BJ10430
class Solution_0317_02 {
    public void solution(int A, int B, int C) {
        System.out.println((A+B)%C);
        System.out.println(((A%C) + (B%C))%C);
        System.out.println((A*B)%C);
        System.out.println(((A%C) * (B%C))%C);
    }
}
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int A = scanner.nextInt();
        int B = scanner.nextInt();
        int C = scanner.nextInt();

        Solution_0317_02 solution = new Solution_0317_02();
        solution.solution(A,B,C);
    }
}