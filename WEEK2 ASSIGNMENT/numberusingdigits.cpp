#include<iostream>
using namespace std;
int createNumberUsingDigits(int numberOfDigits)
{
  int num=0;
  for(int i=0;i<numberOfDigits;i++)
  {
    cout<<"Enter digit:";
    int digit;
    cin>>digit;
    num=num*10+digit;
  }
  return num;
}
int main(){
int numberOfDigits;
cout<<"Enter the number of digits:";
cin>>numberOfDigits;
cout<<createNumberUsingDigits(numberOfDigits);
// cout<<num;
return 0;
}