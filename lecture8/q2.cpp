//قُم بطباعة الاعداد من 1------> ؟(عدد يدخله المستخدم) ثم اطبع عددها ومجموعها.
#include<iostream>
using namespace std;
int main(){
    int n1=1,n2,sum=0,count=0;
	cout<<"Enter the second number:";
	cin>>n2;
	if(n1>n2){
	    n1=n1+n2;
		n2=n1-n2;
		n1=n1-n2;
	}
	for(int x=n1;x<=n2;x++){
	    cout<<x<<",";
	    sum=sum+x;
	    count++;	
	}
	cout<<"\nThe Total="<<sum;
	cout<<"\nThe Counter="<<count;
    return 0;
}
