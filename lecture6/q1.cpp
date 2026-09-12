// قُم بإدخال رقم ثم تبين ما ان كان الرقم المدخل موجب او سالب.
#include<iostream>
using namespace std;
int main (){
    float n;
    cout<<"Enter the number:";
    cin>>n;
    if(n>0)
        cout<<"The number is Posative";
    else if(n<0)
        cout<<"The number is Negative";
    else
        cout<<"The number is not Posative and Negative";
    return 0
}