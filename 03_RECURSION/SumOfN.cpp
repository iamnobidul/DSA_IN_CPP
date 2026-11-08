#include<iostream>

using namespace std;
int sum(int n){
   if(n==0 ) return 0;
   return n+sum(n-1) ;}
 main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<sum(n);
}