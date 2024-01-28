#include<iostream>
using namespace std;
int main(){
  int arr[8]={0,1,1,1,0,0,1,1};
int zeroCount=0;
int oneCount=0;
for(int i=0;i<8;i++)
{
  if(arr[i]==0)
  {
    zeroCount+=1;
    
  }
  if(arr[i]==1)
  {
    oneCount+=1;
  }
}
cout<<"ZeroCount: "<<zeroCount<<endl;
cout<<"oneCount: "<<oneCount<<endl;

return 0;
}