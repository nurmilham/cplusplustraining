#include <iostream>
using namespace std;

int main(){
    char rowSeat; // declare rowSeat variable (character) ex: A, B, C, D, ... Z 
    int colSeat; // declare colSeat variable (number)
    cout << "Enter your cinema seating plan: "; // Enter row and col. Example : C 21
    cin >> rowSeat >> colSeat; // this function will get your row data which is char type and your col data which is int type data.
    // to enter two value in a line you could separate those two data with "space" or enter the first variable end then enter the second one.
    cout << "You are ordering " << rowSeat << "-"<< colSeat << endl; // print out the result from your input
    cout << "Pay for continue\n";  
    return 0;
}
