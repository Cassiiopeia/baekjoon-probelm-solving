import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int targetNum = sc.nextInt();
        System.out.println(solution(targetNum));
    }

    public static int solution(int targetNum) {

        int zeroCount = 0;

        for (int i = 5; i <= targetNum; i += 5) {
            int curNum = i;
            while (curNum % 5 == 0) {
                curNum = curNum / 5;
                zeroCount++;
            }
        }

//        System.out.println(zeroCount);

        return zeroCount;
    }
}