//  قم بتحويل المسافة من متر الى سنتيمتر
#include<iostream>
using namespace std;
int main(){
    float distance;
    cout<<"Enter distance with meter:";
    cin>>distance;
    distance=distance*1000; // or distance*=1000;
    cout<<"Distance="<<distance <<" cm";
    return 0;
}