#include <iostream>
#include <string>
#include <cstring>
/// Few interesing with examples from book
using namespace std;

int main()
{
    int arrayOfInt[4];
    ///arrayOfInt[4] = {1,2,3,4}; Not allowed
    ///arrayOfInt = {1,2,3,4};Not allowed
    float arrayOfFloat[5] = {1.5,8.22}; /// Only 2 first elements and all others are 0
    long arrayFullOfZerros[100] = {0}; /// All elements 0-99 equals 0 same as we put {} instead of {0} if we put {1} instead of {0} we will get array {1, 0, 0, 0 .... 0, 0}
    short annyShortArray[] = {1,2,3,4};
    cout << sizeof annyShortArray/ sizeof (short) << endl;

    ///long plifs[] = {25, 92, 3.0}; // not allowed |error: narrowing conversion of '3.0e+0' from 'double' to 'long int' inside { } [-Wnarrowing]|
    ///char slifs[4] {'h', 'i', 1122011, '\0'}; // not allowed (narrowing)
    ///char tlifs[4] {'h', 'i', 112, '\0'}; // allowed (narrowing)
 ///https://www.codeproject.com/Questions/485203/Whereplusisplustheplusdifferenceplusofplusunsigned  ///about Characters
char dog[8] = { 'b', 'e', 'a', 'u', 'x', ' ', 'I', 'I'}; /// not a string! last element isnt null
char cat[8] = {'f', 'a', 't', 'e', 's', 's', 'a', '\0'}; /// a string! Last character is null
char bird[11] = "Mr. Cheeps"; /// the \0 is understood remmeber to always summ all elemnts and last null!

const unsigned int sizeArray =20;
char commonProblem[sizeArray];
char withWorkingOnCharArray[sizeArray];
char commonProblem2[sizeArray];
char withWorkingOnCharArray2[sizeArray];
char charTest;
/////////////////////////////////////////////////////////////
cout << "if we put space in this string" << endl;
cin >> commonProblem ;
cout << "It will give us a small problem with second one" << endl;
cin >> withWorkingOnCharArray;

cout << "So at end we can have : " << commonProblem << " and " << withWorkingOnCharArray << endl;
cout << "So better is to take getline(variable, size) character to get correct name with white space" << endl;
cin.get(); ///(failbit) if we dont put it here our enter for ending commonProblem char[] will be used as end of third empty string same will work with get()
cin.getline(commonProblem2,sizeArray);
cout << " and we can see another string " << endl;

cin.getline(withWorkingOnCharArray2,sizeArray);
cout << " So we have : " << commonProblem2 << " and " << withWorkingOnCharArray2 << endl;



/////////////////////////////////////

char arrayOfChar[22];
char secondArrayOfChar[22] = "Valid";
char thridArrayOfChar[22] = " and some more";
string firstString = "Valid";
string secondString;
secondString = firstString; ///Ok
/// secondArrayOfChar = arrayOfChar; Invalid!
strcpy(arrayOfChar, secondArrayOfChar);/// copy
cout << secondArrayOfChar << endl;
strcat(secondArrayOfChar, thridArrayOfChar); ///append
cout << secondArrayOfChar << " with size " << strlen(secondArrayOfChar) << endl; /// At string we can also use firstString.size()
    return 0;
}
