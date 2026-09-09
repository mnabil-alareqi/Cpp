// قُم بإدخال اسم الموظف وراتبه ومقدار الضريبة والتامين وبدل المواصلات وبدل السكن ثم اطبع صافي الراتب.
#include<iostream>
using namespace std;
int main(){
    string empName;
	float sal,tax,ins,tran,rent,netSal;
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
	netSal=sal-tax-ins+tran+rent;
	cout<<"The Net Salary="<<netSal;
    return 0;
}