#include <iostream>
using namespace std;
int main(){
// 4의 배수 , 100의 배수가 아님 or 400의 배수
    int year;    
    cin >> year;    
    if ((year % 4 == 0 && !( year % 100 == 0)) || year % 400 ==0){
        cout << 1;
        return 0;
    }    
    cout << 0;    
    return 0;
}