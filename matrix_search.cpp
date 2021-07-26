#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[][4]={{1,4,7,11},
             {2,5,8,12},
             {3,6,9,16},
             {10,13,14,17}
  };


for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}

int target;

cout<<"ENter the number to be find ";
cin>>target;

int r =0,c=4-1;
bool found=false;
while(r<4 && c>=0){
if(arr[r][c]==target){
    cout<<" found at index ="<<r<<"  "<<c;
 found=true;
 break;
}else if(arr[r][c]>target){
    c--;
}else{
    r++;
}
}

if(!found)
cout<<"Element does not exist in the array";






return 0;
}