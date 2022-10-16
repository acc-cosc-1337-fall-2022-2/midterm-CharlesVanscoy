#include "question1.h"

int main()
{
    string in1;
    string in2;
    string ex1 = "GAGCCTACTAACGGGAT";
    string ex2 = "CATCGTAATGACGGCCT";
    cout << "Enter two dna strings of equal length, the program will return the difference as a percentage\nEx:\nGAGCCTACTAACGGGAT\nCATCGTAATGACGGCCT\n";
    cout << get_dna_p_distance(ex1, ex2);
    cout << "\n\nEnter dna #1\n";
    cin >> in1;
    cout << "Enter dna #2\n";
    cin >> in2;
    cout << get_dna_p_distance(in1, in2);
    return 0;
}