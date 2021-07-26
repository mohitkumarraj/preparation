#include<bits/stdc++.h>
using namespace std;
int main(){
int a[]={1,2,0,7,2,0,2,2,-1};
int ans=0;
int mx=INT_MIN;
for(int i=0;i<8;i++){
   if(mx>a[i]&&a[i]>a[i+1]&&(i+1)<8){
     ans++;
   }
   ans=max(mx,a[i]);
}



//apna solution
// int n;
// cout<<"eNter the number of element  ";
// cin>>n;
// int arr[n+1];
// arr[n]=-1;
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }

// if(n==1){
//     cout<<1<<" ";
// }

// int ans=0;
// int mx=-1;

// for(int i=0;i<n;i++){
//   if(arr[i]>mx&&arr[i]>arr[i+1]){
//        ans++;
//   }
//    ans=max(mx,arr[i]);
// }

cout<<"Number of record breaking days"<<ans;
return 0;
}