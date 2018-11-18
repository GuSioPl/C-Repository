#include <iostream>

using namespace std;

int main()
{
///9
{
double x1,x2;
x1 = 10; x2=11;

}
int swichVariable = 0;
cout << "Can you give me a number of Exercise ? :";
cin >> swichVariable;
cout.put('\n');

switch(swichVariable)
{


case 1:
{
int height;
const double inchToFeet = 0.0833333333;

cout << "Hi can you give me your's height in inches? :" << endl << '\_';
cin >> height ;
cout << " Yours size is " << height*inchToFeet << " feet";

}break;
///////////////////////////////////////////////////////////////////////////////////////////////////////////
case 2:
{
int inches, feet;
int weightInPounds;

cout << "Hi can you give me your height first feet then inches :" << endl << '\_';
cin >> feet ;
cout << "Now please give me inches " << endl << '\_';
cin >> inches;
cout << "Hi can you give me your weight in pounds :" << endl << '\_';
cin >> weightInPounds;

double heightInMeters = (inches + feet*12)*0.0254;
double weightInKg = weightInPounds/2.2;

cout << "So yours BMI is" << weightInKg/(heightInMeters*heightInMeters)  << endl;
}break;
///////////////////////////////////////////////////////////////////////////////////////////////////////////
case 3:
{
int degrees;
int minutes;
int seconds;
cout << "Enter a latitude in degrees, minutes, and seconds: ";
cout << "First, enter the degrees: ";
cin >> degrees;
cout << "Next, enter the minutes of arc: ";
cin >> minutes;
cout << "Finally, enter the seconds of arc: ";
cin >> seconds;
cout.put('\n');
cout << degrees << " degrees, " << minutes <<" minutes, " << seconds << " seconds = " << ((double)degrees + (double)minutes/60 + (double)seconds/3600) << " degrees " << endl;
cout << degrees << " degrees, " << minutes <<" minutes, " << seconds << " seconds = " << degrees + minutes/60.0 + seconds/3600.0 << " degrees " << endl;
/// without conversion compiler will turn everything into int so we lose data about seconds and minutes
///cout << degrees << " degrees, " << minutes <<" minutes, " << seconds << " seconds = " << degrees + minutes/60 + seconds/3600 << " degrees " << endl;
}break;
///////////////////////////////////////////////////////////////////////////////////////////////////////////
case 5:
{
long long seconds;
cout << "Enter the number of seconds: ";
cin >> seconds;
cout << seconds << " seconds =" << seconds/(3600*24) << " Days, " << seconds%(3600*24)/3600 << " hours, "; /// Its complicated but I wanted it this way
cout << seconds%(3600)/60 << " minuts, " << seconds%(60) << " seconds" << endl;
}break;
///////////////////////////////////////////////////////////////////////////////////////////////////////////
case 6:
{
double distanceOfTravel;
double burnedPetrol;
cout << "Hi could you give me distance of travel: ";
cin >> distanceOfTravel;
cout << "Hi could you give burned petrol: ";
cin >> burnedPetrol;
cout << " So you burned " << (distanceOfTravel/burnedPetrol)/100 << "Per 100 km/mils" << endl;
}break;
///////////////////////////////////////////////////////////////////////////////////////////////////////////
case 7:
{
double consuptionPer100Km;
cout << "Hi please give me consumption of gasoline in liters per 100km: ";
cin >> consuptionPer100Km;
cout << " so " << consuptionPer100Km << "l/100km equals " << 1/(consuptionPer100Km/(62.14*3.875)) << " mpg" << endl;
}break;

///without default :P
}







    return 0;
}
