#include<iostream>
#include<vector>
using namespace std;
 int main(){
    vector<int> vec={2,7,11,5};
    int target=18;
    int n=vec.size();
    vector<int>ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(vec[i]+vec[j]==target){
                
                cout<<i<<","<<j<<endl;
                cout<<vec[i]<<" "<<vec[j]<<endl<<"target="<<vec[i]+vec[j];
                return 0;
            }
        }
    }
 }