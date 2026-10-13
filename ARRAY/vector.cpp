#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(8,-1); //index 0 to 7 
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" "; //printing the elements of vector
    }
    cout<<endl;
    arr.push_back(5); //adding an element at the end of vector
    arr.push_back(10); //adding an element at the end of vector
    arr.pop_back(); //removing the last element of vector
    arr.push_back(7); //adding an element at the end of vector
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" "; //printing the elements of vector
    }
    cout<<endl;
}