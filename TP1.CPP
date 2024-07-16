//problem8
/*
#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    srand(time(0)); 

    int userChoice, computerChoice;
    char userChar, computerChar;

    cout << "Enter (R)ock, (P)aper, or (S)cissors: ";
    cin >> userChar;
    userChar = tolower(userChar);
    computerChoice = rand() % 3 + 1;
    switch (computerChoice) {
        case 1:
            computerChar = 'r';
            break;
        case 2:
            computerChar = 'p';
            break;
        case 3:
            computerChar = 's';
            break;
    }
    if (userChar == computerChar) {
        cout << "It's a tie!" << endl;
    } else if ((userChar == 'r' && computerChar == 's') ||
               (userChar == 'p' && computerChar == 'r') ||
               (userChar == 's' && computerChar == 'p')) {
        cout << "You win!" << endl;
    } else {
        cout << "You lose! The computer chose " << computerChar << "." << endl;
    }

    return 0;
}

//problem6

#include <iostream>
#include <cmath>

using namespace std;
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

void findQuadraticRoots(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Repeated Root: " << root << endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Complex Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Complex Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}
void calculateBMI(double weight, double height) {
    double bmi = weight / (height * height);

    cout << "BMI: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Normal weight" << endl;
    } else if (bmi >= 25 && bmi <= 29.9) {
        cout << "Overweight" << endl;
    } else if (bmi >= 30 && bmi <= 34.9) {
        cout << "Obese Class I" << endl;
    } else {
        cout << "Obese Class II or higher" << endl;
    }
}

int sumWithoutDivisibleByThree(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 3 != 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int choice, celsius, fahrenheit;
    double weight, height;
    int n;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Convert Celsius to Fahrenheit\n";
        cout << "2. Convert Fahrenheit to Celsius\n";
        cout << "3. Find roots of a quadratic equation\n";
        cout << "4. Calculate BMI\n";
        cout << "5. Sum numbers from 1 to n excluding multiples of 3\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter temperature in Celsius: ";
                cin >> celsius;
                cout << celsius << " Celsius = " << celsiusToFahrenheit(celsius) << " Fahrenheit" << endl;
                break;
            case 2:
                cout << "Enter temperature in Fahrenheit: ";
                cin >> fahrenheit;
                cout << fahrenheit << " Fahrenheit = " << fahrenheitToCelsius(fahrenheit) << " Celsius" << endl;
                break;
            case 3:
                double a, b, c;
                cout << "Enter coefficients a, b, and c for ax^2 + bx + c = 0: ";
                cin >> a >> b >> c;
                findQuadraticRoots(a, b, c);
                break;
                }}}
*/

#include <iostream>
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
StudentRecord* readDataFromFile(const string& filename);
void writeDataToFile(const string& filename, StudentRecord* head);
void displayRecords(StudentRecord* head);
void insertRecord(StudentRecord*& head);
void deleteRecord(StudentRecord*& head);
void updateRecord(StudentRecord* head);
void searchRecord(StudentRecord* head);
int getChoice();

int main() {
  string filename = "student_payments.csv";
  StudentRecord* head = readDataFromFile(filename);

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
        writeDataToFile(filename, head);
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

// Function implementations (replace with detailed logic)

StudentRecord* readDataFromFile(const string& filename) {
  // Open file and read data into linked list
  // ...
  return head;
}

void writeDataToFile(const string& filename, StudentRecord* head) {
  // Open file and write data from linked list
  // ...
}

void displayRecords(StudentRecord* head) {
  // Traverse list and print student record details
  // ...
}

void insertRecord(StudentRecord*& head) {
  // Prompt user for student information and create a new node
  // Insert the new node at the beginning or end of the list
  // ...
}

void deleteRecord(StudentRecord*& head) {
  // Prompt user for student ID and delete corresponding node
  // ...
}

void updateRecord(StudentRecord* head) {
  // Prompt user for student ID and allow modification of specific fields
  // ...
}

void searchRecord(StudentRecord* head) {
  // Allow user to search based on student ID, name, or course
  // ...
}

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