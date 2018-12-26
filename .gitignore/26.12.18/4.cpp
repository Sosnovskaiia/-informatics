/*Напишите программу находящую первые n составных чисел.*/

#include <iostream>
using namespace std;
int main ()
{
    
    int k, n, l = 0;
    cout << "n = ";
    cin >> n; 
    cout << "Composite: ";
    for (k = 4; l < n; k++) 
    {
        for (int i = 2; i < k; i++)
        {
            if ((k % i) == 0)
            {
                cout << k << ' ';
                l++;
                break;
            }
        }
    }
    return 0;
}
