#include <iostream>
using namespace std;

int main(){
    // A string is a sequence of characters enclosed in double-quote marks.
    string characterName = "Ilham"; 
    string characterAcademy = "X University";
    // An integer is a numeric literal(associated with numbers) without any fractional or exponential part.
    int characterAge = 25;
    int characterHeight = 172;
    // A floating-point literal is a numeric literal that has either a fractional form or an exponent form.
    float characterWeight = 79.5;
    // A character literal is created by enclosing a single character inside single quotation marks. ('A' , 'B' , '1' , 'o', etc.)
    // In C++, we can create variables whose value cannot be changed using const in front of the data type.
    const char characterBloodType = 'A';
    cout << "My name is " << characterName << ',' << " study at " << characterAcademy << endl; // endl is a manipulator or in simple terms a command. So when endl is encountered, the operating system will flush the output buffer and insert a new line. 
    cout << "I am " << characterAge << " years old.\n"; // \n is called Escape Sequences. Sometimes, it is necessary to use characters that cannot be typed or has special meaning in C++ programming. i'll give you the list in the end of this program. 
    cout << "I am " << characterHeight << " cm and " << characterHeight << " kg" << endl;
    cout << "My bloodtype is " << characterBloodType << endl;
    return 0;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Escape Sequence for C++
/*
\b	Backspace
\f	Form feed
\n	Newline
\r	Return
\t	Horizontal tab
\v	Vertical tab
\\	Backslash
\'	Single quotation mark
\"	Double quotation mark
\?	Question mark
\0	Null Character
*/
