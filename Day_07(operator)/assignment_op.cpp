#include<iostream>
using namespace std;
int main(){
        int a,b;
        cout<<"Enter the value of a :";
        cin>>a;
        cout<<"Enter the value of b:";
        cin>>b;
         int temp=b;
        a=b;
        b*=8;
        temp-=4;
        cout<<"updated value of a:"<<a<<endl;
        cout<<"updated value of b:"<<b<<endl;
        cout<<"updated value of temp:"<<temp<<endl;
}