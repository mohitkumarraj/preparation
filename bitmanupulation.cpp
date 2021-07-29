#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void displaybit(int n){
	int i,mask;
	for(i=31;i>=0;i--){
	  mask=1<<i;
	  putchar(n&mask?'1':'0');	
	}	
}


int getbit(int num,int pos){
int mask=1<<pos;
return (num&mask)?1:0;  
}


int setbit(int num,int pos){
    // int mask=1<<pos;
//    return (num|mask)?1:0;
return (num| (1<<pos));
}


int clearbit(int num,int pos){
int mask=1<<pos;
mask=~mask;
return (num&mask);
}

int updatebit(int num,int pos,int set){
int mask=1<<pos;
mask=~mask;
num=num&mask;
if(set==1){
int mask2=1<<pos;
return num|mask2;
}else{
return num;
}

}




int main(){
int num,bit;

// cout<<"Enter a number ";
// cin>>num;
// cout<<"Enter bit position you want";
// cin>>bit;
// if(getbit(num,bit))
//    cout<<"bit position is = 1";
//  else  
//    cout<<"bit position is = 0";


//setbit


// cout<<"Enter a number ";
// cin>>num;
// cout<<"Enter bit position you want to set";
// cin>>bit;

// if(int c=setbit(&num,bit))
//    cout<<"bit position has set to 1 new number is = "<<c;
// else  
//    cout<<"bit position is = 0";

// cout<<getbit(5,0);
// cout<<"\n";
// cout<<setbit(5,1);


//clear bit 

// cout<<clearbit(7,1);
cout<<updatebit(5,1,0);


return 0;  

}