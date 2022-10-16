
#include "question4.h"
int main()
{
    bool exit;
    char choice;
    int in = 0;
    do{
        do {
            cout << "\nEnter an integer n from 1 to 15 to display n Fibonacci iterations\n";
            cin >> in;
            if (in < 1 || in > 15) {
                cout << "\nINVALID INPUT TRY AGAIN\n";
            }
        } while (in < 1 || in > 15);
        string sequence;
        sequence = get_fib_sequence(in);
        cout << sequence << "\n";
        cout << "\nDo you want to go again? (y/n)\n";
        cin >> choice;
        if (choice == 'n')
            exit = true;
    } while (exit !=true);
    return 0;
}