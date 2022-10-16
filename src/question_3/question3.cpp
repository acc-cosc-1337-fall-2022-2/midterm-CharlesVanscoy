#include "question3.h"

bool test_config()
{
    return true;
}

vector<double> get_cookie_ingredients(int cookies) {
    vector<double> ingredients;
    double sugr;
    double butr;
    double flwr;
    sugr = (cookies / 32.0);
    butr = (cookies / 48.0);
    flwr = (cookies * (11.0/192.0));
    ingredients.push_back(sugr);
    ingredients.push_back(butr);
    ingredients.push_back(flwr);
    return ingredients;
}