#include <iostream>

using namespace std;




int main()
{
  int switch_training=10; //Declaration and definition of int type object with memory allocation
  int definitionDeclarationDiffrence; /////Declaration only (If you find object called definitionDeclarationDiffrence in program bellow its mean object type is integer )
////////////////////////////////Switch//////////////////////////
switch(switch_training)
{
case 0:
    cout<< "Its zero? \n";
case 10:
    cout<< "or Ten? \n";
default:
    cout<< "Where is break instruction, this will display too !\n";
case 20:
    cout<< "use break! \n";
    break;
case 30:
    cout<< "Ok good job, this message will not appear:/) \n";
}
////////////////////////////////////////////////////////////////
    cout << "Finaly : Hello world!" << endl;


    return 0;
}
