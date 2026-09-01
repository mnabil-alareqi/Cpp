//  قم بتحويل الوقت من ساعات الى دقائق
#include<iostream>
using namespace std;
int main(){
    float minutes,hours;
    cout<<"Enter time in hours:";
    cin>>hours;
    minutes=hours*60;
    cout<<"Time="<<minutes<<" minutes";
    return 0;
}