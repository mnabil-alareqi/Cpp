// قُم بالتبديل بين قيمتي متغيرين XوY دون متغير ثالث وسيط
#include<iostream>
using namespace std;
int main(){
    float x,y,temp;
	cout<<"Enter the value of X:";
	cin>>x;
    cout<<"Enter the value of Y:";
    cin>>y;
	x=x*y;	//x=x+y;
	y=x/y;	//y=x-y;
	x=x/y;	//x=x-y;
	cout<<"The X="<<x<<endl<<"The Y="<<y;
    return 0;
}