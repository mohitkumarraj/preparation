#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={10,7,4,6,8,10,11};
int size=7;
int pd=arr[1]-arr[0];
int ans=2;
int curr=2;
int j=2,dif;

while(j<size){
   dif=arr[j]-arr[j-1];
   if(pd==dif){
   curr++;
   }else{
       pd=dif;
       curr=2;
   }
ans=max(curr,ans);
 j++;   
}


cout<<"Longest common substring is="<<ans;


  return 0;  
}