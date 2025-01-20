#include "Bus.hpp"
#include <iostream>

void Bus::getUserPreferences() {
    char choice;
    std::cout << "Le car prendra-t-il l'autoroute ? ... Should the car take the highway ? (o/n) : ";
    std::cin >> choice;
    useHighway = (choice == 'o' || choice == 'O');
}

double Bus::calculateCost(double distance) const {
    double baseCost = distance * BASE_COST_PER_KM;
    return useHighway ? baseCost + (distance * HIGHWAY_COST_INCREASE) : baseCost;
}

double Bus::calculateDuration(double distance) const {
    double speed = useHighway ? HIGHWAY_SPEED : BASE_SPEED;
    return distance / speed;
}

double Bus::calculateEmissions(double distance) const {
    double baseEmissions = 0.12;  // kg CO2 par km ... Kg of CO2 per km
    return distance * (useHighway ? baseEmissions * 1.1 : baseEmissions);
}