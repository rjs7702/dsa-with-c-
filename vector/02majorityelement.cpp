#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec={0,0,1,1,2,2,2,2,2};
    int n=vec.size();
    int freq=1;
    int ans=vec[0];
    for(int i=0;i<n;i++){
        
        if(vec[i]==vec[i-1]){
            freq ++;
        }
        else{
            freq=1;
            ans=vec[i];
            
        }
        if(freq>n/2){
            cout<<ans;
            break;
        }
    }
}