//  قم بطباعة مضاعفات العدد 4 فقط من 1------> 50.
#include<iostream>
using namespace std;
int main(){
    int x=1;
    while(x<=50){
    if(x%4==0)
        cout<<x<<",";
    x++;
    }
    return 0;
}