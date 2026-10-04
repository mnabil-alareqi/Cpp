// قُم بطباعة المتسلسلة 0,..........90,72,56,42
#include<iostream>
using namespace std;
int main(){
    for(int x=10;x>=1;x--)
	    cout<<x*(x-1)<<","; // or cout<<x*x-x<<",";
    return 0;
}