#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &arr){
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}                       
int main(){
    vector<int> arr ={5,4,3,6,2,1};
    int n = arr.size();
    print(arr);
    // Selection SOrt 
    for(int j=0;j<n-1;j++){   
        int mn =arr[j] , mnIdx=j;
        for(int i=j;i<n;i++){
            if(arr[i]<mn){
                mn=arr[i];
                mnIdx=i;
            }               //TC=O(n^2)
        }
        swap(arr[j],arr[mnIdx]);    
    }
    print(arr);
}