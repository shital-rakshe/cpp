#include<iostream>
using namespace std;
//calculating the sum of the series
int calc_sum(int n)
 {
   int i;
   int sum = 0;
   for (i = 1; i <= n; i++)
   sum += (i * i);
   return sum;
}
int main() {
   int n = 7;
   int res = calc_sum(n);
   cout << res << endl;
   return 0;
}