#include <bits/stdc++.h>
using namespace std;

void convert(int num)
{
    int mask, i;
    for (i = 8; i >= 0; i--){
     mask = 1 << i;
    
    // putchar(num & mask ? '1' : '0');
     if(num&mask)
         cout<<1;
     else
         cout<<0;
    }
}

int main()
{

    int num;
    cout << "Enter a decimal number =";
    cin >> num;
    cout << "Binary representation is =";
    convert(num);

   int a=20,b=3;
   cout<<"\n"<<b/a;

    return 0;
}
