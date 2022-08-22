// created by Fransiskus Agapa on 8/22/22

#ifndef BASICCLASS3_COUNTRIES_H
#define BASICCLASS3_COUNTRIES_H

#include "string"
using std::string;

class Countries
{
private:
    string _name;
    string _continent;
    int _review;
public:
    void SetName(const string& name);
    void SetContinent(const string& continent);
    void SetReview(const int& review);
    void print();

};


#endif //BASICCLASS3_COUNTRIES_H
