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

class Profile
{
public:
    ///contructors
    Profile(string f=" ", string l=" ", int pts=0, string em=" ", char d='M', string t=" ", int nc=1, string cl=" ");
    ///print
//private:
    string fname,lname;
    int points;
    string email;
    char day_avail;
    string time_avail;
    int numClass;
    string classes;
};



///make a match

///create a schedule

///create a history entry

///give out points

///create a leaderboard

#endif // MATCHING_SERVICE_HH_INCLUDED
