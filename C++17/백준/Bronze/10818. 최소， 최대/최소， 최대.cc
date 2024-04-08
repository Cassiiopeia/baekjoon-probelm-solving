#include <iostream>
#include <vector>
using namespace std;

vector<int> sol_10818(int length, int values[]) {
    if(length == 0){
        return vector<int>{0,0};
    }

    int min = values[0];
    int max = values[0];
    
    for(int i=0 ; i<length ; i++){
        if(values[i] < min){
            min = values[i];
        }
        if(values[i] > max){
            max = values[i];
        }
    }
    return vector<int>{min,max};
}

int main() {
    int a,k;
    cin >> a;

    int* values = new int[a];

    for(int i=0 ; i<a ; i++){
        cin >> values[i];
    }

    vector<int> results = sol_10818(a,values);

    cout << results[0] << " " << results[1];

    delete[] values;

    return 0;
}