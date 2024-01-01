#include<iostream>
using namespace std;
float temperature(float celcius)
{
  float kelvin=celcius+273.15;
  float Fahrenheit=celcius*1.80+32.00;
  // return kelvin;
  return Fahrenheit;
}
int main(){
float celcius;
cout<<"Enter the celcius value to be converted into kelvin anf Fahrenheit:";
cin>>celcius;
cout<<temperature(celcius);
return 0;
}