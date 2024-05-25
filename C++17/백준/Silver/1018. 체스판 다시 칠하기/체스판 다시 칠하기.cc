#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int count_repaints(vector<vector<int>> &board, int x, int y, int start_color) {
    int repaints = 0;
    int current_color = start_color;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[x + i][y + j] != current_color) {
                repaints++;
            }
            current_color = (current_color == 0) ? 1 : 0;
//            current_color = 1 - current_color; //NOTE: 같은말
        }
        current_color = (current_color == 0) ? 1 : 0;
    }
    return repaints;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;

    // board 이중배열 선언 (가로 M 세로 N)
    cin >> N >> M;
    vector<vector<int>> board(N, vector<int>(M));

    // board로 모든 값 집어넣는다
    for (int i = 0; i < N; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < M; j++) {
            board[i][j] = (row[j] == 'W') ? 0 : 1; // W면 0, B면 1
        }
    }

    int min_repaints = 64; // 최대 8*8 = 64 이므로 초기값을 64로 설정
    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            // 두 가지 색칠 방법이 존재하니 각각 계산 -> W, B
            int repaints_w = count_repaints(board, i, j, 0);
            int repaints_b = count_repaints(board, i, j, 1);

            int repaints = min(repaints_b, repaints_w);

            // 최소값 갱신
            min_repaints = min(min_repaints, repaints);
        }
    }

    cout << min_repaints << endl;
    return 0;
}