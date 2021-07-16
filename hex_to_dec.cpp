#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int sum = 0, base = 1;
    cout << "Enter  A hexa decimal string ";
    cin >> str;
    int l = str.length();
    // cout<<"String is ="<<str;

    for (int i = (l - 1); i >= 0; i--)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            sum = sum + base * (str[i] - '0');
        }
        else if (str[i] >= 'A' && str[i] <= 'F')
        {

            sum = sum + base * (str[i] - 'A' + 10);
        }
        base *= 16;
    }

    cout << "The Decimal number is =" << sum;
    return 0;
}