#include<iostream>
using namespace std;
int main (){
    int arr[]={-10,-2,-55,-100};
    int max=arr[0];
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){ // i<n == i<=n-1
      if(max<arr[i]) max=arr[i]; 
    } 
    cout<<max;
}
