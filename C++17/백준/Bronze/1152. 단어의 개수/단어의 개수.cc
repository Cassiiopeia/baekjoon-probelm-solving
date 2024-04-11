#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int sol_1152(string a) {
    string temp_str;
    stringstream ss(a);
    vector<string> splited_str;
    while ( ss >> temp_str){
        splited_str.push_back(temp_str);
    }
    return splited_str.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    getline(cin, str);
    cout << sol_1152(str);
    return 0;
}