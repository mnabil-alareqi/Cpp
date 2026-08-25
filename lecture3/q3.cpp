//  قم بحساب مساحة الدائرة
#include<iostream>
using namespace std;
int main(){
    float area,reduce;
    const float pi=3.14;
    cout<<"Enter the value of reduce:";
    cin>>reduce;
    area=pi*reduce*reduce;
    cout<<"Area of circle="<<area;
    return 0;
}