#include<iostream>
#include<climits>

using namespace std;
int main(){
    int size=5;
    int index=-1;
    
    int marks[]={45,76,89,98,75};
    int smallest=INT_MAX;

    for (int i=0; i<size;i++){
        smallest=min(marks[i],smallest);
        index=i;
    }
    cout<<index;
    
}