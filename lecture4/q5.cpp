//  قم بتحويل الوقت من ثوان الى ساعات
#include<iostream>
using namespace std;
int main(){
    float hours,seconds;
    cout<<"Enter time in seconds:";
    cin>>seconds;
    hours=seconds/3600;
    cout<<"Time="<<hours<<" hours";
    return 0;
}