// Created by Fransiskus Agapa on 8/22/2022.


#ifndef BASICCLASS3_CAPITALIZE_H
#define BASICCLASS3_CAPITALIZE_H

#include "string"
#include "cctype"

using std::string;
using std::islower;
using std::toupper;

string Capitalize(string& userInput)
{
    if(islower(userInput[0]))                  // if first char is lower case
    {
        userInput[0] = toupper(userInput[0]);
    }
    return userInput;
}

#endif //BASICCLASS3_CAPITALIZE_H
