import java.util.*;
// BJ10926
class Solution_0317_01 {
    public String solution(String name) {
        return name+"??!";
    }
}
public class Main {
    public static void main(String[] args) {
        Solution_0317_01 solution = new Solution_0317_01();
        Scanner scanner = new Scanner(System.in);

        String name = scanner.nextLine();

        System.out.println(solution.solution(name));
    }
}
