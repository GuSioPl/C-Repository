#include <iostream>

using namespace std;

int main()
{
   int integerValue =7;
   int *ptrIntegerValue =&integerValue;

   ///Cout 2 ways value
        cout << "Integer value is equal = " << integerValue << endl;
        cout << "Integer value is equal = " << *ptrIntegerValue << endl;


   ///Cout 2 ways adress of value
        cout << "Integer value ADRESS is equal = " << &integerValue << endl;
        cout << "Integer value ADRESS is equal = " << ptrIntegerValue << endl;




    return 0;
}
