#include<iostream>
 using namespace std;
 int main()
 {
  int n;
  
  cout<< "enter positive enteger";
  cin>> n;
  for(int i=1; i<=10; ++i)
    {
     cout<<n<<"*"<<i<<"="<<n*i;
    }
    return 0;
 }