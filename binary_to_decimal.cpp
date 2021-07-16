#include<iostream>
using namespace std;

int power(int n){
    int p=1;
    while (n!=0)
    {
        p=p*2;
        n--;
    }
    return p;
}

// binary to decimal;

int main(int argc, char const *argv[])
{
    long num,dec=0,exp=0,rem;
    cout<<"Enter a binary number";
    cin>>num;  
    while (num!=0)
    {
        rem=num%10;
        dec=dec+rem*power(exp);
       num=num/10;
       exp++;
    }
    cout<<"Decimal number is ="<<dec;
    return 0;
}



