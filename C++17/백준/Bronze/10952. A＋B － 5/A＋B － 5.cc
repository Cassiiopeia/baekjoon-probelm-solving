#include <iostream>
#include <vector>
using namespace std;

void sol_10952(const vector<int>& vector) {
    int len = vector.size();
    for(int i=0 ; i< len-1 ; i++){
        cout << vector[i] << "\n";    
        }
}

int main() {
    int a,b;
    vector<int> vector;
    while (!(a==0 && b==0)){
        cin >> a >> b;
        vector.push_back(a+b);
    }
    sol_10952(vector);
    return 0;
}