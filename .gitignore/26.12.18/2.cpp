/*Напишите эффективную программу, находящую все числа длины n являющиеся палиндромами.*/
#include "pch.h"
#include <iostream>
using namespace std;

int rev(int number) // функция для палидромов
{
    int n = 0;
    while (number)
    {
        n = 10 * n + number % 10;
        number /= 10;
    }
    
    return n;
}


int main()

{
    int m = 1, n, l = 0, first = 0, last = 0, product = 1;
    cout << "Amount ";
    cin>> n;
    cout<< endl;
    
    for (int number = 1; l < n; number++) { 
        int l = 0;
        m = number;
        while (m > 0) {
            m = m / 10;
            if (m != 0) {
                l++;
            }
        }
        l++;
        if (l == n) {
            first = number;
            cout<< endl<< "first number " << first << " ";
            break;
        }
    }
    
    
    for (int number = first; l < n; number++) {
        int l = 0;
        m = number;
        while (m > 0) {
            m = m / 10;
            if (m != 0) {
                l++;
            }
        }
        l++;
        if (l > n) {
            last = number - 1;
            cout << endl<< "last number " << last << endl;
            break;
        }
    }
