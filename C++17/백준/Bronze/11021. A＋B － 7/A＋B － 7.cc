#include <iostream>
#include <string>
#include <vector>
using namespace std;

string make_case_string(int idx) {
  const string CASE_STRING = "Case #";
  return CASE_STRING + to_string(idx + 1) + ": ";
}

void sol_11021(int len, const vector<int> &vector) {
  for (int i = 0; i < len; i++) {
    cout << make_case_string(i) << vector[i] << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a, b, c;
  // 테스트케이스 개수
  cin >> a;

  vector<int> result;
  for (int i = 0; i < a; i++) {
    cin >> b >> c;
    result.push_back(b + c);
  }

  sol_11021(a, result);
  return 0;
}