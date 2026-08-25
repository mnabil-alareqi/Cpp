//  قم بحساب مساحة ثلاث مستطيلات متساوية
#include<iostream>
using namespace std;
int main(){
    float area,lenght,width;
    cout<<"Enter the value of lenght:";
    cin>>lenght;
    cout<<"Enter the value of width:";
    cin>>width;
    area=lenght*width*3;
    cout<<"Area of three rectangles="<<area;
    return 0;
}