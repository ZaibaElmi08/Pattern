#include<iostream>
using namespace std;
int set(int N,int K)
{
  // int mask=1<<K;
  // int ans=N | mask;
  return N | (1<<K);
}
int main(){
int N,K;
cout<<"Enter the value of N and K:";
cin>>N>>K;
cout<<set(N,K);
return 0;
}