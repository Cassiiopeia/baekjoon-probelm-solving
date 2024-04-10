#include <iostream>
#include <string>
#include <vector>
using namespace std;

void sol_15552(int len, const vector<int> &vector) { 
    for (int i = 0; i <len ; i++){
        cout << vector[i] << "\n";
    } 
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a,b,c;
  cin >> a;
  vector<int> result;
  for(int i= 0 ; i<a ; i++){
    cin >> b >> c;
    result.push_back(b+c);
  }
  sol_15552(a, result);
  return 0;
}