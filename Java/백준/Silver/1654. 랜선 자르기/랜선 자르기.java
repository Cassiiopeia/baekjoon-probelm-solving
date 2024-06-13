import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int numCount = sc.nextInt(); // K: 이미 가지고 있는 랜선의 개수
        int targetCount = sc.nextInt(); // N: 필요한 랜선의 개수
        int[] lines = new int[numCount];

        long maxNum = 0;
        for (int i = 0; i < numCount; i++) {
            lines[i] = sc.nextInt();
            if (lines[i] > maxNum) {
                maxNum = lines[i];
            }
        }

        // 이분 탐색을 위한 초기값 설정
        long front = 1;
        long back = maxNum;
        long result = 0;

        while (front <= back) {
            long mid = (front + back) / 2;
            long count = 0;

            // mid 길이로 몇 개의 랜선을 만들 수 있는지 계산
            for (int num : lines) {
                count += num / mid;
            }

            // 필요한 랜선 개수 이상을 만들 수 있는 경우
            if (count >= targetCount) {
                result = mid;
                front = mid + 1; // 더 긴 길이를 시도
            } else {
                back = mid - 1; // 더 짧은 길이를 시도
            }
        }

        // 최종 결과 출력
        System.out.println(result);
    }
}