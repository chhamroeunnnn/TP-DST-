//problem1
#include<iostream>
using namespace std;
main(){
    int n1=7,n2=3,n3=15;
    int *p1 =&n1, *p2=&n2,*p3=&n3;
    cout <<"address n1: "<<&n1<<"and value n1 is "<<*p1<<endl;
    cout <<"address n2: "<<&n2<<"and value n2 is "<<*p2<<endl;
    cout <<"address n3: "<<&n3<<"and value n3 is "<<*p3<<endl;
    *p3=*p2+*p1;
    cout <<"value of n3: "<<*p3<<endl;

}

//problem2
#include<iostream>

using namespace std;

int main(void)
{
    int input;
    cout<<"Enter a number: ";
    cin >> input;
    int *ptr = &input;
    cout<<"Before, n:"<<input<<endl;
    *ptr = *ptr + 7;
    cout<<"\nAfter, n:"<<input<<endl;
    return 0;
}


//problem3
#include<iostream>

using namespace std;

void exchange(float *a, float *b)
{
    float swapping;
    swapping = *a;
    *a = *b;
    *b = swapping;
}
int main(void)
{
    float a , b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"Before Exchanging: a="<<a<<"\tb="<<b;
    exchange(&a, &b);
    cout<<"\nAfter Exchange : a="<<a<<"\tb="<<b;
    return 0;
}

//problem4
#include<iostream>
#include<math.h>

using namespace std;

void solveEquation(int a, int b, int c, float *x1, float *x2, float *delta)
{
    *delta = (b * b) - 4 * (a * c);
    if (*delta> 0)
    {
        *x1 = (-b -sqrt(*delta))/ (2.0 * a);
        *x2 = (-b +sqrt(*delta))/ (2.0 * a);
    }
    else if (*delta == 0)
    {
        *x1 = (-b / (2.0*a));
        *x2 = *x1;
    }

}
int main(void)
{
    float x1, x2, delta;
    int a, b, c;
    do
    {
        cout<<"Enter value of a, b, c(e.g. a b c): ";
        cin>>a>>b>>c;
        if(a == 0)
        {
            cout<<"A must not be 0";
        }
    }while(a == 0);
    solveEquation(a, b, c, &x1, &x2, &delta);
    if(delta >= 0)
    {
        cout<<"Result\nX1= "<<x1<<"\nX2 = "<<x2<<endl;
    }
    else
    {
        cout<<"Result\nX1= "<<(-b/ 2.0*a)<<"- i"<<sqrt(-delta)/ (2.0*a)<<"\nX2 = "<<(-b/ 2.0*a)<<"+ i"<<sqrt(-delta)/ (2.0*a)<<endl;
    }
    return 0;
}


//problem5
#include<iostream>
using namespace std;
void findMaxandMin(int number[], int *max, int *min){
    for (int i=1; i<=7; i++){
        if (number[i]> *max){
            *max=number[i];
        }
        if (number[i]< *min){
            *min=number[i];
        }
    }
}
int main(){
    int number[7];
    cout <<"enter 7 number:\n";
    for (int i=1; i<=7; i++){
        cin>>number[i];
    }
    int max =number[0];
    int min =number[0];
    findMaxandMin(number, &max, &min);
    cout << "\nMaximum number: " << max << endl;
    cout << "Minimum number: " << min << endl;

  return 0;
}


//problem6
#include<iostream>

using namespace std;

int main(void)
{
    float number[7];
    float *ptr = number;
    int sum = 0;
    int *sum_ptr = &sum;
    int multi = 1;
    int *multi_ptr = &multi;
    for (int i = 0; i < 7; i++)
    {
        cout<<"Enter number#"<<i + 1<<": ";
        cin>>number[i];
    }
    cout<<"Displaying...\n";
    for(int i = 0; i < 7; i++)
    {
        cout<<"number["<<i<<"]: "<<*(ptr + i)<<endl;
        *sum_ptr = *sum_ptr + *(ptr + i);
        *multi_ptr = *multi_ptr * *(ptr + i);
    }
    cout<<"The Total Summation: "<<*sum_ptr<<endl;
    cout<<"The Total Multiplication: "<<*multi_ptr<<endl;
    return 0;
}


//problem7
#include<iostream>

using namespace std;

void sum1(double *result, int n)
{
    int denominator;
    for(int i = 1; i <= n; i++)
    {
        denominator = ((10 * i) + 2);
        *result = *result + (1.0 / denominator);
    }
    cout<<*result<<endl;
}
int main(void)
{
    double result = 0;
    sum1(&result, 5);
    return 0;
}
