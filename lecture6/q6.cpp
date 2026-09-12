// قُم بإدخال ثلاثة ارقام ثم اطبع العدد الأكبر والعدد الأصغر من بين الاعداد المدخلة.
#include<iostream>
using namespace std;
int main(){
    float n1,n2,n3,max,min;
    cout<<"Enter the number one:";
    cin>>n1;
    cout<<"Enter the number two:";
    cin>>n2;
    cout<<"Enter the number three:";
    cin>>n3;
    if(n1>=n2&&n1>=n3) max=n1x;     //max=n1;
    if(n2>n1&&n2>n3) max=n2;        //if(n2> max)max=n2;
    if(n3>n1&&n3>n2) max=n3;        //if(n3> max)max=n3;
    if(n1<=n2&&n1<=n3) min=n1;      //min=n1;
    if(n2<n1&&n2<n3) min=n2;        //if(n2< min)min=n2;
    if(n3<n1&&n3<n2) min=n3;        //if(n3< min)min=n3;
    cout<<"the Maximum number is:"<<max<<endl;
    cout<<"the Minimum number is:"<<min;
    return 0;
}