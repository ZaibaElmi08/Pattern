#include<iostream>
using namespace std;
int primeornot(int n)
{
  for(int i=2;i<n;i++)
  {
    if(n%i==0)
    {
      cout<<"Not Prime";
      return 0;
    }
  }
      cout<<"Prime";
}
int main(){
int n;
cout<<"Enter the number:";
cin>>n;
primeornot(n);
return 0;
}