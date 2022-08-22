// created by Fransiskus Agapa on 8/22/22

#include "Countries.h"
#include <iostream>

using std::cout;
using std::endl;

void Countries::SetName(const string &name)
{
    _name = name;
}

void Countries::SetContinent(const string &continent)
{
    _continent = continent;
}

void Countries::SetReview(const int &review)
{
    _review = review;
}

void Countries::print()
{
    cout << endl << "[ The country is " << _name << " and the continent is " << _continent << "\nThe review as liveable city is " << _review << " out of 10 ]" << endl;
 }