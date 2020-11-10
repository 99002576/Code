#ifndef FLIGHTTRIP_H_INCLUDED
#define FLIGHTTRIP_H_INCLUDED

#include <iostream>
using namespace std;
#include "trip.h"
class FlightTrip: public Trip {
    string fnumber;
    string OperatorD;
    int distbcity;
  public:
    FlightTrip();
    FlightTrip(const string&,const string&,const string&,const string&,int);
    int computeFare() override;
    int computeTravelTime() override;
};






#endif // SAF_H_INCLUDED
