// قُم بإدخال اسم الطالب ورقمه الأكاديمي ودرجات ثلاث مواد دراسية فإذا كان الطالب ناجح في كل المواد (بمعنى ان درجات المواد أكبر من او يساوي 50) اطبع المجموع والمتوسط لهذي المواد وحالة النجاح ناجح مالم اطبع راسب.
#include<iostream>
using namespace std;
int main(){
    string stdname,stdnumber;
    float mark1,mark2,mark3,sum,avg;
    cout<<"Enter the name of student:";
    cin>>stdname;
    cout<<"Enter the Id of student:";
    cin>>stdnumber;
    cout<<"Enter the mark one:";
    cin>>mark1;
    cout<<"Enter the mark two:";
    cin>>mark2;
    cout<<"Enter the mark three:";
    cin>>mark3;
	if(m1>=50 and m2>=50 && m3>=50){
		sum = mark1+mark2+mark3;
    	avg = sum /3;
    	cout<<"The Total="<<sum<<endl;
    	cout<<"The Average="<<avg<<"%"<<endl;
		cout<<"The student is Pass";
	}
	else
		cout<<"The student is Fail";
    return 0;
}