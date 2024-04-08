#include <iostream>
using namespace std;

void sol_2439(int a) {
    int result = 0;
    int max_blank = a;
    for(int i=1 ; i<=a ; i++){
        for(int n=0 ; n< a-i ; n++){
            cout << " ";
        }
        for(int k=0 ; k< i ; k++){
            cout << "*";
        }
        cout << "\n";
    }
}

int main() {
    int a = 0;
    cin >> a;
    sol_2439(a);
    return 0;
}