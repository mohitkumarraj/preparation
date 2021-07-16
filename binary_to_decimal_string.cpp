#include <bits/stdc++.h>
using namespace std;

int convert(string str){
int ans=0,base=1;

// cout<<str;

for (int i = str.length()-1; i >=0; i--)
{
   if(str[i]=='1'){
       ans=ans+base;
   }   

base*=2;
}

return ans;
}

int main()
{
string str;
cout<<"Enter a binary String ";
cin>>str;
cout<<"Decimal Equivalent is ="<<convert(str);
    return 0;
}