#include<iostream>
using namespace std;
class Node{   //user defined data type
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{  //user defined structure
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
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

    void insertAtIdx(int idx, int val){
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
        if(idx<0 || idx>=size){
            cout<<"Invalid Index"<<endl;
            return -1;
        } 
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
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
        else {
            head = head->next;
            size--;
        }
    }

    void deleteAtTail(){
        if(size==0) cout<<"List Is Empty"<<endl;
        else {
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
        if(idx<0 || idx>=size) cout<<"Invalid Index"<<endl;
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
    LinkedList ll;  //{};
    ll.insertAtTail(10);//{10->NULL};
    ll.insertAtTail(20);//{10->20->NULL};
    ll.insertAtTail(30);//{10->20->30->NULL};
    ll.display();

    ll.insertAtHead(99);//{99->10->20->30->NULL};
    ll.display();
    
    ll.insertAtIdx(2,24);//{99->10->24->20->30->NULL};
    ll.display();

    cout<<ll.getAtIdx(2)<<endl;  //Idx 2 is 24;

    ll.deleteAtHead();//{10->24->20->30->NULL};
    ll.display();

    ll.deleteAtTail();//{10->24->20->NULL};
    ll.display();

    ll.deleteAtIdx(1);//{10->20->NULL};
    ll.display();
}