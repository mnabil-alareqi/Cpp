//قُم بطباعة الاعداد من ؟------> ؟(عدد يدخله المستخدم) ثم اطبع عددها ومجموعها.
#include<iostream>
using namespace std;
int main(){
    int n1,n2,sum=0,count=0;
	cout<<"Enter the frist number:";
	cin>>n1;
	cout<<"Enter the secound number:";
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