#include <iostream>
using namespace std;

int sol_8393(int a) {
  int sum = 0;
  for (int i = 1; i <= a; i++) {
    sum += i;
  }
  return sum;
}

int main() {
  int a = 0;
  cin >> a;
  cout << sol_8393(a);
  return 0;
}