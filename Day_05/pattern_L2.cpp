//To printing pattern like     1
  //                         2 2
  //                       3 3 3
  //                     4 4 4 4
#include<iostream>
using namespace std;
int main(){
    int i ,j,n;
    cout<<"Enter the row and column:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
      for(j=n;j>=i;j--)
      {
       cout<<" ";
      }
      for(j=1;j<=i;j++){
         cout<<i;
      }
       cout<<endl;
    }
}
