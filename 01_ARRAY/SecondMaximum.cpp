#include<iostream>
using namespace std;
int main (){
    int arr[]={10,2,50,100};
    int n = sizeof(arr)/4;
    int mx=arr[0];
    for(int i=0;i<n;i++){ 
      if(mx<arr[i]) mx=arr[i]; 
    } 
    int smx= arr[0];
    for(int i=0;i<n;i++){ 
      if(smx<arr[i] && arr[i]!= mx) smx=arr[i]; 
    } 
    cout<<smx;
}
