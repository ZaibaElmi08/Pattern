// #include<iostream>
// using namespace std;
// int evenorodd(int n)
// {
//   if(n%2==0)
//   {
//     cout<<"Even";
//   }
//   else
//   {
//     cout<<"odd";
//   }
// }
// int main(){
// int n;
// cout<<"Enter the value of n:";
// cin>>n;
// evenorodd(n);
// return 0;
// }

#include<iostream>
using namespace std;
bool evenorodd(int num)
{
  return (num&1)==0;
}
int main(){
int num;
cin>>num;
if(evenorodd(num))
{
  cout<<"Even";
}
else
{
  cout<<"Odd";
}
return 0;
}