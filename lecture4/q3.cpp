//  قم بتحويل المسافة من سنتيمتر الى كيلو متر
#include<iostream>
using namespace std;
int main(){
    float distance;
    cout<<"Enter distance with centimeter:";
    cin>>distance;
    distance=distance/100000; // or distance/=100000;
    cout<<"Distance="<<distance<<" km";
    return 0;
}