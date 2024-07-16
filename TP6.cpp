/*#include<iostream>
using namespace std;
struct  alphabit
{
    char lowercase;
    char uppercase;
    alphabit *link;
};
struct  list
{
    int n;
    alphabit *head;
    alphabit *tail;

};
list *createlist(){
    list *ls;
    ls= new list();
    ls->n=0;
    ls->head=NULL;
    ls->tail=NULL;
    return ls;
}
void insert_letter(list *ls , char letter){
     alphabit *e;
     e=new alphabit();
     e->uppercase=letter;
     e->link=NULL;
     if (ls -> n== 0){
        ls->head=e;
        ls->tail=e;
     }else{
        ls-> tail->link= e;
        ls-> tail= e;
     }
     ls->n = ls->n+1;

}
void display_letter(list *ls){
     alphabit *tmp;
     tmp = ls-> head;
     while (tmp!=NULL){
        cout<<tmp->uppercase<<" ";
        tmp = tmp->link;
     }
     cout<<endl;
}
int main(){
    list *lowerletter = createlist();
    list *upperletter = createlist();
    
    char i;
    for ( i='a' ; i<='z' ; i++){
        insert_letter(lowerletter, i );
    }
    for ( i='A'; i<='Z'; i++){
        insert_letter(upperletter, i);
    }
    display_letter(lowerletter);
    display_letter(upperletter);
}
//hello my name is chamroeun im from my mother and im 20 year old now, I'm a student at ITC 
// and this it my problem hope you will enjoy it in weekend thank you!



//test cours code link list
#include<iostream>
#include<fstream>
using namespace std;
struct Element {
    int data;
    Element *Next;
};

struct List {
     int n;
    
    Element *head;
    Element *tail;
};

List* createlist(){
   List* ls;
   
   ls = new List();
   
   ls -> n = 0;
   ls -> head = NULL;
   ls -> tail = NULL;
   
   return ls;
}

void addToBegin( List *ls, int newdata ){
    Element *newNode;
    newNode = new Element;
    newNode -> data = newdata;
    newNode -> Next = ls->head;
    ls->head = newNode;
    ls->n++;

    if(ls -> n == 1){
        ls -> tail = newNode;
        }
}

void addToEnd( List *ls, int newdata ){
    Element *e;
    
    e = new Element();
    e -> data = newdata;
    e -> Next = NULL;
    
    if( ls->n==0){
        ls->head = e;
        ls->tail = e;
        ls->n=ls->n+1;
    }else{
        ls->tail->Next = e;
        ls->tail = e;
        ls->n=ls->n+1;
    }
}
void delete_begin(List *ls){

    if(ls->n==0){
        cout<<"Opp! Can not delete. List is empty"<<endl;

    }else if(ls->n==1){
        Element *e;
        e = ls->head;

        ls->head=NULL;
        ls->tail=NULL;
        ls->n=0;

        delete e;
    }else{
        Element *e;
        e = ls->head;
        ls->head = ls->head->Next;
        ls->n=ls->n-1;
        delete e;

    }
}

void displayList(List *ls){
    Element *t;
    t = ls->head;
    while(t!=NULL){
        cout<<t->data<<" ";
        t = t->Next;
        }
    cout<<"\n\n";
}


int main(){
    List *mylist1;


    mylist1 = createlist();

    addToEnd(mylist1,2);
    addToEnd(mylist1,10);
    addToEnd(mylist1,3);
    addToEnd(mylist1,4);
    addToEnd(mylist1,5);
    addToEnd(mylist1,6);
    addToEnd(mylist1,7);

    displayList(mylist1);

    addToEnd(mylist1,30);
    addToEnd(mylist1,40);
    addToEnd(mylist1,50);
    addToEnd(mylist1,60);

    displayList(mylist1);

    addToBegin(mylist1,3);
    addToBegin(mylist1,2);
    addToBegin(mylist1,1);
    addToBegin(mylist1,0);

    displayList(mylist1);

    delete_begin(mylist1);

    displayList(mylist1);

    delete_begin(mylist1);

    displayList(mylist1);
}
*/

#include<iostream>
using namespace std;

struct Student{
    string name;
    Student *next;
};

struct List{
    int n;
    Student *head;
    
};

List *empty(){
    List* ls;
    ls -> n =0;
    ls -> head = NULL;
    return ls;
}
void addstudent(List *ls , string Newdata){
    Student *stu = new Student;
    stu -> name = Newdata;
    stu -> next  = ls -> head;
    ls -> head = stu;

}
void displaystu(List *s){
    Student *tmp;
    tmp = s -> head;
    while(tmp != NULL){
        cout << tmp -> name << " " << endl;
        tmp = tmp -> next;
    }

}

int main(){
    List *L1;
    L1 = empty();
    addstudent(L1 , "Seyha");
    displaystu(L1);

}