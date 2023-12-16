// * * * * * *
//   * * * *
//    * * *
//     * *
//      *

#include<iostream>
using namespace std;
int main(){
for(int row=0;row<5;row++)
{
  // Spaces
  for(int col=0;col<row;col++)
  {
    cout<<" ";
  }
  // Stars
  for(int col=0;col<5-row;col++)
  {
    cout<<"*"<<" ";
  }
  cout<<endl;
}
return 0;
}