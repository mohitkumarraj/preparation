#include<bits/stdc++.h>
#include<iostream>
using namespace std;



//lecure 14.2 q1
// bool power2(int num){
// // return !(num&(num-1));
// return !(num&&num&(num-1));

// }
// int main(){
//     int num;
// cout<<"ENte a number to check its power 2 or not \n";
// cin>>num;


// if(power2(num))
//   cout<<"Yes its power of 2";
//   else
//   cout<<"Yes its not power of 2";
// return 0;


// }








//question2

int count(int num){
int temp=0;
while(num!=0){
    num=(num&(num-1));
 temp++;
}
return temp;
}

int main(){
int num;
cout<<"Enter a number tp count number of 1  \n";
cin>>num;
cout<<"The number of ones in the numbe is="<<count(num);
return 0;    
}