#include <bits/stdc++.h>
using namespace std;
long long BinaryExponentiation(long long a, long long b)
{
  if (b == 0)
    return 1;
  long long result = BinaryExponentiation(a, b / 2);
  if (b & 1)
    return result * result * a;
  else
    return result * result;
}
int main()
{
  cout << BinaryExponentiation(2, 10);
}