#include<bits/stdc++.h>

using namespace std;

int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){

    cin>>arr[i];
}

int large=INT_MIN;
int second_large=INT_MIN;

if(n<2){
    return -1;
}

for(int i=0;i<n;i++){
    if(arr[i]>large){
        second_large=large;
        large=arr[i];
    }
    else if(arr[i]>second_large && arr[i]!=large){
        second_large=arr[i];
    }
}
cout<<second_large<<endl;

    return 0;
}