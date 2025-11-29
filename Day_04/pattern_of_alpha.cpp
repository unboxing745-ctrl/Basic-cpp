#include<iostream>
using namespace std;
int main(){
    int i ,j,n;
    cout<<"Enter the row and column:";
    cin>>n;
    char ch='a';
    for(i=1;i<=n;i++)
    { 
        ch='a'+i-1;
      for(j=1;j<=i;j++)
      {
        cout<<ch<<" ";
      }
      cout<<endl;
    }
}
