/*Напишите переборную программу программу, вычисляющую значение функции Эйлера для числа n. Программа должна работать не 
более чем за O(n* log n) шагов.*/


#include <iostream>
#include <string>
using namespace std;
  int huh (int n)
  {
    int result = n;
    for (int i=2; i*i<=n; ++i)
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
result -= result / i;
}
if (n > 1)
result -= result / n;
return result;
}

  int main() {
    int n;
    cin >> n;
    cout<<huh( n);
    return 0;
}
