#include "FlightTripDatabase.h"
void FlightTripDb ::removeTrip(string id) {
    list<FlightTrip>::iterator iter;
    for(iter=trip.begin(); iter!=trip.end(); ++iter) {
        if(iter->getFlightNumber()== id) {
            trip.erase(iter);
            break;
        }
    }
}

FlightTrip* FlightTripDb ::findTripById(string id) {
    list<FlightTrip>::iterator iter;
    for(iter=trip.begin(); iter!=trip.end(); ++iter) {
        if(iter->getFlightNumber()== id) {
            return &(*iter);
        }
    }
    return NULL;
}
int FlightTripDb ::countAll() {
    return trip.size();
}
double FlightTripDb ::computeMaxFare() {
    list<FlightTrip>::iterator iter;
    auto maxIter = iter;
    for(iter=trip.begin(); iter!=trip.end(); ++iter) {
        if(iter->computeFare()>maxIter->computeFare() ) {
            maxIter=iter;
        }

    }
    return maxIter->computeFare();
}
void FlightTripDb::addTrip(string source,string dest,string number,string op,int dis) {
    trip.push_back(FlightTrip(source,dest,number,op,dis));
}


double FlightTripDb ::computeMinTravelTime() {
    list<FlightTrip>::iterator iter;
    auto minIter = iter;
    for(iter=trip.begin(); iter!=trip.end(); ++iter) {
        if(iter->computeTravelTime()<minIter->computeTravelTime() ) {
            minIter=iter;
        }

    }
    return minIter->computeTravelTime();
}


int FlightTripDb ::countTripsByOperator(string op) {
    int c=0;
    list<FlightTrip>::iterator iter;
    for(iter=trip.begin(); iter!=trip.end(); ++iter) {
        if(iter->getOperator()==op) {
            c++;
        }

    }
    return c;
}
