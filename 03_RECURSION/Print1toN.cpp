#include<iostream>
using namespace std;
void Print(int n){
    if(n==0) return ; // BASE 
    Print(n-1);  // call
    cout<<n<<" "; // WORK
    
}
 main(){
    int n;
    cin>>n;
    Print(n);
}
// #include<iostream>
// using namespace std;
// int a=1; 
// void print(int n){  
//     if(a>n) return; // BASE 
//     cout<<a<<endl; // WORK
//     a++;  // CALL    
//     print(n);
// }
//  int main(){
//     int n;
//     cin>>n;       
//     print(n);
// }