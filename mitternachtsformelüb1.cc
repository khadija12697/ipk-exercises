#include <iostream> 
#include <cmath>



int main (int argc, char** argv) {

// Variabeln deklarieren

double a;
double b;
double c;
double x1;
double x2;

// nun soll unser Programm nach den Koeffizienten der Formel abfragen 

std::cout << "Was sind ihre Koeffizienten?"<< std::endl;      
std::cout << "a = "<< std::flush;
std::cin >> a; 

std::cout << "b = "<<std::flush;
std::cin >> b;

std::cout <<"c = "<<std::flush;
std::cin >> c;

// Keine Lösung vorhanden

if ( a==0 && b==0)
   
{
	
std::cout << " Es gibt keine eindeutige Lösung"<< std::endl;

}


else {
   
      if ( (pow(b,2) - 4*a*c) == 0 ) {        // Wurzel ist gleich 0

        x1 = (-b)/ 2*a;
        std::cout << " Es gibt nur eine Lösung: "<< x1 << std::endl;
      } 

     else if ( a== 0 && b!= 0) 
     {               // a ist null un b ungleich null
     
       x1= (-c)/b;	
       std::cout << " Es gibt nur eine Lösung: "<< x1 << std::endl;
	 }
 
     else if ( (pow(b,2) - 4*a*c) > 0)          // Wurzel ist größer null 
     {
	
	  x1= (( -b) + std::sqrt (pow(b,2) - 4*a*c)) / 2*a;
      x2 = (( -b) - std::sqrt (pow(b,2) - 4*a*c)) / 2*a;
      std::cout << " Die beiden nullstellen sind:"<< x1 << " und "<< x2 << std::endl;
     
     }
     
   }

return 0;         //zeige,dass mein Programmm keine Fehler hat




}
