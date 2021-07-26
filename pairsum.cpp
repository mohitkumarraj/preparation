#include<bits/stdc++.h>
using namespace std;

// bool pairsum(int arr[],int n,int k){
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//      if((arr[i]+arr[j])==k){
//          cout<<"Indexes are"<<i<<"  "<<j;
//          return true;
//      }
//     }
// }
// return false;
// }




// inlinear time 
bool pairsum(int arr[], int n, int k ){
int low=0;
int high=n-1;
int sum;
while(low<high){
sum=arr[low]+arr[high];   
   if(sum==k){
       cout<<"Index are ="<< low<<"  "<<high;
     return true;
   }
   else if(sum<k){
       low++;
   }else if(sum>k){
       high--;
   }
      
}
   
return false;
}





int main(){
int arr[]={2,4,7,11,14,16,20,21};
int size=8,sum;
cout<<"Enter the sum should be=";
cin>>sum;
int check=pairsum(arr,size,sum);
if(check==false)
 cout<<"\nSum is not possible";
else 
cout<<"\nSum is posible";
return 0;
}