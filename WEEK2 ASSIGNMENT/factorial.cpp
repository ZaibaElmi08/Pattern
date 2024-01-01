#include<iostream>
using namespace std;
int fact(int n)
{
  int fact=1;
  for(int i=2;i<=n;i++)
  {
      fact=fact*i;
  }
  cout<<fact;
}
int main(){
int n;
cout<<"Enter the number:";
cin>>n;
fact(n);
return 0;
}