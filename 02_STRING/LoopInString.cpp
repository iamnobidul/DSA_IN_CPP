#include <iostream>
#include <string>
using namespace std;
int main(){
    string s="Sk Nobidul";
    int n = s.size();

// FOR LOOP
    // for(int i=0;i<n;i++){
    //     cout<<s[i];
    // }

// FOR EACH LOOP
    for(char ch : s){
        cout<<ch;
    }
}