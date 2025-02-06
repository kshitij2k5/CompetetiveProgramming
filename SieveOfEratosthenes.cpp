#include <bits/stdc++.h>
using namespace std;
void isPrime(int n)
{
  bool prime[n + 1];
  for (int i = 2; i <= n; i++)
  {
    prime[i] = true;
  }
  for (int i = 2; i * i <= n; i++)
  {
    if (prime[i])
    {
      for (int j = i * i; j <= n; j += i)
      {
        prime[j] = false;
      }
    }
  }
  for (int i = 2; i <= n; i++)
  {
    if (prime[i])
    {
      cout << i << " ";
    }
  }
}
int main()
{
  long long int n;
  cin >> n;
  isPrime(n);
}