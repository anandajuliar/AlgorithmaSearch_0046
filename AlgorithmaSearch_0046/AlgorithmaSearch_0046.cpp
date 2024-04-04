#include <iostream>
using namespace std;

int arr[20];    
int n;          
int i;          

void input()
{
    while (true)
    {
     cout << "Enter the number of elements in the aray: ";
     cin >> n;
     if ((n > 0) && (n <= 20))
         break;
     else
         cout << "\nArray shoud have minimum 1 and maximum 20 elements.\n\n";
    }

    //accept array elements
