//  قم بتحويل المسافة من متر الى كيلو متر
#include<iostream>
using namespace std;
int main(){
    float distance;
    cout<<"Enter distance with meter:";
    cin>>distance;
    distance=distance/1000;
    cout<<"Distance="<<distance <<" km";
    return 0;
}