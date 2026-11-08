#include<iostream>
using namespace std;
void aryan(){
    cout<<"ARYAN";
}
void param(){
    cout<<"PARAM";
    aryan();
}
void kartik(){
    cout<<"KARTIK";
    param();
}


int main(){
    kartik();
    param();
    aryan();
}