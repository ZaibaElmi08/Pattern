#include<iostream>
using namespace std;
int kmtomiles(int km)
{
  int miles=km*0.621371;
  return miles;
}
int main(){
int km;
cout<<"Enter the kilometer";
cin>>km;
cout<<kmtomiles(km);
return 0;
}