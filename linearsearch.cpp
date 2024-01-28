// #include<iostream>
// using namespace std;
// int main(){
// int arr[5]={2,4,6,8,10};
// int target=10;
// int n=5;
// bool flag=0;
// for(int i=0;i<n;i++)
// {
//   if(arr[i]==target)
//   {
//     flag=1;
//     break;
//   }
// }
// if(flag==1)
// {
//   cout<<"Target Found";
// }
// else
// {
//   cout<<"Target not Found";
// }
// return 0;
// }

#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size,int target)
{
  // bool flag=0;
  for(int i=0;i<size;i++)
  {
    if(arr[i]==target)
    {
      // flag=1;
      // break;
      return true;
    }
  }
  return false;
  // if(flag==1)
  // {
  //   cout<<"Target Found";
  // }
  // else
  // {
  //   cout<<"Target Not Found";
  // }
}
int main(){
int arr[5]={2,4,6,8,10};
int size=5;
int target=10;
int ans=linearSearch(arr,size,target);
if(ans==1)
{
  cout<<"Target found";
}
else
{
  cout<<"Not found";
}
return 0;
}