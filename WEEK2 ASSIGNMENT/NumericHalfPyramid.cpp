#include<iostream>
using namespace std;
int main()
{
for(int row=0;row<=5;row++)
{
  for(int col=row+1;col<=5;col++)
  {
    if(col==row+1 || col==5 || row==0)
    cout<<col<<"";
    else
    {
      cout<<" ";
    }
  }
  cout<<endl;
}
}