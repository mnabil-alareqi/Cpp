// قم بإدخال عدد ثم بين ان كان العدد اولي ام عدد غير اولي؛ حيث يكون التكرار بشكل لا نهائي.
#include<iostream>
using namespace std;
int main(){
    for(;;){
    int n,x,c=0;
    cout<<"Enter the number:";
    cin>>n;
    for(x=1;x<=n;x++)
        if(n%x==0) c++;
    if(c==2)
        cout<<"This number is prime\n";
    else
        cout<<"This number is not prime\n";
    }
    return 0;
}