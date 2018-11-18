#include <iostream>

using namespace std;

int main()
{

const int code = 66;
int x = 66;
char c1 {66};
char c2  = code;
/// char c3 {31325}; error: narrowing conversion of '31325' from 'int' to 'char' inside { } [-Wnarrowing]|
char c4 = {x};
x = 31325;
char c5 = x;
float f1 = 2.555;
int y {f1};
    cout << c5  << " = " << (int)c5 << endl;

short chickens = 20;
short ducks = 35;
short fowl =chickens + ducks; /// Even when 2 short or long are added compiler first transfer
/// those variables to int and then sum it. At the end converting result to short back again
/// if operation is needed to convert 2 types compilator convert smaller to larger for example int = double1 + int2 = double1 + double2 = double3 = int3
/// so if we had sizeof(type1) > sizeof(type2) addition or other calculation type1+type2 convert variable of type2 to type 1

int pig,cow,horse;
horse = 11.99 + 12.99;
cow = (int) 11.99 + (int) 12.99;
pig = int (11.99) + int (12.99);

    cout  << "Number of horses : " << horse << endl;
    cout  << "Number of pigs : "   << pig   << endl;
    cout  << "Number of cows : "   << cow   << endl;

auto autoA = 100; /// int
auto autoB = 1.5; /// double
auto autoC = 1.2E12L; /// long double

 ///2 TYPES OF VARIABLES
 /// Integer bool,char,signed char,unsigned char,short,unsigned short, int,unsigned int, long ,unsigned long, unsigned long long , long long wchar_t
 /// Floating point  float ,double ,long double

 char grade =65;


    return 0;
}
