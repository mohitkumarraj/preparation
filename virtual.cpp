#include<bits/stdc++.h>
#include<iostream>
using namespace std;


class base{

    public:
   virtual void print(){

        cout<<"\nI am from base class";
    }
   virtual void show(){

        cout<<"\nI am from base class too";
    }
};


class derived:public base{

    public:
    void print(){

        cout<<"\nI am from derived class";
    }
    void show(){

        cout<<"\nI am from derived class too";
    }
};

int main(){
  base *obj;
  derived objd;

  obj=&objd;

  obj->print();
  obj->show();

return 0;
}