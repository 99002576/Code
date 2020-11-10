#include <iostream>
using namespace std;
#include "flighttrip.h"
#include <list>
#include <iterator>

class FlightTripDb {
    list<FlightTrip> trip;
  public:
    void addTrip(string,string,string,string,int);
    void removeTrip(string);
    FlightTrip* findTripById(string);
    int countAll();
    double computeMaxFare();
    double computeMinTravelTime();
    int countTripsByOperator(string);
};
