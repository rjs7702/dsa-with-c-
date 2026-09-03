
#include<iostream>


using namespace std;

int main(){
    int a=10;
    float b=10.5;
    int *ptr=&a;
    float *ptr2=&b;
    int **ptrnew=&ptr;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<b<<endl;
    cout<<&b<<endl;
    cout<<&ptr<<endl;
    cout<<ptrnew<<endl;


    
    return 0;
    
    
    

}