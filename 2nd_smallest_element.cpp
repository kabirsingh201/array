#include<bits/stdc++.h>
using namespace std;


int main(){
int n;
int second;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

sort(arr,arr+n);

for(int i=n-2;i>=0;i--)
{
    if(arr[i]!=arr[n-1]){
     second=arr[i];
     break;
    }
}

    return 0;
}