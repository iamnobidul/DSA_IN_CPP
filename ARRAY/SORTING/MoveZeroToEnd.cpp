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
    vector<int> arr ={9,2,0,0,-4,6,0,7,0};
    int n = arr.size();
    print(arr);
    for(int i=0;i<=n-1;i++){ //n-1 passes
        for(int j=0;j<n-1-i;j++){  
          if(arr[j] == 0){     
                swap(arr[j],arr[j+1]);
                
            }
        }
      
    }
    print(arr);
}