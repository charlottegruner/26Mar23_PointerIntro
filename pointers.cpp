#include <iostream>
using namespace std;

int main()
{
    int num;  
    double val;
    double val2; 
    double* dptr; // dptr is a pointer that can point to a double variable
    // pointer is a variable (dptr) can store a memory address
    cout << dptr << endl; 
    //*dptr = 90; // can't do this
    dptr = &val; // dptr is assigned the address of val 

    val = 78.90;

    cout << val << endl;
    cout << dptr << endl;
    cout << *dptr << endl; //de-referencing operator *  

    *dptr = 1003.9;
    cout << val << endl; 
    cout << &val << endl;

    dptr = &val2; 

    // create an integer pointer
    int* npointer; 
    // point it at the num variable
    npointer = &num; 
    // use the pointer to put the value 23 into num
    *npointer = 23;
    //npointer = 23; //NO
    // print out num
    cout << *npointer << endl; 

    // arrays and pointers
    int arr[4];
    int* arrptr = &arr[0];  //assigning the arrptr the address of the 0th location in the array
    cout <<"arrptr is " << arrptr  << endl;
    cout <<"arr is " << arr  << endl; 

    // assign into the array using the pointer
    *arrptr = 80;  // arr[0]
    // you can do math with pointers
    arrptr++; // arrptr += 1  now going to point to address arr[1]  
    *arrptr = 90;
    ++arrptr;  //&arr[2]
    *arrptr = 100;  
    ++arrptr;  //&arr[3]
    *arrptr = 110; 

    *arrptr-- = 3000;
    cout << *arrptr << endl; 

    for (int cnt = 0; cnt < 4; cnt++) 
    {
        cout << arr[cnt] << " ";
    }
    cout << endl; 

    arrptr--;
    cout << *arrptr << endl;



    cout << "Hello World!"; 
    return 0;
}