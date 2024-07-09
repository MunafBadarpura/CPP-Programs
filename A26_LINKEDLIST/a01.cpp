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

int main(){
    //10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    //Forming Linked List
    a.next = &b;
    b.next = &c;
    c.next = &d;

    // cout<<(*a.next).val<<endl;//Val Of B
    // cout<<a.next->val<<endl;//Val Of B
    // cout<<a.next->next<<endl;//Add Of C
    // cout<<&c<<endl;//Add Of C

    //Values using A
    //cout<<(a.next)->next->next->val;  //Value Of D Using A

    //Printing
    Node temp = a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp = *(temp.next);
    }
}