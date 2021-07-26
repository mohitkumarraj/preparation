#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={0,-9,1,3,-4,5};
const int n=100;
bool per[n];

for(int i=0;i<n;i++){
  per[i]=false;
}

for(int i=0;i<6;i++){
  if(arr[i]>=0){
    per[arr[i]]=true;
  }
}

for(int i=0;i<6;i++){
   if(per[i]==false){
       cout<<"smallest positive number is="<<i;
    break;
   }  
}



return 0;   
}