#include<iostream>
using namespace std;
int main (){
    int mult=1;
    int arr[]={10,20};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){ // i<n == i<=n-1
      mult*=arr[i]; 
    } 
    cout<<mult;
}
