#include <iostream>
#include <string>
using namespace std;
int main(){
    string x = "abc";
    string y = "xyz";
    if(x==y) cout<<"same"<<endl;
    else cout<<"not same"<<endl;

    if(x>y) cout<<x<<" is greater than "<<y;
    else cout<<y<<" is greater than "<<x;
}