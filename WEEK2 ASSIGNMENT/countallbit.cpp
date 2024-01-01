#include<iostream>
using namespace std;
int countsetbit(int n)
{
  int count=0;
  while(n>0){
  int bit=(n&1); //or bit=n%2
  if(bit==1)
  {
    count++;
  }
  n=n>>1; //n=n/2;
  }
  return count;
}
int main(){
int n;
cin>>n;
int setbitcount=countsetbit(n);
cout<<setbitcount;
return 0;
}