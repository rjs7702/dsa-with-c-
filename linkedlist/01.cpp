#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=nullptr;
    }
};



int main(){
    node* head=new node(10);
    head-> next= new node(20);
    head-> next->next =new node(30);
    head-> next->next->next=new node(40);

    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

}

