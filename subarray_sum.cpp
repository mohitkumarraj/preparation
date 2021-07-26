#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[]={1,2,3,2,4};
int sum=0,size=5;


for(int i=0;i<size;i++){
  for(int j=i;j<size;j++){
      sum+=arr[j];
      cout<<sum<<" ";
  }
  sum=0;
    cout<<"\n";

}



return 0;
}