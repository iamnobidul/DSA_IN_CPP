#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string :";
    getline(cin,s);
    int n =s.size();
    int count=0;
    for(int i=0;i<=n;i++){
        if(s[i]=='a') count++;
        else if (s[i]=='e') count++;   
        else if (s[i]=='i') count++;   
        else if (s[i]=='o') count++;   
        else if (s[i]=='u') count++;   
        else if (s[i]=='A') count++;   
        else if (s[i]=='E') count++;   
        else if (s[i]=='I') count++;
        else if (s[i]=='O') count++;
        else if (s[i]=='U') count++;
        
    }
    cout<<count;
}