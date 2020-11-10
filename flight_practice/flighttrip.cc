#include "flighttrip.h"

FlightTrip::FlightTrip(const string& dest,const string& origin,const string& num,const string& op,int dis):Trip(dest,origin,num,op,dis),fnumber(num),OperatorD(op),distbcity(dis) {


}
FlightTrip::FlightTrip():Trip(),fnumber(""),OperatorD(""),distbcity(0) {


}

int FlightTrip::computeFare() {
    return 10*distbcity;

}

int FlightTrip::computeTravelTime() {
    return distbcity/(500/60.0);

}


