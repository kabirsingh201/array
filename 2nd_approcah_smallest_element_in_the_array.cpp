#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int min;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    min=arr[0];
    
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    
    cout<<min;
    
    return 0;
}