#include<iostream>
 using namespace std;
 int main()
 {
  int n;
  int table;
  cout<< "enter positive enteger";
  cin>> n;
  for(int i=1; i<=10; ++i)
    {
      table=n*i;
      cout<<table;
    }
    return 0;
 }