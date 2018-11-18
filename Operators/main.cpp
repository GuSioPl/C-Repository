#include <iostream>

using namespace std;

int main()
{
    int a=2,b=2,c=2,d=2,f=3;
/////////////////////////Modulo //////////////////////////////////////////////
    cout << "3 % 2  * 2 = " << f%b*b << "\n2 * 3  % 2  =" << b*f%b << endl<< endl;
///////////////////////////Incrementation decrementation pre/postfix/////////////////
for(int i=0;i<2;i++)
{

    cout << "a++ = " << a++ << "\t++b = " << ++b <<endl;
    cout << "c-- = " << c-- << "\t--d = " << --d <<endl;
    cout << "a = " << a << "\tb = " << b << "\tc = " << c << "\td = " << d << endl<< endl;
}
////////Ture False/////////////////////////////////
 cout << "a = b ? = " << (a==b) << "\ta = c ? " << (a==c) <<endl;
////what if we take = instead of = in if
 if(a=b)
 {
     cout << "It works, because compilator see only attribution its same \nas the attributing value and a != zero so its true" << endl;
 }
 if((a=b))
 {
     cout << "And it isn't work" << endl;
 }
 ////////////////////////&&///////////////////////////////////////
     cout << "a euqals to : " << a << "\tb euqals to : " << b << endl;
   if((a==b)&&(a++))
 {
     cout << "a and b was the same and we increment it a + 1 = " << a << endl;
 }
    if((a==b)&&(a++))
 {
     cout << "Now a and b aren't the same" << a << endl;
 }else
 {
      cout << "Now a = " << a << " =/= b = " << b << endl;
 }
    return 0;
}
