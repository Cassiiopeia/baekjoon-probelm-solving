#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

double sol_1546(int a, vector<double> &scores) {
  double max = *max_element(scores.begin(), scores.end());
  double sum = 0;
  vector<double> new_scores;

  for (int i = 0; i < a; i++) {
    double new_score = (scores[i] / max) * 100;
    sum += new_score;
  }
  double score_average = sum / a;
  return score_average;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a = 0;
  // 전체 개수
  cin >> a;

  // 과목 점수 리스트
  vector<double> scores(a);

  for (int i = 0; i < a; i++) {
    cin >> scores[i];
  }

  cout << fixed;
  cout.precision(2);
  cout << sol_1546(a, scores);
  return 0;
}