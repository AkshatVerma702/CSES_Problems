#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    int sol[n];
    if(n == 1){
        cout<<1;
        return 0;
    }
    else if(n==3 || n==2){
        cout<<"NO SOLUTION";
        return 0;
    }
    else{
        if(n%2 == 0){
            for(int i=2;i<=n;i+=2){
                cout<<i<<" ";
            }
            for(int i=1;i<n;i+=2){
                cout<<i<<" ";
            }
        }
        else{
            for(int i=n-1;i>0;i-=2){
                cout<<i<<" ";
            }
            for(int i=n;i>0;i-=2){
                cout<<i<<" ";
            }
        }
    }
    
}