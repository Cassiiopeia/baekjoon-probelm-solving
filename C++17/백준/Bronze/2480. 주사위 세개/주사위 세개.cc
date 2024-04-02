#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sol_2480(int a, int b, int c) {
    int result = 1;
    vector<int> dice = {a,b,c};

    sort(dice.begin(), dice.end());
    
    if(dice[0] == dice[1] && dice[1] == dice[2] && dice[0] == dice[2]){
        return 10000 + dice[0]*1000;
    } else if (dice[0] == dice[1] || dice[1] == dice[2] || dice[0] == dice[2]){
        return 1000 + dice[1]*100;
    } else{ // 다른경우
        return dice[2] * 100;
    }
    return -1;
}

int main() {
    int a,b,c ;
    cin >> a >> b >> c;
    cout << sol_2480(a,b,c);
    return 0;
}