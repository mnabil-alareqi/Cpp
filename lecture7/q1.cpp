// قُم بطباعة اسمك 30 مرة.
#include<iostream>
using namespace std;
int main(){
    ///// باستخدام for /////
    int x;
    for(x=1;x<=30;x++)
        cout<<"al3reqi"<<endl;
    ///// باستخدام while /////
    int y=1;
    while(y<=30){
    cout<<"Mohammed\n";
    y++;
    }
    ///// باستخدام do - while /////
    int z=1;
    do {
    cout<<"al3reqi\n";
    z++;
    } while(z<=30);
    ///// باستخدام go to /////
    int t=1;
    f:
    cout<<"al3reqi\n";
    t++;
    if(t<=30)
    goto f;
    return 0;
}