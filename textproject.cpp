/*#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Student record structure
struct StudentRecord {
  int student_id;
  string student_name;
  string course;
  float fee_amount;
  float paid_amount;
  // Optional fields (add more if needed)
  string due_date;
  string payment_method;
  StudentRecord* next;
};

// Function prototypes
StudentRecord* readDataFromFile();
void writeDataToFile();
void displayRecords(StudentRecord* head);
void insertRecord(StudentRecord*& head);
void deleteRecord(StudentRecord*& head);
void updateRecord(StudentRecord* head);
void searchRecord(StudentRecord* head);
int getChoice();

int main() {
  string filename = "student_payments.csv"; // Hardcoded filename

  StudentRecord* head = readDataFromFile();

  int choice;
  do {
    choice = getChoice();
    switch (choice) {
      case 1:
        displayRecords(head);
        break;
      case 2:
        insertRecord(head);
        break;
      case 3:
        deleteRecord(head);
        break;
      case 4:
        updateRecord(head);
        break;
      case 5:
        searchRecord(head);
        break;
      case 6:
        writeDataToFile();
        cout << "Data saved successfully!" << endl;
        break;
      default:
        cout << "Invalid choice!" << endl;
    }
  } while (choice != 6);

  // Free allocated memory
  while (head != nullptr) {
    StudentRecord* temp = head;
    head = head->next;
    delete temp;
  }

  return 0;
}

// Function implementations

StudentRecord* readDataFromFile() {

  // Open the hardcoded file ("student_payments.csv") in read mode (`ifstream`)
}
void writeDatafile(StudentRecord* head){
  ofstream file( "student_payments.csv" );
  if ( !file.is_open() ) {
      cerr << "Error opening file!" << endl;
      return ; // Indicate error
  }

  // Code to read data from the file and build the linked list goes here (similar to before)
  // ...

  file.close();
  
}

void writeDataToFile() {
  // Open the hardcoded file ("student_payments.csv") in write mode (`ofstream`)
  ofstream file( "student_payments.csv" );
  if ( !file.is_open() ) {
      cerr << "Error opening file!" << endl;
      return; // Handle error
  }

  // Code to traverse the linked list and write data to the file goes here (similar to before)
  // ...

  file.close();
}

// Implementations for displayRecords, insertRecord, deleteRecord, updateRecord, and searchRecord remain the same (without filename parameter)

int getChoice() {
  cout << "\nMenu:" << endl;
  cout << "1. Display All Records" << endl;
  cout << "2. Insert New Record" << endl;
  cout << "3. Delete Record" << endl;
  cout << "4. Update Record" << endl;
  cout << "5. Search Record" << endl;
  cout << "6. Exit" << endl;
  cout << "Enter your choice: ";

  int choice;
  cin >> choice;
  return choice;
}

*/

#include <iostream>
using namespace std;

struct Element{
    string ID;
    Element *next;
};
struct Queue{
    int n;
    Element *front_;
    Element *rear_;
};
Queue *CreateEmptyList(){
    Queue *myQueue = new Queue;
    myQueue -> n = 0;
    myQueue -> front_ = NULL;
    myQueue -> rear_ = NULL;
    return myQueue;
}
void Enqueue(Queue *myQueue, string ID){
    Element *e = new Element;
    e -> ID = ID;
    e -> next = NULL;
    if(myQueue -> n == 0){
        myQueue -> front_ = e;
        myQueue -> rear_= e;
    }else{
        myQueue->rear_->next=e;
        myQueue->rear_=e;
    }
    myQueue -> n++;
}
void Display(Queue *myQueue){
    Element *tmp = myQueue->front_;
    while (tmp != NULL){
        cout << tmp->ID << " ";
        tmp = tmp-> next;
    }
}

int main(){
    Queue *ls = CreateEmptyList();
    Enqueue(ls, "OP007");
    Enqueue(ls, "OP005");
    Enqueue(ls, "OP020");
    Enqueue(ls, "OP111");
    Enqueue(ls, "OP777");
    Display(ls);
}
