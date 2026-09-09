// قُم بإدخال اسم الموظف وراتبه ونسب كل من: (الضريبة - التامين - بدل المواصلات - بدل السكن) من الراتب الأساسي ثم اطبع صافي الراتب ثم أضف نسبة مقدارها 6% لصافي الراتب ثم اطبع الراتب الجديد.
#include<iostream>
using namespace std;
int main(){
    string empName;
	float sal,tax,ins,tran,rent,netSal,newSal;
	cout<<"Enter the name of Employee:";
	getline(cin,empName);
	cout<<"Enter the Salary:";
	cin>>sal;
	cout<<"Enter the Tax:";
	cin>>tax;
	cout<<"Enter the Insurance:";
	cin>>ins;
	cout<<"Enter the Transportation:";
	cin>>tran;
	cout<<"Enter the Rent:";
	cin>>rent;
	netSal=sal-sal*tax/100-sal*ins/100+sal*tran/100+sal*rent/100;
	cout<<"The Net Salary="<<netSal<<endl;
	newSal=netSal+netSal*0.06; // newSal=netSal+netSal*6/100; 
	cout<<"The New Salary="<<newSal;
    return 0;
}