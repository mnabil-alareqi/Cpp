// قُم بإدخال رقم ثم تبين ما ان كان الرقم المدخل زوجي او فردي.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n%2==0)
        cout<<"The number is Even";
    else
        cout<<"The number is Odd";
    return 0;
}