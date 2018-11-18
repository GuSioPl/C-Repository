#include <iostream>
#include <cstring>

using namespace std;

struct airplaneTicket
{
    int price;
    int place;
    char classOfTicket[20];


};
///Optimalizing size of unkown char[]

char * getNameFunction()
{
    char temporaryCharracterArray[80];
    cout << "Please give me a name :" << endl;
    cin >> temporaryCharracterArray;
    cout << strlen(temporaryCharracterArray) << endl;
    char * nameFromArray = new char[strlen(temporaryCharracterArray)+1];
    string Mar = "mariusz";
    char * mariuszChar = new char[8];
    strcpy(nameFromArray,temporaryCharracterArray);
    cout << Mar << " - " << mariuszChar << endl;

  return nameFromArray;
};


int main()
{
    char *name;/*
    airplaneTicket* ticket = new airplaneTicket;
    cout << "Can you give me which class do you have please ?" << endl;
    cin.get(ticket->classOfTicket,20);
    cout << "And now can you give me a sit number ?" << endl;
    cin >> (*ticket).place;
    cout << "And last one a price of ticket ?" << endl;
    cin >> ticket->price;
    cout << "So we have a ticket which costs = " << (*ticket).price <<endl;
    cout << "Whit seat number = " << (*ticket).place << " and class = " << ticket->classOfTicket <<endl;
*/
    cout << "Ok thats realy last one give me only your first name" << endl;
    name = getNameFunction();
    cout << "And yours name is " << *name ;


    //delete ticket;
    return 0;
}
