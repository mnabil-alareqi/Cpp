// قُم بإدخال قيمة المحصول وطريقة الري المستخدمة فإذا كانت طريقة الري عن طريق المطر يتم احتساب مقدار الزكاة بنسبة العشر (10%) اما إذا كان عن طريق الآلة يتم احتساب مقدار الزكاة بنسبة ربع العشر (2.5%) من قيمة المحصول ثم اطبع مقدار الزكاة. 
#include<iostream>
using namespace std;
int main(){
    float crop,zakah;
	char type_of_watering;
	cout<<"Enter the value of crop:";
	cin>>crop;
	cout<<"Enter the type of watering r for (rain) or m for (machine):";
	cin>>type_of_watering;
	switch(type_of_watering){
		case 'r': zakah=crop*10/100;cout<<"Alzakah="<<zakah;break;
		case 'R': zakah=crop*10/100;cout<<"Alzakah="<<zakah;break;
		case 'm': zakah=crop*2.5/100;cout<<"Alzakah="<<zakah;break;
		case 'M': zakah=crop*2.5/100;cout<<"Alzakah="<<zakah;break;
		default: cout<<"Try again";
	}
    return 0;
}