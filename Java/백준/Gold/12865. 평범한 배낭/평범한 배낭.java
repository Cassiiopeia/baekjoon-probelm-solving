import java.util.*;
//BJ12865
class Solution_0315_01 {
    public int solution(int N , int K, int[][] items) {
        // DP 테이블 초기화
        int[][] dp = new int[N+1][K+1];

        // DP 로직
        for(int i = 1 ; i<=N ; i++){
            for(int w = 1 ; w<=K ; w++){
                int weight = items[i-1][0];
                int value = items[i-1][1];

                if(weight <= w){
                    dp[i][w] = Math.max(dp[i-1][w], dp[i-1][w-weight] + value);
                } else if (weight > w) {
                    dp[i][w] = dp[i-1][w];
                }
            }
        }

        // 최대 가치합
        return dp[N][K];
    }
}
public class Main {
    public static void main(String[] args) {
        Solution_0315_01 solution = new Solution_0315_01();
        Scanner scanner = new Scanner(System.in);

        // 물품 N 받기
        int N = scanner.nextInt();

        // 무게 K 받기
        int K = scanner.nextInt();

        // DP설정 각물품 무게-가치 저장 배열
        int[][] items = new int[N][2];
        for(int i = 0 ; i< N ; i++){
            items[i][0] = scanner.nextInt();
            items[i][1] = scanner.nextInt();
        }

        System.out.println(solution.solution(N,K,items));

        scanner.close();
    }
}
