#include <iostream>
using namespace std;

void sol_25314(int long_count) {
    const string LONG = "long";
    const string INT = "int";
    
    for(int i = 1; i<=long_count ; i++ ){
        cout << LONG << " ";
    }
    cout << INT;
}

int main() {
    int a = 0;

    // 정수 자료형의 이름
    cin >> a;
    int long_count = a/4;

    sol_25314(long_count);
    return 0;
}