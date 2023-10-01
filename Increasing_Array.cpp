#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int moves =0;
    long long int start = arr[0];
    for(int i=1;i<n;i++){
        if(start<=arr[i]){
            start = arr[i];
            continue;
        }
        else{
            int diff = start - arr[i];
            arr[i] += diff;
            moves += diff;
            start = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<moves;
}
