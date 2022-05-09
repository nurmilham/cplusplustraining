// Int to string Data Conversion
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int dataNum = 90;
    stringstream dataString; // stringstream object
    // assign the value from dataNum to dataString
    dataString<<dataNum;
    // convert the value using .str() function and store into strNum variable
    string strNum = dataString.str();
    cout << "Data: " + strNum; // if the addition word of "Data" is add into int data type it would be error
    // Conversion Done
    return 0;
}
