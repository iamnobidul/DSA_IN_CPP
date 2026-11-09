#include<iostream>
using namespace std;
void paths( int m , int n , string s ){
    if( m == 1 && n == 1 ){
        cout<<s<<endl; // sahi paths 
        return ;
    }
    if( m==0 || n==0) return ;
    paths(m,n-1,s+"R"); // RIGHT 
    paths(m-1,n,s+"D"); // DOWN
}
int main(){
    int m,n;
    cout<<" Enter rows & col :";
    cin>>m>>n;
    paths(m,n,"");
}