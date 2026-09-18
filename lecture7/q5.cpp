//  قم بطباعة الاعداد الفردية من 50------> 10.
#include<iostream>
using namespace std;
int main(){
    int x;
    for(x=50;x>=10;x--)
    if(x%2==1)
        cout<<x<<",";
    return 0;
}