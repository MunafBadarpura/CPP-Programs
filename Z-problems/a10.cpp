#include<iostream>
#include<climits>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val= val;
        this->next=NULL;
    }
};

void displayrec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}

class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head  = tail = NULL;
        size = 0;
    }

    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp; 
        }
        size++;
    }

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx,int val){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    int getAtIdx(int idx){
        if(idx<0 || idx>=size) return -1;
        else if(idx == 0) return head->val;
        else if(idx == size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i=1;i<=idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }

    void deleteAtHead(){
        if(size==0) cout<<"List Is Empty"<<endl;
        else{
            head = head->next;
            size--;
        }
    }

    void deleteAtTail(){
        if(size==0) cout<<"List Is Empty"<<endl;
        else{
            Node* temp = head;
            while(temp->next!=tail){
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }

    void deleteAtIdx(int idx){
        if(size==0) cout<<"List Is Empty"<<endl;
        else if(idx<0 || idx>=size) cout<<"Invalid Index"<<endl;
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail(); 
        else{
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList ll;
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    // ll.insertAtIdx(1,40);

    // cout<<ll.getAtIdx(1)<<endl;
    ll.deleteAtIdx(2);
    // ll.deleteAtHead();


    ll.display();

    
}