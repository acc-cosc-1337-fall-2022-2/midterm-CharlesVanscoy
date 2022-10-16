#include "question3.h"

int main()
{
    int in;
    char choice;
    bool quit;
    vector<double> ings;
    do {
        cout << "How many cookies would you like to bake?\n";
        cin >> in;
        ings = get_cookie_ingredients(in);
        cout << "Cups of sugar: " << ings[0];
        cout << "\nCups of butter: " << ings[1];
        cout << "\nCups of flour: " << ings[2];
        cout << "\n\nWould you like to start again (y/n)";
        cin >> choice;
        if (choice == 'n') {
            quit = true;
        }
    } while (quit != true);
    return 0;
}