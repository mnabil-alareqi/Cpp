// قم بإستقبال الوقت بالثواني ثم قم بتحويله الى ساعات ودقائق وثواني
#include<iostream>
using namespace std;
int main(){
    int hours,minutes,seconds,temp;
    cout<<"Enter time in seconds:";
    cin>>seconds;
    hours=seconds/3600;
    temp=seconds%3600;
    minutes=temp/60;
    seconds=temp%60;
    cout<<"Time="<<hours<<":"<<minutes<<":"<<seconds;
    return 0;
}