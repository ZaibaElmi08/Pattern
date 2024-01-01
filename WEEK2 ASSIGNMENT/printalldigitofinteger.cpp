#include<iostream>
using namespace std;
void printAllDigits(int n)
{
  while(n)
  {
  int digit=n%10;
  cout<<"Digits:"<<digit<<endl;
  n=n/10;
  }
}
int main(){
int n;
cout<<"Enter number to see its digit";
cin>>n;
printAllDigits(n);
return 0;
}