//Problem1
/*#include<iostream>
#include<fstream>
using namespace std;









//problem2

#include<iostream>
#include<fstream>
using namespace std;
struct Student{
      string name;
      int age;
      string Gmail;
};

int main(){
    Student s[100];
    fstream Readfile;
    Readfile.open("file.txt",ios::in);
    int index=0;
    while(!Readfile.eof()){
          Readfile>>s[index].name;
          Readfile>>s[index].age;
          Readfile>>s[index].Gmail;
    cout<<s[index].name<<" "<<s[index].age<<" "<<s[index].Gmail<<endl;
    index=index+1;
    }

}

//problem3
#include<iostream>
#include<fstream>
using namespace std;
struct Student{
    string name, email;
    int age, id;
};
// Global declaration
Student s[100];
int numberOfStudent = 0;

void Display(){
    fstream readfile;
    string line;
    int i = 0;

    readfile.open("Student.txt", ios::in);
    cout << "Number\tName\tAge\tID\tEmail\n";
    if (readfile.is_open()){
        while(getline(readfile, line)){
            cout << i + 1 << "\t" << line << endl;
        i++;
        }
    readfile.close();
    }
}
void addstudent (){
    //fstream writefile;

    //writefile.open("Student.txt", ios::app);
    //if(writefile.is_open()){
        for ( int i = numberOfStudent; i < numberOfStudent + 3; i ++ ){
            cout << "\tFor student " << i + 1 << endl;
            cout << "Please enter your name : ";
            cin >> s[i].name;
            cout << "Please enter your age : ";
            cin >> s[i].age;
            cout << "Please enter your ID : ";
            cin >> s[i].id;
            cout << "Please enter your email : ";
            cin >> s[i].email;
    //writefile << s[i].name << "\t" << s[i].age << "\t" << s[i].id << "\t" << s[i].email << endl;
        }
    numberOfStudent += 3;
    //writefile.close();
    //}
}
void searchemail (){
    fstream searchfile;
    string searchE;
    int countposition = 0, trues = 0;

    cout << "Please enter the email : ";
    cin >> searchE;

    searchfile.open("Student.txt", ios::in);
    if ( searchfile.is_open() ){
        // we use loop to find the position to know exact number
        for ( int i = 0; i <= numberOfStudent; i ++ ){
            countposition++;
            if ( s[i].email == searchE ){
                trues = 1;
                break;
            }else {
                trues++;
            }
        }
        //cout << "\n\n\n\n" << countposition << "\n\n\n\n";
        // now we catch that number and display info.
        if ( trues == 1 ){
            cout << "Here are the information of student that you have wanted to know : \n";
            cout << "\tThe student's name : " << s[countposition - 1].name << endl;
            cout << "\tThe student's age : " << s[countposition - 1].age << endl;
            cout << "\tThe student's ID : " << s[countposition - 1].id << endl;
            cout << "\tThe student's email : " << s[countposition - 1].email << endl;
        }else {
            cout << "We don't have this data!\n";
        }
    }
    // we revalue countposition to zero that can check again time from array zero
    countposition = 0;
    trues = 0;
}
void Writetofile (){
    fstream writefile;
    int countadd = 0;

    writefile.open("Student.txt", ios::app);
    if ( writefile.is_open() ){
        for ( int i = countadd; i < numberOfStudent; i ++ ){
            writefile << s[i].name << "\t" << s[i].age << "\t" << s[i].id << "\t" << s[i].email << endl;
        countadd++;
        }
    writefile.close();
    }
}
void updatedata(){
    string newname, newemail;
    int newage, oldid, newid, countposition = 0, trues = 0;

    cout << "Please enter the ID : ";
    cin >> oldid;

    for ( int i = 0; i < numberOfStudent; i ++ ){
        countposition++;
        if ( s[i].id == oldid ) break;
    }
    cout << "Here are his/her old informations : \n";
    cout << "\tName : " << s[countposition - 1].name;
    cout << "\tAge : " << s[countposition - 1].age;
    cout << "\tID : " << s[countposition - 1].id;
    cout << "\tEmail : " << s[countposition - 1].email << endl;
    countposition = 0;

    cout << "\nNow input his/her new informations :" << endl;
    cout << "\tName : ";
    cin >> newname;
    cout << "\tAge : ";
    cin >> newage;
    cout << "\tID : ";
    cin >> newid;
    cout << "\tEmail : ";
    cin >> newemail;

    for ( int i = 0; i < numberOfStudent; i++ ){
        if ( s[i].id == oldid ){
            s[i].name = newname;
            s[i].age = newage;
            s[i].id = newid;
            s[i].email = newemail;
        }
    }
}

main(){
    fstream writefile;
    //fstream readfile;
    char choice;
    while (1){

        cout << "The menu is given as below : " << endl;
        cout << "\ta. Display the data from array" << endl;
        cout << "\tb. Add information of 3 more students" << endl;
        cout << "\tc. Search for a student based on an email" << endl;
        cout << "\td. Write students into the array to file" << endl;
        cout << "\te. Update a student information base on ID" << endl;
        cout << "\tf. Exit the program" << endl;
        cout << "Enter the letter here : ";
        cin >> choice;

        if ( choice == 'A' || choice == 'a' ){
            Display();
        }else if ( choice == 'B' || choice == 'b' ){
            addstudent();
        }else if ( choice == 'C' || choice == 'c' ){
            searchemail();
        }else if ( choice == 'D' || choice == 'd' ){
            Writetofile();
        }else if ( choice == 'E' || choice == 'e' ){
            updatedata();
        }else if ( choice == 'F' || choice == 'f' ){
            break;
        }else {
            cout << "Not Define!!Try again!\n";
        }
        //cout << numberOfStudent;
    cout << "\n\n\n\n\t\t\t*********" << endl;
    }
}



//problem4
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;
int main(){
    fstream writefile;
    writefile.open("test3.txt");
    string path="";
    for (int  i = 1; i <= 1000; i++)
    {
        string filename = path+to_string(i)+".txt";
        writefile.open(filename);
        for ( int j = i; j <= i*10; j++)
        {
            writefile<<j<<"";
        }
    writefile.close();
    }
}
*/

