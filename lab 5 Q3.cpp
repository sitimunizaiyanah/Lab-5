#include <iostream>
using namespace std;

void displayPattern (int n)
{
    for(int i = 1; i <= n ; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

int main ()
{
	int n = 5 ;
    displayPattern (n);
    return 0;
		
}
  
