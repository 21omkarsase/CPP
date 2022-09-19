#include <bits/stdc++.h>
using namespace std;

const void printConst(const int n){
    // n--;
    //changing value of n(whether it is const or non-const)
    //wiil give cte error
    cout<<n<<"\n";
}

const int printval(int n){
    //as the return type is constant it doesn't matter
    //what type of value is coming as an argumnet
    //we can modify it 
    n--;
    return n;
}

void printVal1(int n){
    n=4;
    cout<<n<<"\n";
}

void printVal2(const int n){
    cout<<n<<"\n";

    //we can't modify this value it will through err
}


class Test {
    int value;
 
public:
    Test(int v = 0)
    {
        value = v;
    }

   int getValue() const{
      return this->value;
   }
     
    void setValue(int val) {
        this->value = val;
    }
};
 

void printA(int a){
    cout<<a<<"\n";
}

void printptr(const int *a){  //int *a will give err
    cout<<*a<<"\n";
}

int main()
{

    const int x = 10; // need to explicitly set at time of intialization

    // we can't modify const value

    int a = 10, b = 20;

    const int *m = &a;
    const int *n = &b;  //we can not pass this type of values 
                        //to non-const parameter fun as an argumnent

     printptr(n); //this will give an error

    // if we modify a and b values
    // we are also modifying m and n values

    a = 30;
    b = 40;

    cout << *m << " " << *n << "\n";

    const int *ptr = new int;

    int nptr = 100;
    ptr = &nptr;
    ptr=&x;

    // *ptr=32;   //we can not modify pointer values
    //we can chagnge val of val to whom ptr is pointing
    //or we can assign new val location to our ptr

    nptr = 320;
    cout << *ptr << "\n";


    int * const p1=&nptr;

    *p1=032;

    // p1=&x;     //we can't assign another address to our 
                  //const p1
                  //but we can modify value present at p1

    cout<<*p1<<"\n";

    delete ptr;


    const int* const p3=&nptr;

    //by this method we would not able to 
    //modify value of *p3 or of p3

    // *p3=32;
    // p3=&x;

    const int f=3;
    printA(f);









   cout<<"\n\n";

    //************************constant Methods*****************
    Test t(10);
    t.setValue(100);         //non-const obj calling to non-const fun (no err)
    cout<<t.getValue()<<"\n";//non-const obj calling to const fun (err)   

    const Test tcon(40);
    cout<<tcon.getValue()<<"\n";   //const obj calling to const fun (no err)  
    // tcon.setValue(400);            ///const obj calling to non-const fun (err)





    cout<<"\n\n";


    // ******************Constant Function Parameters**********************
    int n1=10;
    const int n2=20;

    printVal1(n1);
    printVal1(n2);   //we can send const val to fun accepting const values and also we can modify them
    printVal2(n2);
    printVal2(n1);  //also we can send non-const val to fun accepting const values
                    //but we will not able to modify



    cout<<"\n\n";

    // *****************For const return type******************
    
    cout<<printval(n1)<<"\n";
    cout<<printval(n2)<<"\n";





    cout<<"\n\n";

    // *****************For const return type and const parameter ***************

    printConst(n1);
    printConst(n2);
    return 0;
}