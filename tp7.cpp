#include<iostream>
using namespace std;
struct Element
{
    string deta;
    Element *next;
    Element *previous;
};
struct List
{
    int n;
    Element *head;
    Element *tail;
};
List *createlist(){
    List *mylist;
    mylist = new List;
    mylist-> n=0;
    mylist-> head=NULL;
    mylist-> tail=NULL;
    return mylist;
}
void addto_begin(List *mylist, string newDeta){
    Element *e;
    e= new Element;
    e->deta =newDeta;
    e->previous = NULL;
    e->next = mylist->head;
    if (mylist->n==0){
        mylist->head=e;
        mylist->tail=e;
        mylist->n++;
    }else{
        mylist->head->previous=e;
        mylist->head=e;
        mylist->n++;

    }
}
void displayV1(List *l1){
    Element *t;
    t=l1->head;
    while (t!=NULL)
    {
        cout<<t->deta<<endl;
        t=t->next;
    }
    
}
void displayV2(List *l2){
    Element *t;
    t=l2->tail;
    while (t!=NULL)
    {
        cout<<t->deta<<endl;
        t=t->previous;
    
    }
    
}
void addendall(List *mylist,string newdata){
    Element *e;
    e= new Element;
    e-> deta=newdata;
    e-> previous=mylist->tail;
    if (mylist->n==0){
        mylist->head=e;
        mylist->tail=e;
        mylist->n++;

    }
}
main()
{
    List *L1;
    L1=createlist();
    addto_begin(L1,"20");
    addto_begin(L1,"15");
    addendall(L1,"5");
    addendall(L1,"10");
    cout<<"\nDisplay data in list from to head:\n";
    displayV2(L1);
    cout<<endl;
    cout<<"\n\nDisplay data in list from to tail:\n";
    displayV1(L1);
    
}
