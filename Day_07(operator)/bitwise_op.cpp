#include<iostream>
using namespace std;
int main(){
        int a,b,c;
    //& operator
    a=2&3;
    cout<<"AND OF a is:"<<a<<endl;//2
    //or(|)operator
    b=3|4;
    cout<<"OR of b is :"<<b<<endl;//7
    // not(~) opertor
    c=~2;
    cout<<"NOT of c is:"<<c<<endl;//-3
    // Ex-or operator
    int d=2^3;
    cout<<"EX-OR OF d is:"<<d<<endl;
    //shift right and left
     int ans=16>>2;
     int ans1=16<<2;
     cout<<"right shift is :"<<ans<<endl; 
     cout<<"left shift is :"<<ans1<<endl; 

}
