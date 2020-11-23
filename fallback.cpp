#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int counter;
    double numberOfInteg, stepInteg = 0.000001, integral, start = 0, end = 2; //об'явлення змінних               
    numberOfInteg = (end - start) / stepInteg;    // Вираховуємо кількість ітерацій
    integral = stepInteg * ((start + 2) / (-2 * pow(start, 2) + 3 * start + 6) + (end + 2) / (-2 * pow(end, 2) + 3 * end + 6)) / 2; // Вираховуємо першу частину формули 
    for (counter = 1; counter <= numberOfInteg - 1; counter++)
    {
        integral = integral + stepInteg * ((start + stepInteg * counter) + 2) / (-2 * pow((start + stepInteg * counter), 2) + 3 * (start + stepInteg * counter) + 6); // Вираховуємо другу частину формули 
    }
    cout << "your square = " << integral << endl; // виводимо
    return 0;
}