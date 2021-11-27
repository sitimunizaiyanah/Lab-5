#include <iostream>
using namespace std;

//begin task
int reverseDigit(int val)
{
int res = 0;
while (val != 0)
{
//move digits result to left
res *= 10;
//get last digit value
res += val % 10;
//next digit value
val = val / 10;
}
return res;
}
//end task
int main()
{
cout << reverseDigit(12345) << "\n";
cout << reverseDigit(5600) << "\n";
cout << reverseDigit(7008) << "\n";
cout << reverseDigit(-532) << "\n";

return 0;
}
