#include<iostream>
using namespace std;
int main (){
    int target =21;
    bool flag = false;
    int arr[]={10,2,55,2,100};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){    
        if(target==arr[i]){
            flag=true;
            break;
        }
    }
    if(flag==true) cout<<"FOUND" ;
    else cout<<"NOT FOUND";
} 
        