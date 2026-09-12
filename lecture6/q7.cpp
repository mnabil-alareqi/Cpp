// قُم بإدخال عددين ثم العملية الحسابية المطلوبة (+ او – او / او ×) ثم اطبع الناتج..
#include<iostream>
using namespace std;
int main(){
    float n1,n2,result;
    char o;
    cout<<"Enter the number one:";
    cin>>n1;
    cout<<"Enter the number two:";
    cin>>n2;
    cout<<"Enter the operation (+,-,/,*):";
    cin>>o;
	switch(o) {
    case '+':result=n1+n2; cout<<"The result="<<result;break;
    case '-':result=n1-n2; cout<<"The result="<<result;break;
    case '*':result=n1*n2; cout<<"The result="<<result;break;
    case '/':result=n1/n2; cout<<"The result="<<result;break;
    default: cout<<"Try again";
    }
    return 0;
}