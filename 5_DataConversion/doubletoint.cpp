// Double to int Data Conversion
#include <iostream>
using namespace std;

int main(){
    double numDouble = 21.319;
    int numInt;
    // data conversion
    numInt = numDouble;
    // print the result
    cout << "numDouble data: " << numDouble  <<endl;
    cout << "size of numDouble: " << sizeof(numDouble) << " bytes" << endl;
    cout << "numInt data: " << numInt << endl;
    cout << "size of numInt: " << sizeof(numInt) << " bytes"<< endl;
}
