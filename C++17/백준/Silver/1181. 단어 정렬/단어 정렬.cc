// https://www.acmicpc.net/problem/1181
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

bool compare(const string &a,const string &b){
    if (a.length() == b.length()){
        return a<b; // 사전순으로 앞서면 true
    }
    return a.length() < b.length(); // 길이가 짧은순서대로
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N = 0;
    cin >> N;
    set<string> words;

    // 단어 입력 받기
    for(int i=0 ; i<N ; i++){
        string word;
        cin >> word;
        words.insert(word);
    }

    // set -> vector
    vector<string> vector_word(words.begin(), words.end());

    // sort (기본적으로 오름차순으로 정렬)
    sort(vector_word.begin(), vector_word.end(), compare);

    // 결과
    for(const string word: vector_word){
        cout << word << endl;
    }

    return 0;
}