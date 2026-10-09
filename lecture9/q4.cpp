//قُم بطباعة الاعداد الاولية من 1------> ؟(عدد يدخله المستخدم) ثم اطبع عددها ومجموعها.
#include<iostream>
using namespace std;
int main(){
    int n1=1,n2,sum=0,count=0,i,j;
	cout<<"Enter the second number:";
	cin>>n2;
	if(n1>n2){
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
	}
	for(i=n1;i<=n2;i++){
    int c=0;
    for(j=i;j>=1;j--)
        if(i%j==0) c++;
    if(c==2){
        cout<<i<<",";
        sum=sum+i;
        count++;
    }
    }
	cout<<"\nThe Total="<<sum;
	cout<<"\nThe Counter="<<count;
    return 0;
}