#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include <math.h>

void activationFunction(double data[][],int numberOfElements);
void signalForward(double data[][])

const int ENTERS =4;
const int HIDENLAYER = 2;
const double N = 0.01;
int main()
{
 //////////////////////////Training Paterns //////////////////////////////////////////////////////
    int arrayTrainingPaterns[ENTERS*ENTERS] = { 1, 0, 0, 0,
                                                0, 1, 0, 0,
                                                0, 0, 1, 0,
                                                0, 0, 0, 1};

    int * ptrTrainingPaterns = new int[16]; ///4x4
////////////////////////////////////Weights /////////////////////////////////////////////////////////
    double wagesLayerOne[ENTERS*HIDENLAYER];
    double wagesLayerTwo[HIDENLAYER*ENTERS];

    for (int i=0;i<ENTERS*HIDENLAYER;i++)
    {

                    wagesLayerOne[i] =(rand()%100001)/100000.0;
                    wagesLayerTwo[i] = (rand()%100001)/100000.0;
                    ///cout << wagesLayerOne[i][j] << ", ";



    }

////////////////////////////////////////////////////////
   double neuronExits[ENTERS];
   double neuronHiddenLayer[HIDENLAYER];
   double errorSignal[HIDENLAYER*ENTERS];
   double neuronSums[ENTERS*HIDENLAYER];












    return 0;
}




void activationFunction(double data[],int numberOfElements, bool ifDerivative)
{
    for (int i=0;i<numberOfElements;i++)
    {
      data[i] =  1 + exp(-1 * data[i]);
      data[i] = 1 /data[i];
    }
    if(ifDerivative)
    {
            for (int i=0;i<numberOfElements;i++)
            {
            data[i] = data[i]*(1-data[i]);
            }
    }
};
