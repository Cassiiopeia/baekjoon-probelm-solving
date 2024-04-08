#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int total_amount, count;
    int cost, quantity;
    int current_amount = 0;

    // 전체 가격
    cin >> total_amount;

    // 종류수
    cin >> count;

    vector<int> cal_amount;

    for (int i = 0; i < count; i++)
    {
        cin >> cost >> quantity;
        current_amount += cost * quantity;
    }
    if( current_amount != total_amount){
        cout << "No";
    } else{
        cout << "Yes";
    }

    return 0;
}