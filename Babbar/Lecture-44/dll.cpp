#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d) {
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }
};

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int getLength(Node* &head) {
    int len = 0;
    Node* temp = head;

    while(temp != NULL) {
        len++;
        temp = temp -> next;
    }
    return len;
}

void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);

    temp -> next = head;
    head -> prev = temp;
    head = temp;

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node* node1 = new Node(10);

    Node* head = node1; 
    print(head);

    cout << getLength(head);

    cout << endl; 
    
    insertAtHead(head, 11);

    print(head);

    

    return 0;
}