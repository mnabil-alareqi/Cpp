// قُم بطباعة الاعداد من 1------> 50 ماعدا مضاعفات العدد 4 ثم اطبع عددها ومجموعها.
#include<iostream>
using namespace std;
int main (){
    int sum=0,count=0;
	for(int x=1;x<=50;x++)	
		if(x%4!=0){
		cout<<x<<",";
		sum=sum+x;
		count++;
		}
	cout<<"\nThe total="<<sum;
	cout<<"\nThe counter="<<count;
    return 0
}