#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={12,67,-76,76,87};
   int  largest=INT_MIN;
   int size=5;
   for (int i=0;i<size;i++){
    // if(arr[i]>largest){
    //     largest=arr[i];
    // }  
    largest=max(arr[i],largest);
   }
   cout<<largest;
}