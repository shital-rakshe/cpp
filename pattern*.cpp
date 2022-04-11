#include<iostream>
  using namespace std;
  int main()
  {
  	int i,j,n=4;
  	for(i=n; i>0; i--)
  	 {
  	 	for(j=0; j<=n; j++)
  	 	{
  	 		if(j>=i)
  	 		{ 
  	 		cout<<"*";
  	 		}
  	 	    else  
     	 	{
  	   		cout<<" ";
  	 	    }
  	    }
        
  	 	cout<<"\n";
  	 }
  	 return 0;
  }