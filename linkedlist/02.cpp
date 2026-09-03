#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;

    }

};

//to link  node 
class list{
    node* head;
    node* tail;
    public:
    list(){
        head=tail=NULL;
    }

    void push_front(int val){
        node* newNode= new node(val);//to create dynamic object that persist after function call
        //node newNode(val); //static automatically erased after fn call
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        else{
            newNode->next=head;  // newnode ka jo next ke andar data or properties hai usko head me assign kr denge
            head=newNode;
        }
    }
        void pushback(int val){
            node* newNode=new node(val);

            if(head==NULL){
                head=tail=newNode;
            }
            else{
                tail->next=newNode;
                tail=newNode;
            }


        }

        void pop_front(){
            if(head==NULL){
                cout<<"error linked list is empty";
            }

            node* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }

        void pop_back(){
            if(head==NULL){
                cout<<"error empty ll";
            }

            node* temp=head;
            while(temp->next!= tail){
                temp=temp->next;
            }
            temp->next=NULL;
            delete tail;
            tail=temp;
        }



    void printll(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;

        }
        cout<<endl;
    }
};


int main(){
    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.pushback(4);

    ll.pop_front();
    ll.pop_back();
    ll.printll();

}