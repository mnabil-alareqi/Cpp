// 2*3/5,3*4/7,4*5/9,................19*20/39 قُم بطباعة ناتج مجموع المتسلسلة
#include<iostream>
using namespace std;
int main(){
    float sum=0;
	for(float x=2;x<=19;x++)
		sum=sum+(x*(x+1)/(2*x+1));	// or sum=sum+(x*(x+1)/(x+x+1));	
	cout<<"\nThe Total="<<sum;
    return 0;
}