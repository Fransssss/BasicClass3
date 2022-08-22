#include <iostream>
#include "Countries.h"
#include "ValidReviewRange.h"
#include "Capitalize.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    Countries country;
    string nameCountry;
    string nameContinent;
    int reviewLiveableCity;
    cout << endl << "Input name of a country: ";
    cin >> nameCountry;
    Capitalize(nameCountry);
    cout << endl;
    cout << "Input name of the continent: ";
    cin >> nameContinent;
    Capitalize(nameContinent);
    cout << endl;
    cout << "Review as liveable city (1 to 10): ";
    cin >> reviewLiveableCity;
    ValidReview(reviewLiveableCity);                 // validate range
    if(reviewLiveableCity > 10)

    cout << endl;
    cout << "==================================" << endl;
    country.SetName(nameCountry);
    country.SetContinent(nameContinent);
    country.SetReview(reviewLiveableCity);
    country.print();

    return 0;
}
