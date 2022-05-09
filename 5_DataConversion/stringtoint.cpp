// String to int Data Conversion
#include <iostream>
#include <string>

using namespace std;

int main(){
    string dataNum = "313";
    int dataInt;
    // using stoi function. so you need to add #include <string> 
    dataInt = stoi(dataNum); // more detail about another numeron data type in the list below
    cout << dataInt;
    return 0;
}

/*
    atoi : array to int (sometimes it's used with char data type) and add #include <stdlib> 
    stoi : string to int
    stod : string to double
    stof : string to float
    stold: string to long double
*/
