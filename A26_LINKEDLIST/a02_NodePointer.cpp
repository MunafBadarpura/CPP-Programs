#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int size(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    return n;
}


//Recusion Printing
void displayrec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}

void insertAtEnd(Node* head,int val){
    Node* t = new Node(val);
    while(head->next!=NULL) head = head->next;
    head->next = t;
}

int main(){
    //10 20 30 40
    Node* a = new Node(10);  // a is store the add of New Node , the node has value = 10, ans next = null 
    Node* b = new Node(20); 
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;  // a ke null ke andar b ka address daal dia
    b->next = c;  // b ke null ke andar c ka address daal dia
    c->next = d;  // c ke null ke andar d ka address daal dia

    display(a);
    insertAtEnd(a,80);
    display(a);
    
    // display(a);
    //displayrec(a);
    // cout<<size(a);
}
