#include<iostream>
using namespace std;
int areacircle(int r)
{
  int area;
  area=3.14*r*r;
  return area;
}
int main(){
cout<<areacircle(2);
return 0;
}