#include<iostream>
using namespace std;
int main(){
    int arr[]={25,15,35,48,35};
    int n =sizeof(arr)/4;
    cout<<arr<<endl; // same as like araay of 0 adress
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;

}