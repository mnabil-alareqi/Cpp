//  قم بحساب مساحة ثلاث مستطيلات غير متساوية
#include<iostream>
using namespace std;
int main(){
    float area,lenght1,width1,lenght2,width2,lenght3,width3;
    cout<<"Enter the value of lenght one:";
    cin>>lenght1;
    cout<<"Enter the value of width one:";
    cin>>width1;
    cout<<"Enter the value of lenght two:";
    cin>>lenght2;
    cout<<"Enter the value of width two:";
    cin>>width2;
    cout<<"Enter the value of lenght three:";
    cin>>lenght3;
    cout<<"Enter the value of width three:";
    cin>>width3;
    area=lenght1*width1+lenght2*width2+lenght3*width3;
    cout<<"Area of three different rectangles="<<area;
    return 0;
}