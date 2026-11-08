// #include<iostream>
// using namespace std;
// int main (){
//     int sum=0;
//     int n ;
//     cout<<"Enter array size :";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter array element :";
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<=n-1;i++){
//         sum+=arr[i];
//     }
//     cout<<sum;
// }
#include<iostream>
using namespace std;
int main (){
    int sum=0;
    int arr[]={10,20,30,40};
    int n = sizeof(arr)/4;
    for(int i=0;i<=n-1;i++){ // i<n == i<=n-1
        sum+=arr[i];
    }
    cout<<sum<<endl;
  
}
