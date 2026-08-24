
#include<iostream>


using namespace std;

int main(){
    int a=10;
    int* ptr=&a;
    int** ptr2=&ptr;

    //cout<<&ptr<<endl;
    //cout<<ptr2;

    //cout<<*(&a)<<endl;
    //cout<<*(ptr)<<endl;
    //cout<<*(ptr2)<<endl;
    //cout<<**(ptr2);

    int** ptr3;
    cout<<ptr3<<endl;//prints garbage value thats why we need null pointer 

    int* ptr4=NULL;
    cout<<ptr4;


    return 0;
    
    
    

}