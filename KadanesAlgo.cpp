#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={5,4,-1,7,8};
    int ans=INT_MIN;
    int max=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<size; i++){
        max=max+arr[i];
        if(max<0){
            max=0;
        }
        if(max>ans){
            ans=max;
        }
    }
    cout<<ans;
}
