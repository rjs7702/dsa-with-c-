#include<iostream>
#include<climits>

 using namespace std;
 int main(){
    int size=5;
    int largest=INT_MIN;
    int marks[5];
    for (int i=0;i<size;i++){
        cin>>marks[i];

    }

    for (int i=0;i<size;i++){
        largest=max(marks[i],largest);

    }

    cout<<"Largest=  "<<largest;
 }