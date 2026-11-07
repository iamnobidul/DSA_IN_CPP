#include <iostream>
#include <string>
using namespace std;
int main(){
    string s ;
    cout<<"Enter a string :";
    getline(cin,s);
    int n =s.size();

    int i=0;
    int j=(n/2)-1;

    while(i<j){
        char temp =s[i];
        s[i]=s[j];
        s[j]=temp;

        i++;
        j--;
    }
    cout<<s;
}
