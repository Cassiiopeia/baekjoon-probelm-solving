#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    // A : 시
    // B : 분
    // C : 소요 시간(분)
    cin >> A >> B;
    cin >> C;

    int addedminute = B + C;
    int calculated_hour = ( A + addedminute / 60 ) %24 ;
    int calculated_minute = addedminute % 60;

    // 결과 출력
    cout << calculated_hour << " " << calculated_minute;
    return 0;
}