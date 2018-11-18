#include <iostream>

using namespace std;

int main()
{

    double * ptrArray = new double[4];
    for(int i = 0;i<4;i++)
    {
         ptrArray[i]=(1+i)*0.1;
         cout << i <<", Element is equal =" << ptrArray[i] << endl;
    }
    ptrArray +=1;
   cout.put('\n');
    cout << "End now " << 3 <<", Element is equal =" << ptrArray[2] << endl;

    ptrArray-=1;
    delete [] ptrArray;
   cout.put('\n');   cout.put('\n');
/// Reinterpreting //////////////

    short * ptrShortArray = new short[4];
    double * ptrDoubleArray = new double[4];

    cout << "Adres of double array =  " << ptrDoubleArray << endl;
    cout << "Adres of short array =  " << ptrShortArray << endl;

   cout.put('\n');

        for(int i = 0;i<4;i++)
    {
         ptrShortArray[i]=1-i;
         ptrDoubleArray[i]=0.2*i;
         cout << i <<", Element of Short is equal =" << ptrShortArray[i] << endl;
         cout << i <<", Element of Double is equal =" << ptrDoubleArray[i] << endl;
    }
    cout.put('\n');

    ptrDoubleArray -=sizeof(short); ///I moved double array to start of array short and change it to short
    ptrShortArray = reinterpret_cast<short*>(ptrDoubleArray);



            for(int i = 0;i<4;i++)
    {
    cout << " Element of Short =" << ptrShortArray[i]<< endl;
    }



    cout << "Adres of double array =  " << ptrDoubleArray << endl;
        ptrDoubleArray +=sizeof(short); ///Revert
    cout << "After revert =  " << ptrDoubleArray << endl;
    cout << "Adres of short array =  " << ptrShortArray << endl;


   cout << "Short " << sizeof(short) <<",double =" << sizeof(double) << endl;


   delete [] ptrDoubleArray;
   delete [] ptrShortArray;
////////////////////
///Two wats to get the adress of array
double randromNumbers[4] = {0.1,0.3,-1.2,5};
short alsoRandromNumbers[3] = {1,6,3};

    double * ptrRandNum = randromNumbers;
    short * ptrAlsoRandNum = &alsoRandromNumbers[0];

cout << randromNumbers << endl;
cout << &randromNumbers << endl;

    return 0;
}
