//To printing pattern like     1
  //                         2 1
  //                       3 2 1
  //                     4 3 2 1   n=4
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
      for(j=i;j>=1;j--){
         cout<<j;
      }
       cout<<endl;
    }
}
