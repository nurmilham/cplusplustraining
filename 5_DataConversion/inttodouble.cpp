// Int to Double Data Conversion
#include <iostream>
using namespace std;

int main(){
    // declare variable from integer data type
    int numInt = 22; 
    // declare a double type variable to set the result
    double numDouble;
    // data conversion
    numDouble = numInt;
    // print the result
    cout << "numInt data: " << numInt << endl;
    cout << "size of numInt: " << sizeof(numInt) << " bytes"<< endl;
    cout << "numDouble data: " << numDouble  <<endl;
    cout << "size of numDouble: " << sizeof(numDouble) << " bytes" << endl;
    // The result from data conversion is the same but the size of each variable is different (the data already converted)
    return 0;
}
