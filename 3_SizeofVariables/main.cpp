#include<iostream>
using namespace std;
 
int main()
{
    // The INTEGER data type stores whole numbers that range from -2,147,483,647 to 2,147,483,647 for 9 or 10 digits of precision. The number 2,147,483,648 is a reserved value and cannot be used.
    cout << "Size of int : " << sizeof(int) << " byte" << endl;
    // The FLOAT data type stores double-precision floating-point numbers with up to 17 significant digits. FLOAT corresponds to IEEE 4-byte floating-point, and to the double data type in C.
    cout << "Size of float : " << sizeof(float) << " bytes" << endl;
    cout << "Size of double : " << sizeof(double) << " bytes" << endl;
    cout << "Size of char : " << sizeof(char) << " byte" << endl;
    cout << "Size of string : " << sizeof(string) << " bytes" << endl;

    // Using Data Modifier
    cout << "Size of signed int : " << sizeof(signed int) << " byte" << endl;
    cout << "Size of unsigned int : " << sizeof(unsigned int) << " byte" << endl;
    cout << "Size of short int : " << sizeof(short int) << " byte" << endl;
    cout << "Size of long int : " << sizeof(long int) << " byte" << endl;
   
   /* Table Size of Variables
   Data Type	            Size (in bytes)	    Range
   short int	                  2	            -32,768 to 32,767
   unsigned short int	          2	            0 to 65,535
   unsigned int	                  4	            0 to 4,294,967,295
   int	                          4	            -2,147,483,648 to 2,147,483,647
   long int                       4	            -2,147,483,648 to 2,147,483,647
   unsigned long int	          4	            0 to 4,294,967,295
   long long int                  8	            -(2^63) to (2^63)-1
   unsigned long long int         8	            0 to 18,446,744,073,709,551,615
   signed char	                  1	            -128 to 127
   unsigned char                  1	            0 to 255
   float                          4	 
   double                         8	 
   long double	                  12	 
   */
    return 0;
}
