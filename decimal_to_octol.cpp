#include<bits/stdc++.h>
using namespace std;




int main(){
int arr[10],i,num;
cout<<"Enter a decimal number";
cin>>num;
i=0;
while (num!=0)
{
    arr[i]=num%8;
  num/=8;
 i++;
}

for(int k=i-1;k>=0;k--){
    cout<<arr[k]<<" ";
}
return 0;
}















// int main(){
// int arr[10],i,num;
// cout<<"Enter a decimal number";
// cin>>num;
// i=0;
// while (num!=0)
// {
//     arr[i]=num%2;
//   num/=2;
//  i++;
// }

// for(int k=i-1;k>=0;k--){
//     cout<<arr[k]<<" ";
// }
// return 0;
// }



