//  قم بطباعة الاعداد الزوجية من 1------> 50.
#include<iostream>
using namespace std;
int main(){
    int x;
    for(x=1;x<=50;x++)
    if(x%2==0)
        cout<<x<<",";
    return 0;
}