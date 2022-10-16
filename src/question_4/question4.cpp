
//
#include "question4.h"
bool test_config()
{
    return true;
}

string get_fib_sequence(int input){
    string sequence;
    int i = 0;
    int n1 = 0;
    int n2 = 1;
    int n3;
    string conv;
    while (i < input){
        n3 = n1 + n2;
        conv = n3;
        n1 = n2;
        n2 = n3;
        sequence.append(conv);
        i++;
    }
    cout << sequence;
    return 0;
}

// 0 1 1 2 3 5 8 13 21 34 55