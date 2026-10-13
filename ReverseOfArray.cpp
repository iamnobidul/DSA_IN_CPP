#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr={10,20,30,40,50,60};
      for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    int i=1,j=3;
    //int i=0,j=arr.size()-1;//two pointer approach
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
} 