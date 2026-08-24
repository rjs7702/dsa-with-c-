#include<iostream>
#include<vector>
using namespace std;
 int main(){
    vector<int> vec={2,7,11,15};
    int n=vec.size();
    int target=18;
    //two pointer approach
    int i=0;
    int j=n-1;
    while(i<j){
        int ps=vec[i]+vec[j];
        if(ps>target){
            j--;
        }
        else if(ps<target){
            i++;
        }
        else{
            cout<<vec[i]<<" "<<vec[j];
            return 0;
        }
    }
 }