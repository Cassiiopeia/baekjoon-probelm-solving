#include<iostream>
using namespace std;

int main(){
    const int minus_time = 45;
    int A , B;
    cin >> A >> B;
    // calculate minute     
    int cal_hour = A; 
    int cal_min = B - 45;
    if(cal_min < 0 ){
        cal_min += 60;
        cal_hour -= 1;
    }
    if(cal_hour < 0 ){
        cal_hour += 24;
    }

    cout << cal_hour << " " << cal_min;
}