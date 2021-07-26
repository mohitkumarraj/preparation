#include<bits/stdc++.h>
using namespace std;
int main(){
// int arr[]={1,2,3,7,5};
int arr[]={1,2,3,8};

int size=4;
int check=5;
int sum=0;
int start=0,end=0;
while(start<size&& end<size){

for(int i=start;i<=end;i++)
   sum=sum+arr[i];

if(sum==check){
    cout<<"Indexes are "<<start<<"  to   "<<end;
  break;
}else if(sum<check)
    end++;
else if(sum>=check)
    start++;
sum=0;
}
return 0;
}