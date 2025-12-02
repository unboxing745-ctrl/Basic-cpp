#include<iostream>
using namespace std;
int main(){
        int a,b,c;
        cout<<"Enter the value of a :";
        cin>>a;
        cout<<"Enter the value of b:";
        cout<<"Enter the value of c:";
        cin>>b;
        cin>>c;
        if(a>b&&a>c)
        {
            cout<<"c"<<endl;
        }
        else if(b>a||b>c) 
        {

            cout<<b<<endl;
        }
        else{
            cout<<!c<<endl;
        }
    }