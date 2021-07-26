#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[] = {1,5,3,4,3,5,6};
int size=7;
const int n=100;
int idx[n];

for(int i=0;i<n;i++){
idx[i]=-1;
}

int minindex=INT_MAX;
for(int i=0;i<size;i++){

if(idx[arr[i]]!=-1){
    minindex=min(minindex,idx[arr[i]]);
}else{
    idx[arr[i]]=i;
}
}


if(minindex==INT_MAX){
    cout<<"No reapeating element in this array";
}else{
    cout<<"Minimum index of repeating element is="<<minindex+1;
}

return 0;
}
