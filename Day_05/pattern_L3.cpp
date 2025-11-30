//To printing pattern like  A
  //                       AB
  //                      ABC
  //                     ABCD
#include<iostream>
using namespace std;
int main(){
    int i ,j,n;
    char ch;
    cout<<"Enter the row and column:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
      for(j=n;j>=i;j--)
      {
       cout<<" ";
      }
      for(ch ='A';ch<='A'+i-1;ch=ch+1){
        cout<<ch;
      }
       cout<<endl;
    }
}
