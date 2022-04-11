#include<iostream>
//#include<iomanip>
using namespace std;
int circum=20;
int main()
{
	float radius,area=10;
	cout<<"enter the radius of circle:-";
	cin>>radius;
	area=3.14*radius*radius;
	cout<<"\n area of circle="<<area;
	cout<<endl;
	circum=2*3.14*radius;
	cout<<"circumference of circle="<<::circum;
	cout<<endl;
	return 0;
}