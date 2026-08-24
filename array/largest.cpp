#include<iostream>
#include<climits>
using namespace std;
int main(){
    int marks[]={34,67,-8,76,89};
    int size=5;
    int largest=INT_MIN;

    for(int i=0;i<size;i++){
        largest= max(marks[i],largest);
    } 
    cout<<"largest= "<<largest;
}