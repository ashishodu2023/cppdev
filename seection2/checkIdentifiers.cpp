#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

    int double = 3.14; // Invalid since double is keyword.
    int _i;            // Valid.
    int catch - 22;    // Invalid due to hypen in between.
    int 1_or_2 = 1;    // Invalid due to two underscores.

    double Double = 3.14; // Valid. Since Double is not keyword.

    int ival = 1.01; // Valid

    int &rval2 = ival; // Valid. Reference and already defined or intialized.

    int &rval1 = 1.01; // Invalid, value must be initialized.

    int &rval3; // Invalid. Must be intialized.

    int i = 0, &r1= i;
    double d = 0, &r2 = d;

    r2 = 3.14159; 
    r2 = r1; 
    i = r2;
    r1=d;
    

    return 0;
}