#include <bits/stdc++.h>
using namespace std;

string convert(int num)
{
    string ans = "";
    int rem,c;
    // char c;
    while (num != 0)
    {
        rem = num % 16;
        if (rem >= 0 && rem <= 9)
        {
            ans = ans + to_string(rem);
        }
        else if (rem >= 10 && rem <= 15)
        {
            c = 'A' + (rem - 10);
            // cout<<"this is what"<<c;
            ans=ans+(char)c;
        }

        num = num / 16;
    }
   reverse(ans.begin(),ans.end());
return ans;
}

int main()
{
    int num;
    cout << "Enter a decimal number =";
    cin >> num;

    cout << "the Hexadecimal equivalant is=" << convert(num);
    return 0;
}