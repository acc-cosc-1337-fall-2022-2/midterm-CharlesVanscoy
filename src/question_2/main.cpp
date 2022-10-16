#include "question2.h"

int main()
{
    double celcius;
    double far;
    bool exit;
    char choice;
    do {
    cout << "\nPlease enter the Celcius tempurature you would like converted to Fahrenheit\n";
    cin >> celcius;
    far = get_fahrenheit(celcius);
    cout << far;
    cout << "\nWould you like to convert another tempurature (y/n)\n";
    cin >> choice;
    if (choice == 'n') {
        exit = true;
    }
    } while (exit !=true);
    return 0;
}