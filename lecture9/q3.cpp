// قم بطباعة الاعداد الاولية من 1------> 50 ثم اطبع عددها ومجموعها.
#include<iostream>
using namespace std;
int main(){
    int i,j,sum=0,count=0;
    for(i=1;i<=50;i++){
    int c=0;
    for(j=i;j>=1;j--)
        if(i%j==0) c++;
    if(c==2){
    cout<<i<<",";
    sum=sum+i;
    count=count+1; 
    }
    }
    cout<<"\nThe Total="<<sum;
    cout<<"\nThe Counter="<<count;
    return 0;
}