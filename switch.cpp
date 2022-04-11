#include<iostream>
using namespace std;
int main()
{
	int a,b,c,ch;
	cout<<"enter the first number";
	cin>>a;
	cout<<"enter the second number";
	cin>>b;

	do
	{
		cout<<"\n addition";
		cout<<"\n subtraction";
		cout<<"\n mult";
		cout<<"\n division";
		cout<<"\n exits";
		cout<<"enter your choice";
		cin>>ch;

		switch(ch)
		{
			case 1: c=a+b;
			cout<<"\n addition is"<<c;
			  break;
			case 2: c=a-b;
			cout<<"\n subtraction is"<<c;
			  break;
			case 3: c=a*b;
			cout<<"\n multiplication is"<<c;
			  break;
			case 4: c/b;
			cout<<"\n division is"<<c;
			  break;
			case 5:exit(0);
		}
	}
	  while(ch!=5);
}