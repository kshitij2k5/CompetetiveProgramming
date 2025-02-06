#include <bits/stdc++.h>
using namespace std;
long long int GreatestCommonDivisor(long long int a, long long int b)
{
  if (b == 0)
    return a;
  else
    return GreatestCommonDivisor(b, a % b);
}
int main()
{
  cout << GreatestCommonDivisor(10, 20);
}