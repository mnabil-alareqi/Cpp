//قُم بإدخال عشرة ارقام ثم اطبع العدد الأكبر والعدد الأصغر.
#include<iostream>
using namespace std;
int main(){
    float n,max,min;
    cout<<"Enter the number(1):";
    cin>>n;
    max=n;
    min=n;
    for(int x=2;x<=10;x++){
        cout<<"Enter the number("<<x<<"): ";
        cin>>n;
    if(n>max) max=n;
    if(n<min) min=n;
    }
    cout<<"The maximum number is:"<<max<<"\n";
    cout<<"The minimum number is:"<<min;
    return 0;
}