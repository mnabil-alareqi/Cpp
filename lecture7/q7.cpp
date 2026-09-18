//  قم بطباعة الاعداد من 1------> 50 ماعدا مضاعفات العدد 4.
#include<iostream>
using namespace std;
int main(){
    int x;
    for(x=1;x<=50;x++)
    if(x%4!=0)
        cout<<x<<",";
    /////////// حل اخر ///////////////
    int x;
    for(x=1;x<=50;x++){
    if(x%4==0)
        continue;
    cout<<x<<",";
    }
    return 0;
}