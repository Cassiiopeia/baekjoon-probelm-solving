#include <iostream>
using namespace std;

void sol_2438(int n) {
    for(int i=1 ; i<=n ; i++){
        for(int k=0 ; k<i  ; k++){
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int a;
    cin >> a;
    sol_2438(a);
    return 0;
}