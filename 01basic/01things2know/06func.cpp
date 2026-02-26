#include<bits/stdc++.h>
using namespace std;

// function are set of instructions that perform a specific task
    //increase the reusability of code
    //readability of code
    // function is a block of code that only runs when it is called
    // function can take parameters and return a value
    // function can be called multiple times in a program
    // function can be defined in the same file or in a separate file
    //void function
    //parameterless function

    void hello() {
        cout<<"Hello World\n";
    }
    //parameterized
    void hello(string name) {
        cout<<"Hello "<<name<<endl;
    }
    //with return value
    int add(int a=0, int b=0) {
        return a+b;
    }
    //default parameter

    int max(int a, int b) {
        if(a>b) {
            return a;
        } 
            return b;
        
    }
    //pass by value
    //pass by reference
    //pass by pointer
    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

    //array always goes with reference
    void dosomething(int arr[], int n) {
        for(int i=0;i<n;i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
int main() {
    string name;
    cout<<"Enter your name: ";  
    getline(cin,name);
    hello(name);
    hello();
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    cout<<"Sum of "<<num1<<" and "<<num2<<" is "<<add(num1,num2)<<endl;
    cout<<max(num1,num2)<<endl;

    swap(num1,num2);
    cout<<"After swapping: "<<num1<<" "<<num2<<endl;
    //pass by reference
}
