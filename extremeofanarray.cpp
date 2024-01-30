#include<iostream>
using namespace std;

void extream(int array[], int n){
    int left=0;
    int right=n-1;
    while(left<=right){
        cout<<array[left]<<" ";
        cout<<array[right]<<" "; 
        left++;
        right--;
    }
}

int main(){
    int array[]={10,20,30,40,50,60,70,80};
    int n=8;
    extream(array,n);
    return 0;
}