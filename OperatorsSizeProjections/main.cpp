#include <iostream>
#include <climits> /// with limits

using namespace std;




int main()
{
    //////////////////////////////////////////////////////////////////////FIRST PART////////////////////////////////////////////////////////////////////////
    int integerVariable=INT_MAX;
    double doubleVariable=-50.111;
    float floatVariable=40.3;
    char charVariable =CHAR_MAX;
    long int longIntVariable= LONG_MAX;
    long longVariable= LONG_LONG_MIN;
    long long longLongVariable = LLONG_MAX;
    short int shortIntVariable =SHRT_MAX;
    short shortVariable =SHRT_MIN;
    string stringVariable ="Hi";
    volatile int volatileIntVariable;

    cout << "Size of Integer   : " << integerVariable  << " in byte: " << sizeof(integerVariable) << " = " << sizeof(int) << " = " << sizeof(0xffffffff) << endl;
    cout << "Size of Double    : " << doubleVariable   << " in byte: " << sizeof(doubleVariable) << " = " << sizeof(double) << endl;
    cout << "Size of Float     : " << floatVariable    << " in byte: " << sizeof(floatVariable) << " = " << sizeof(float) << endl;
    cout << "Size of Char      : " << charVariable     << " in byte: " << sizeof(charVariable) << " = " << sizeof(char) << endl;
    cout << "Size of Long int  : " << longIntVariable  << " in byte: " << sizeof(longIntVariable) << " = " << sizeof(long) << endl;
    cout << "Size of Long:     : " << longVariable     << " in byte: " << sizeof(longVariable) << " = " << sizeof(long int) << endl;
    cout << "Size of Long Long : " << longLongVariable << " in byte: " << sizeof(longVariable) << " = " << sizeof(long int) << endl;
    cout << "Size of Short int : " << shortIntVariable << " in byte: " << sizeof(shortIntVariable) << " = " << sizeof(short int) << endl;
    cout << "Size of Short     : " << shortVariable    << " in byte: " << sizeof(shortVariable) << " = " << sizeof(short) << endl;
    cout << "Size of String    : " << stringVariable   << " in byte: " << sizeof(stringVariable) << " = " << sizeof(string) << endl;
 //////////////////////////////////////////////////////////////////////END FIRST PART////////////////////////////////////////////////////////////////////////

  //////////////////////////////////////////////////////////////////////SECOND PART////////////////////////////////////////////////////////////////////////
/// error dis cast is for pointers    integerVariable = reinterpret_cast<int>(doubleVariable);
/// dynamic cast is when casting is logical for compilator
    integerVariable = static_cast<int>(doubleVariable);
///error    integerVariable = static_cast<int>(volatileIntVariable)

cout.put(('\n'));

const int six=6;
const int *ptrSix = &six;
int *ptrNormal;

ptrNormal = const_cast<int*>(ptrSix);
cout << *ptrSix << " In adress :" << ptrSix << ". And " << *ptrNormal << " In adress :" << ptrNormal << endl;

cout.put(('\n'));

int sixtyFive = 65;
int *ptrSixtyFive = &sixtyFive;
char charA = 'A';
char *ptrCharA = &charA;

ptrCharA = reinterpret_cast<char *>(ptrSixtyFive);
cout << *ptrSixtyFive << " In adress :" << ptrSixtyFive << ". And " << *ptrCharA << " In adress :" << ptrCharA << endl; ///Reinterpreter cast dont check if casting is invalid


    return 0;
}
