#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
#include<string.h>
int main(){

string str="sdjkhdkfgjhjkdfg";

for(int i=0;i<str.length();i++){   
    if(str[i]>='a'&& str[i]<='z'){
     str[i]-=32;        
    }
}


cout<<str<<"\n";

for(int i=0;i<str.length();i++){   
    if(str[i]>='A'&& str[i]<='Z'){
     str[i]+=32;        
    }
}
cout<<str;


// to lower
transform(str.begin(),str.end(),str.begin(),::toupper);

cout<<"\n"<<str<<"\n";

//form a maximum number using given strinfg
string stnum="2651230547";
sort(stnum.begin(),stnum.end(),greater<int>());
cout<<stnum;






return 0;
}