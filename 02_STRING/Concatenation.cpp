#include <iostream>
#include <string>
using namespace std;
int main(){
     string s1 = "SK";
     string s2 = "NOBIDUL";
     cout<<s1+s2<<endl;

     string s = "souvik";
     //string x =s +4 ; //ERROR
     string x= s+'4';
     cout<<x<<endl;

     string s4 = "jaan";
     s4+="janu";
     cout<<s4;
}