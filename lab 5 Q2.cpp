/**
*@ Siti Munizaiyanah binti Bahaman
*@ Matric No: 2116492
*@ Lab #5 Section 4
*/

#include <iostream>
#include <iomanip>
using namespace std;
double calculateCharges(double);
int main()
{
	double first, second, third;
 
  cout << "Enter hours for three customers: ";
  cin >> first >> second >> third;
  cout << "Car\tHours\tCharge\n";
  cout << "1\t" << fixed << setprecision( 1 ) << first
       << setprecision( 2 ) << "\t" << calculateCharges( first ) << endl;
  cout << "2\t" << fixed << setprecision( 1 ) << second
       << setprecision( 2 ) << "\t" << calculateCharges( second ) << endl;
  cout << "3\t" << fixed << setprecision( 1 ) << third
       << setprecision( 2 ) << "\t" << calculateCharges( third ) << endl;   
  cout << "TOTAL\t" << fixed << setprecision( 1 ) << first + second + third
       << fixed << setprecision( 2 ) << "\t" 
        << calculateCharges( first ) + calculateCharges( second ) + calculateCharges( third ) << endl;
 
   //for pause
   system("PAUSE");
   return 0;
}
double calculateCharges( double hours )
{
  if( hours <= 3 )
    return 2.00;
  else
    {
        if ( hours < 24 )
          return 2.00 + ( hours - 3 ) * 0.5;
        else
          return 10.00;
      }
}
	
	
