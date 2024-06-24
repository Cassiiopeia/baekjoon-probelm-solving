import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int start = sc.nextInt();
        int end = sc.nextInt();

        // 소수에 대한 정보가 담긴 Boolean 배열
        boolean[] isSosu = new boolean[end+1];

        Arrays.fill(isSosu, true);

        // 0,1 소수 제외
        isSosu[0] = false;
        isSosu[1] = false;

        // 체 알고리즘
        for(int i=2 ; i*i <= end ; i++){
            if(isSosu[i]){
                for( int j = i*i ; j <= end ; j+=i){
                    isSosu[j] = false;
                }
            }
        }

        // start부터 end까지의 소수를 출력
        for (int i = start; i <= end; i++) {
            if (isSosu[i]) {
                System.out.println(i);
            }
        }
    }
    public static int solution() {
        return 0;
    }
}