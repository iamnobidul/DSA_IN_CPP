#include<iostream>
using namespace std;
void Print(int n){
     if(n==0) return ; // BASE 
    cout<<n<<endl; // WORK
    Print(n-1);  //
}
 main(){
    int n;
    cin>>n;
    Print(n);
}