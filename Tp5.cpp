#include<iostream>
using namespace std;
struct student
{
    int ID;
    string Name;
    int Year;
    string Programdegree;
    student *link;
};

struct liststudent
{
    int n;
    student *head;
    student *tail;
};


