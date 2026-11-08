#include<iostream>
#include<vector>
using namespace std;
int main (){
    int m,n;
    cout<<"Enter rows :";
    cin>>m;
    cout<<"Enter cols :";
    cin>>n;
    vector<vector<int>> arr(m,vector<int>(n,0));
    // IF WE WANT TO ADD ARRAY 
    arr.push_back(vector<int>(4,-1));

    // OUTPUT
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}