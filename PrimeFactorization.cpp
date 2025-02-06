#include <bits/stdc++.h>
using namespace std;
void PrimeFactorization(int n)
{
  for (int i = 2; i * i <= n; i++)
  {
    while (n % i == 0)
    {
      cout << i << " ";
      n /= i;
    }
  }
  if (n > 1)
  {
    cout << n << " ";
  }
}
int main()
{
  long long int n;
  cin >> n;
  PrimeFactorization(n);
  return 0;
}