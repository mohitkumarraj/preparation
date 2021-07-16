#include<bits./stdc++.h>
using namespace std;

int decimal(int num){
int x=1,ans=0;
int rem;

while(num!=0){
rem=num%10;
ans=ans+rem*x;
x*=8;
num=num/10;
}
return ans;
}


int main(){
int n;
cout<<"Enter a octal String ";
cin>>n;

cout<<"\nDEcimal Equivalent ="<<decimal(n);

return 0;
}