//  قم بحساب مساحة المستطيل
#include<iostream>
using namespace std;
int main(){
    float area,lenght,width;
    cout<<"Enter the value of lenght:";
    cin>>lenght;
    cout<<"Enter the value of width:";
    cin>>width;
    area=lenght*width;
    cout<<"Area of rectangle="<<area;
    return 0;
}