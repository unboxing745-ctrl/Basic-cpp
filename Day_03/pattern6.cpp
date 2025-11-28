#include<iostream>
using namespace std;
int main(){
    int n,i,j,a;
    cout<<"Enter the number rows and column :";
    cin>>n;
    a=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<a<<" ";
             a=a+1;
        }
        cout<<endl;
    }
}