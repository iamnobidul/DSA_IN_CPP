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
    vector<int> arr = {4,1,7,3,9,2,0,8};
    int n =arr.size();
    print(arr);
    for(int i=1;i<=n-1;i++){
       int j=i;
       while(j>=1 && arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
       }                        //TC=O(n^2)
    }
    print(arr);
}