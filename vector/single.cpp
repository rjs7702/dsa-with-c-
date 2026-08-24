#include<iostream>
#include<vector>
using namespace std;//unique value in vector without using nested loop

    int singlenum(vector<int> &num){
        int ans=0;
        for(int val:num){
            ans=ans^val;
        }
        return ans;
    }
int main(){
    vector <int> num={6,2,1,1,2};
    int result=singlenum(num);
    cout<<result;
}