#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter the number rows and column :";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=n;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
