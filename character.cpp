#include<bits/stdc++.h>
using namespace std;



// int main(){

// char arr[50];
// cout<<"Enter a word \n";
// cin >>arr;
// cout<<arr;

// return 0;
// }





int main(){

int n;
cout<<"Enter length of word";
cin >>n;
char arr[n+1];

cout<<"Enter a word \n";
cin>>arr;

int flag=0;
for(int i=0;i<n;i++){
    if(arr[i]!=arr[n-1-i]){
        flag=1;
        break;
    }
}
if(flag==1)
 cout<<"String is not pallindrome";
 else
 cout<<"String is pallindrome ";

// racecar

return 0;
}