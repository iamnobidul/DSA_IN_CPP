#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr={8,2,3,6,4};
     sort(arr.begin()+1,arr.end()-1); //sorts the subarray from index 1 to 4 in ascending order
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    sort(arr.begin(),arr.end()); //sorts the array in ascending order
    for(int ele : arr){
        cout<<ele<<" ";
    }
   
    cout<<endl;
    reverse(arr.begin(),arr.end()); //reverses the array
    for(int ele : arr){
        cout<<ele<<" ";
    }
}   