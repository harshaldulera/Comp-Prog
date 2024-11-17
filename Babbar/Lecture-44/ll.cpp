#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    ~Node() {
        int value = this -> data;
        if(this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }
        cout << value << endl;
    }

};

void insertAtNode(Node* &head, int d) {

    // create new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}

void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertInMiddle(Node* &head, int position, int d) {
    Node* temp = head;
    int cnt = 1;

    while(cnt < position - 1) {
        temp = temp -> next;
        cnt++;
    }

    Node* nodeToInsert = new Node(d);
    
    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;


}

void deleteNode(Node* &head, int position) {
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        delete temp;
    } else {
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt <= position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        delete curr;
    }
}   

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next; 
    }
    cout << endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node* node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtTail(tail, 12);

    print(head);


    insertAtTail(tail, 15);
    print(head);

    insertInMiddle(head, 3, 22);
    print(head);

    return 0;
}