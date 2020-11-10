all: 
	g++ trip-test.cpp trip.cc flighttrip.cc -o s1.out -lgtest -lgtest_main -lpthread
	g++ tripdb-test.cpp FlightTripDatabase.cc trip.cc flighttrip.cc -o s2.out -lgtest -lgtest_main -lpthread

run:
	.\/s1.out
	.\/s2.out


