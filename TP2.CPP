//PROBLEM1
/*
#include<iostream>

using namespace std;

int SumOfOdd(int n)
{
    if (n > 1 && n % 2 != 0)
    {
        return n + SumOfOdd(n - 2);
    }
    else if (n > 1 && n % 2 == 0)
    {
        return SumOfOdd(n - 1);
    }
    else if (n - 1 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int n;
    do
    {
        cout<<"Enter a number greater than 1: ";
        cin>> n;
        if (n <= 0)
        {
            cout<<"\nPlease enter a number greater than 1!\n";
        }
    }while (n <= 0);
    int result = SumOfOdd(n);
    cout<<"The sum of odd numbers from 1 to "<<n<<": "<<result<<endl;
    return 0;
}


//PROBLEM2

#include<iostream>
#include<math.h>
using namespace std;
int power(int m,int n){
    if(n>0){
        return m*power(m,n-1);
    }else if(n<0){
        return 1/power(m,-n);
    }else if(n==0){
        return 1;
    }else{
        return 0;
    }
}
int sumsquare(int n){
    if(n>0){
        cout<<n<<" ";
        return pow(n,2)+sumsquare(n-1);
    }else if(n==0){
        return 0;
    }else if(n<0){
        cout<<n<<" ";
        return pow(n,2)+sumsquare(n+1);
    }else{
        return 0;
    }
}
int sumdegit(int n){
    if(n>0){
        cout<<n<<" ";
        return n+sumdegit(n-1);
    }else{
        return 0;
    }
}
int main(){
    int choice;
    int n,m;
    while(1){
    cout<<"Please input valid choice from 1-3"<<endl;
    cout<<"Enter choice: ";cin>>choice;
        if(choice==1){
            cout<<"M power n."<<endl;
            cout<<"Enter m: ";cin>>m;
            cout<<"Enter n: ";cin>>n;
            cout<<"M power n equal "<<power(m,n)<<endl;
        }else if(choice==2){
            cout<<"Sum square of integer."<<endl;
            cout<<"Enter n: ";cin>>n;
            cout<<"Sumsquare n equal "<<sumsquare(n)<<endl;

        }else if(choice==3){
            cout<<"sum digit number."<<endl;
            cout<<"Enter n: ";cin>>n;
            cout<<"Sumdegit equal "<<sumdegit(n)<<endl;
        }else{
            cout<<"Invalid choice"<<endl;

        }
    }
}

//PROBLEM3

#include<iostream>
using namespace std;
void displaystar(int n){
    if(n>0){
        cout<<"*"<<" ";
        displaystar (n-1);
    }
}
void displaynumber(int n){
    if(n>0){
        cout<<n<<" ";
        displaynumber(n-1);
    }
}
int main(){
    int n;
    string choice;
    while(1){
        cout<<"\n"<<"Enter choice: ";cin>>choice;
        if(choice=="a"){
            cout<<"Display n star."<<endl;
            cout<<"Enter n: ";cin>>n;
            displaystar(n);
        }else if(choice=="b"){
            cout<<"Display number from n to 1"<<endl;
            cout<<"Enter n: ";cin>>n;
            displaynumber(n);
        }else{
            cout<<"Invalid choice"<<endl;
        }
    }
}

//PROBLEM4

#include<iostream>
using namespace std;
int minnumber=0;
void findmin(int a[],int sizeArray){
    if(sizeArray<0){
        cout<<"found"<<endl;
    }else{
        if(minnumber>a[sizeArray-1]){
            minnumber=a[sizeArray-1];
        }
        cout<<sizeArray<<" ";
        findmin(a, sizeArray-1);
    }
}
int main(){
    int myArray[]= {3,-7,0,9};
    int n;
    cout<<"Enter n: ";cin>>n;
    findmin(myArray,n);
    cout<<"\n\t The minimum number is "<<minnumber<<endl;
}

//PROBLEM5

#include<iostream>
using namespace std;
int findsum(int m[],int n){
    if(n>0){
        return m[n-1]+findsum(m,n-1);
    }else if(n==0){
        return 0;
    }
}
int main(){
    int m[]={1,2,3,4};
    int n=sizeof(m)/sizeof(m[0]);
    int sum=findsum(m,n);
    cout<<"Sum of element in array: "<<sum<<endl;
}
*/

//PROBLEM6

#include <iostream>

using namespace std;

int getSum() {
  double number;
  cout << "Enter a number (or -1 to quit): ";
  cin >> number;
  if (number == -1){
    return -1;
  }

  return number + getSum();
}
int main(){
int sum=0;
sum=getSum();
cout<<"total summation of all input numbers:"<<sum<<endl;
}



