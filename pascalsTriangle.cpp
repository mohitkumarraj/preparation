#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
  if (n < 1)
    return 1;
  else
    return n * fact(n - 1);
}

int main()
{
  int n, val;
  cout << "Enter a number  ";
  cin >> n;
  // cout<<"Factorial of number ="<<fact(n);
  for (int i = 0; i < n; i++)
  {
    for (int k = (n - i); k > 0; k--)
    {
      cout << " ";
    }
    for (int j = 0; j <= i; j++)
    {
      val = fact(i) / (fact(i - j) * fact(j));
      cout << val << " ";
    }
    cout << "\n";
  }
  return 0;
}