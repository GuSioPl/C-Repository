#include <iostream>

using namespace std;

int main()
{//68
    int testVariable=0;

    cout << "Outside of Block Variable is equal: "<< testVariable << endl;
    {///Block contains local Variable
        int testVariable=10;
        cout << "Inside of Block Variable is equal " << testVariable << endl;
    }//End of Block
    cout << "And again outside of Block Variable is equal: "<< testVariable << endl;
    float a=156e-1;
    if(5)
    {
        cout <<a <<"\a" << endl;
    }
    return 0;
}
