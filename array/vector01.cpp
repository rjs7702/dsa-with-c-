#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3};
    cout<<vec[0]<<endl;
    vector<int>vec1(3,5);
    cout<<vec1[0]<<endl;
    cout<<vec1[1]<<endl;
    cout<<vec1[2]<<endl;
    cout<<vec1[3]<<endl;
    for(int i:vec){
        cout<<i<<endl;
    }
    vector<char>vec3={'a','b','c','d'};
    for(char value:vec3){
        cout<<value<<endl;
    }
    
}