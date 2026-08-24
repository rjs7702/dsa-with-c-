#include<iostream>
using namespace std;

int main(){
    int size=5;
    int marks[5];
    
    // cout<<sizeof(marks)<<endl;
    // cout<<sizeof(marks)/sizeof(int)<<endl;
    for(int i=0;i<size;i++){
        cin>>marks[i];
    }

    for (int i=0;i<size;i++){
    cout<<marks[i]<<endl;
    }

}