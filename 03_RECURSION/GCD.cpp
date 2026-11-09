#include<iostream>
using namespace std;
int hcf(int a ,int b){
    if(a==0) return b;
    return hcf(b%a,a);
//    for(int i=min(a,b);i>=1;i--){
//     if(a%i==0 && b%i == 0) return i;
//    }
//    return 1;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<hcf(a,b);
}