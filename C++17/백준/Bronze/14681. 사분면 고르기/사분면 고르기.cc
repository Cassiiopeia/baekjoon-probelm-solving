#include <iostream>
using namespace std;

int sol_14681(int a, int b) {
    int result = 0;
    if(a>0 && b>0){
        return 1;
    } else if(a<0 && b>0){
        return 2;
    } else if(a<0 && b<0){
        return 3;
    } else if (a>0 && b<0){
        return 4;
    }
    return -1;
}

int main() {
    int a = 0;
    int b = 0;

    cin >> a;
    cin >> b;

    cout << sol_14681(a,b);

    return 0;
}