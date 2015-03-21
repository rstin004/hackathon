#include "matching_service.hh"

Profile::Profile(string f, string l, int pts, string em, char d, string t, int nc, string cl){
    fname=f;
    lname=l;
    points=pts;
    email=em;
    day_avail=d;
    time_avail=t;
    numClass =nc;
    classes =cl;
}
