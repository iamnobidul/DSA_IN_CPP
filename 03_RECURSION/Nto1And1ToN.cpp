#include<iostream>
using namespace std;
void Print(int n){
    if(n==0) return ; // BASE 
    cout<<n<<" "; // WORK
    Print(n-1);  // call

    if(n != 1)
        cout<<n<<" "; // WORK
    
}
 main(){
    int n;
    cin>>n;
    Print(n);
}