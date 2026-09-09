// قُم بالتبديل بين قيمتي متغيرين XوY عن طريق متغير ثالث وسيط.
#include<iostream>
using namespace std;
int main(){
    float x,y,temp;
	cout<<"Enter the value of X:";
	cin>>x;
    cout<<"Enter the value of Y:";
    cin>>y;
	temp=x;   //temp=y;
	x=y;      // y=x;
	y=temp;   // x=temp;
	cout<<"The X="<<x<<endl<<"The Y="<<y;
    return 0;
}