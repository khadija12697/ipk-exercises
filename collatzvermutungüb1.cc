#include <iostream>

void collatz( int number) 
{
while ( number != 1 && number != 0 && number != -1 && number != -5 && number != -17 )
 { 
	if ( number % 2 == 0 )   // Zahl ist gerade
	{ 
		number = number / 2;
		std::cout << number << std::endl;
    }
         else                    // Zahl ist ungerade
         { 
			 number = 3 * number +1;
			 std::cout << number << std::endl;
         }
 }

}

int main (int argc, char** argv) 
 {
	
int number;

// Zahl einlesen

std::cout << "Gib eine Zahl ein : "<< std::endl;
std::cin >> number;
collatz ( number );   //collatzfunktion aufgerufen


 }
 
