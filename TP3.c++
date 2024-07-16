//Problem4
/*
#include<iostream>
#include<fstream>
using namespace std;
main(){
    fstream myfile;
    int D;
    string name;
    myfile.open("storestudent.txt",ios::out);

    //let input and store student

    for(int k=1 ; k<=3 ; k++){
        cout<<"\n\t Getting info student"<<k<<endl;
        cout<<"Enter student ID: ";cin>>D;
        cout<<"Enter name : ",cin>>name;
    myfile<<D<<"\t"<<name<<"\n";
    }
    myfile.close();
}
*/

//problem1

#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() {
        head = nullptr;
    }

    bool isEmpty() {
        return head == nullptr;
    }

    void addAtBeginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        }
        head = newNode;
    }

    void addAtEnd(int data) {
        Node* newNode = new Node(data);
        if (isEmpty()) {
            head = newNode;
            return;
        }
        Node* last = head;
        while (last->next != nullptr) {
            last = last->next;
        }
        last->next = newNode;
        newNode->prev = last;
    }

    void addAtPosition(int data, int position) {
        if (position < 1) {
            std::cout << "Invalid position" << std::endl;
            return;
        }
        Node* newNode = new Node(data);
        if (position == 1) {
            addAtBeginning(data);
            return;
        }
        int count = 1;
        Node* current = head;
        while (current != nullptr && count < position) {
            current = current->next;
            count++;
        }
        if (current == nullptr) {
            std::cout << "Invalid position" << std::endl;
            return;
        }
        newNode->next = current->next;
        if (current->next != nullptr) {
            current->next->prev = newNode;
        }
        current->next = newNode;
        newNode->prev = current;
    }

    void display() {
        if (isEmpty()) {
            std::cout << "List is empty" << std::endl;
            return;
        }
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    DoublyLinkedList dll;

    // Add elements to the list
    dll.addAtEnd(10);
    dll.addAtBeginning(5);
    dll.addAtEnd(15);
    dll.addAtPosition(20, 3);

    // Display the Doubly Linked List
    std::cout << "Doubly Linked List: ";
    dll.display();

    return 0;
}

  