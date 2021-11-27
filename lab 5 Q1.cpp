/**
*@ Siti Munizaiyanah binti Bahaman
*@ Matric No: 2116492
*@ Lab #5 Section 4
*/

#include <iostream> 
int multiple( int a, int b );
using namespace std ; 
int main() 
 { 
 	int x,y,z; 
 	cout << "Enter two integers: "; 
 	cin >> x >> y; 
 	 
 	if(z==0) 
 	{ 
 		cout << y <<" is a multiple of "<< x; 
 	} 
 	else 
 	{ 
 		cout << y << "is not a multiple of" << x;
 	} 
 } 
 
int multiple( int x, int y, int z )
{
	z = y % x;
	
	return 0;
	
}
