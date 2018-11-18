#include <iostream>

using namespace std;
/// TYPE PUNNING - working in raw memmory chunks of program

struct myFirstStruct
{
    int myFirstStructInt;
    int myFirstStructSecondInt;
    char myFirstStructChar;
    bool myFirstStructBool;
    ///https://www.geeksforgeeks.org/reinterpret_cast-in-c-type-casting-operators/
    ///https://www.youtube.com/watch?v=pWZS1MtxI-A
    ///https://www.youtube.com/watch?v=8egZ_5GA9Bc
    int* getPostion()
    {
        return &myFirstStructInt;
    }
    ///quotation "Only one thing with Type Punning in C++ is to: "Don't do did" " :D
};

int main()
{
/// //////////////////////////////////////////////////////////////////////////////////// *int -> *double /////////////////////////////////////////////
int seven =7;
int *ptrSeven = &seven;
double eightPointTwo = 8.2;
double *ptrEightPointTwo;

double doubleValue = *(double*)&seven;
/// 1. &seven taking memmory adress form seven
/// 2. cast int* to double* with (double*)
/// 3. go back to double with * (earlier without * it was double pointer so now we have double)

cout  << " First fail:" << doubleValue << ". Its because we taking more memmory, \nwhich is just randrom memmory chunk laying next to memmory where we have our variable. "  << endl<< endl;

ptrEightPointTwo = reinterpret_cast<double *>(ptrSeven);
cout  << " So its fail casting :"<< *ptrSeven<< " at memmory : " << ptrSeven << " to second double pointer " << ptrEightPointTwo <<
 ". Give us fail:" << *ptrEightPointTwo << endl; ///Reinterpreter cast dont check if casting is invalid

cout.put(('\n'));


/// //////////////////////////////////////////////////////////////////////////////////// *double -> *int  /////////////////////////////////////////////
double twoPointEight(2.8);
double *ptrTwoPointEight = &twoPointEight;
int five(5);
int *ptrFive = &five;


ptrFive = reinterpret_cast<int*>(ptrTwoPointEight);
cout << "So same fail its fail casting :"<< *ptrTwoPointEight << " at memmory : " << ptrTwoPointEight << ". This time to : " << *ptrFive << " In adress :" << ptrFive << endl;

cout.put(('\n'));


/// ///////////////////////////////////////////////////////////////////////// Casting structur////////////////////////////////////////////////////////
myFirstStruct structurOne = { 1 , 2 , 'A' , false };


int* integerIntegerValue = (int*)&structurOne;
cout << " So we can now read some data knowing where in memmory we have begin of our structure: " << *integerIntegerValue << " at adress : " << integerIntegerValue << endl;

int* secondIntegerValue = structurOne.getPostion();
cout << " And same we will have : with " << *secondIntegerValue << " at adress : " << secondIntegerValue << endl << endl;

/// int secondIntegerValue = structurOne.myFirstStructSecondInt;
int thirdIntegerValue = *(int*)((char*)&structurOne+4); /// char for formalization ||x||


cout << "End now we can access for next value in our structure but with other way : " << thirdIntegerValue << " at adress : " << &thirdIntegerValue << endl;

/// ///////////////////////////////////////////////////////////// Each variable cast //////////////////////////////////////////////////////////
int* a = reinterpret_cast<int*>(&structurOne.myFirstStructInt);
cout << "First memmory : " << a << " = " << &structurOne.myFirstStructInt << endl;
cout << *a << " = " << structurOne.myFirstStructInt  << " || " << *(a+1) << " = " << structurOne.myFirstStructSecondInt << " || " << *(char*)((a+1)+ sizeof(char)) << " = " << structurOne.myFirstStructChar
<< " || " << *(bool*)((char*)((a+1)+ sizeof(char)) + sizeof(bool)) << " = " << structurOne.myFirstStructBool << endl;

/// second way
cout.put('\n');
cout << "Second Way :";
cout.put('\n');

int* b = reinterpret_cast<int*>(&structurOne.myFirstStructInt);
cout << "First memmory : " << *b << " at " << &structurOne.myFirstStructInt <<  "\n" << *(b+1) << " = " << structurOne.myFirstStructSecondInt << " || ";

char* c = reinterpret_cast<char*>(b+2); ///We poiting at third element of structure like in int array but only 2 firsts elements are integer so we need change it to char*

cout << *c  << " = " << structurOne.myFirstStructChar << " || ";

bool* d = reinterpret_cast<bool*>(c+1);
cout << *d  << " = " << structurOne.myFirstStructBool;


cout.put(('\n'));
    return 0;
}
