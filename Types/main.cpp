#include <iostream>

using namespace std;

int main()
{
/////////////////////Typedef//////////////////////////
typedef int price, * pointInt, naturalNumber;
price integerVariable;// int
pointInt integerPointer; //int *pointer
///Typedef is like give second name for that type typedef <type> <name>
/// So we can use that name instead writing over and over that type
/////////////////////Enum//////////////////////////
    enum whatToDo { start       = 0,
                    firstStep   = 1,
                    someActions = 4,
                    finish      = 30 };
    whatToDo action=firstStep;
    whatToDo actionEnd=finish;
        cout << "First enum What to do: " << action << " and at the end: " << actionEnd << endl<< endl;

///New enum elements need to be diffrent

    enum whatToDoSecond { startSecond,//0
                          firstStepSecond =4,
                          secondStepSecond = firstStepSecond,   ///Multiple actions have same numbers its allowed!
                          someActionsSecond,         ///5
                          finishSecond =someActionsSecond + 5        };

    whatToDoSecond actionSecond= startSecond;
    whatToDoSecond actionSecondEnd= finishSecond;

            cout << "Second enum What to do: " << actionSecond
                 << " Same numbers for firstStepSecond= " << firstStepSecond
                 << " and secondStepSecond= " << secondStepSecond
                 << "\nAt the end: " << actionSecondEnd << endl<< endl;

///Enum is arythmetical type we can use it in some calculations and we can simplify it to make it without name but in this case we cannot make a object from it //77
///Sizeof enum is depends on compilator but if we put bigger number we can change the size of it
    enum { zero, one, two, three, four};
    int a = one + two;
    cout << "One + two = "<< a << "\nFour = " << four << endl;

/////////////////////////////////////////////////// Enum spectrum ///////////////////////////////////////////////
    enum spectrumTraining {red,blue,orange,green,yellow};

    spectrumTraining colorOfSpectrum; //Enumerator

    colorOfSpectrum = blue;
//  colorOfSpectrum = 2; Invalid!
cout << "blue in spectrumTraing equals = " << colorOfSpectrum << endl;
    colorOfSpectrum = (spectrumTraining)(blue + orange); //Whitout conversion it will not work (colorOfSpectrum = blue + orange;)
cout << "And blue + orange in spectrumTraing equals = " << colorOfSpectrum << endl;
    colorOfSpectrum = spectrumTraining(1000);
cout << "And lest try some inappropriate value in spectrumTraing = " << colorOfSpectrum << endl;

///////////////////////////////////////////////////

    return 0;
}
