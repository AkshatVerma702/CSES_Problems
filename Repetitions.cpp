#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
    string input;
    cin>>input;
    int count=0;
    int ans = 0;
    char start = 'A';
    for(char ch: input){
        if(ch == start){
            count++;
            ans = max(count, ans);
        }
        else{
            start = ch;
            count =1;
        }
    }
    cout<<ans;
}
