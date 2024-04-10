#include <iostream>
#include <vector>

using namespace std;

void sol_10871(int len, int baseline_num, const vector<int> &num_list) {
  for (int i = 0; i < len; i++) {
    if (num_list[i] < baseline_num) {
      cout << num_list[i] << " ";
    }
  }
}

int main() {
  int a, b, num;
  cin >> a >> b;
  vector<int> num_list(a);
  for (int i = 0; i < a; i++) {
    cin >> num;
    num_list[i] = num;
  }
  sol_10871(a, b, num_list);
  return 0;
}