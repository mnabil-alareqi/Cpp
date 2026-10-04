// قُم بطباعة المتسلسلة 25.5,..........3.5,4,4.5,5,5.5,6
#include<iostream>
using namespace std;
int main(){
    for(float x=3.5;x<=25.5;x=x+0.5)
	    cout<<x<<",";
    return 0;
}