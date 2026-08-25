//  قم بحساب مساحة المثلث
#include<iostream>
using namespace std;
int main(){
    float area,bace,high;
    cout<<"Enter the value of bace:";
    cin>>bace;
    cout<<"Enter the value of high:";
    cin>>high;
    area=bace*1/2*high;  // or // area=0.5*bace*high;
    cout<<"Area of triangles="<<area;
    return 0;
}