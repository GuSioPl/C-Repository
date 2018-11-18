#include <iostream>

using namespace std;

struct car
{
    string carType;
    string carBrand;
    int mileage;


} myCar, adamCar;

struct
{
    int unknowInt;
    string unknowName;
} namelessStruc;

union myFirstUnion
{
    int intValue;
    long longValue;
    double doubleValue;
};

struct newStructure
{
    int newStructureInt;
    double newStructureDouble;

    union unionInsideStructure
    {
        int unionIntegerIns;
        long unionLongIns;
    } unionIn;
};


int main()
{
    myCar = { "Megan", "Reno", 150000};
    cout << "I have "  << myCar.carBrand << " " << myCar.carType << " with mileage of: " << myCar.mileage << endl;

    car myFatherCar = {"XaraPicasso", "Citroen", 100000 };

    namelessStruc = {40, "???"};

    car carArray[2]
    {
       {"firstCarType", "firstCarBrand", 100000},
       {"secondCarType", "secondCarBrand", 100000}
    };
    cout << "So Second car brand is " << carArray[1].carType << endl;

    myFirstUnion threeNumbers;

    threeNumbers.doubleValue = 1.5;
    threeNumbers.intValue = 20000000;
    cout << " Lets check intValue " << threeNumbers.intValue << endl;
    threeNumbers.longValue = 12;

    cout << "At my first union I have 3 values double = " << threeNumbers.doubleValue;
    cout << ", integer = " << threeNumbers.intValue << ", and long = " << threeNumbers.longValue << endl;
    /// Union holds the bigest number


    newStructure strucutreWithUnion;
    /// If we will not call union inside strucuture to access to union data we need structureName.dataWhichWeWantAccess
    strucutreWithUnion = {100, 10.50,};
    strucutreWithUnion.unionIn.unionIntegerIns = 1000;

    return 0;
}
