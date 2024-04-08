#include <iostream>
#include <vector>
using namespace std;

int sol_10950(int x, int y) {
    return x+y;
}

int main() {
    int a,x,y;
    cin >> a;

    int* results = new int[a];
    for(int i=0 ; i<a ; i++){
        cin >> x >> y ;
        results[i] = sol_10950(x,y);
    }
    
    for(int i=0 ; i<a; i++){
        cout << results[i] << "\n";
    }

    delete[] results;

    return 0;
}