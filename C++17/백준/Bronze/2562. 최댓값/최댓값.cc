#include <iostream>
#include <vector>
using namespace std;

vector<int> sol_2562(const vector<int>& arr) {
    int max = arr[0];
    int max_idx = 1;
    for(int i=0 ; i<9 ; i++){
        if(max < arr[i]){
            max = arr[i];
            max_idx = i+1;
        }
    }
    return {max,max_idx};
}

int main() {
    int a;
    vector<int> arr(9);
    for(int i=0 ; i<9 ; i++){
        cin >> arr[i];
    }
    vector<int> result = sol_2562(arr);
    cout << result[0]<< "\n";
    cout << result[1]<< "\n";
    return 0;
}