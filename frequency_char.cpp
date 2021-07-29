#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
#include<string.h>
int main(){

string str="slkdfjshhalskjrrroiwkekmkkk";
int freq[26];


for(int i=0;i<26;i++)
  freq[i]=0;


for(int i=0;i<str.length();i++){
     freq[str[i]-'a']++;
}

char ans='a';
int maxfre=0;

for(int i=0;i<26;i++){

if(freq[i]>maxfre){
  maxfre=freq[i];
  ans=i+'a';
}

}


cout<<"MAximum frequency of character is= "<<ans<<"  = "<<maxfre;








return 0;    
}