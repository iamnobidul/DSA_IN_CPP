#include<iostream> 
#include<vector>
using namespace std;
void change(vector<int>&v){ //pass by reference
    v[2]=99;

}
int main(){
    vector<int> v={8,2,3,6,4};
    change(v);
    cout<<v[2]<<endl; //prints 3 because the original vector is not changed 
}
