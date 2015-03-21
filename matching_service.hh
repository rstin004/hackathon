#ifndef MATCHING_SERVICE_HH_INCLUDED
#define MATCHING_SERVICE_HH_INCLUDED

/*
 *
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class profile
{
public:
//private:
    string fname,lname;
    int points;
    string email;
    char day_avail;
    string time_avail;
    int numclass;
    string classes;
};

#endif // MATCHING_SERVICE_HH_INCLUDED
