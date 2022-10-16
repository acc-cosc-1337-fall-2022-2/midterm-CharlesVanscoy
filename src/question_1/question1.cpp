#include "question1.h"

bool test_config()
{
    return true;
}

double get_dna_p_distance(const string& dna1, const string& dna2){
    int i = 0;
    double dif;
    double p_distance;

    while(i < dna1.length()) {
        if (dna1[i] != dna2[i]){
            dif ++;
        }
        i++;
    }

    p_distance = dif / dna1.length();
    return (round(p_distance * 10000) / 10000);

}