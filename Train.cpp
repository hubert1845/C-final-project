#include "Train.hpp"
#include <iostream>

void Train::getUserPreferences() {
    char choice;
    std::cout << "Voulez-vous voyager en première classe ? ... do you want to travel in first class ? (o/n) : ";
    std::cin >> choice;
    firstClass = (choice == 'o' || choice == 'O');
}

double Train::calculateCost(double distance) const {
    double baseCost = distance * BASE_COST_PER_KM;
    return firstClass ? baseCost * FIRST_CLASS_MULTIPLIER : baseCost;
}

double Train::calculateDuration(double distance) const {
    return distance / 100.0;  // Vitesse moyenne de 100 km/h .. speed mean is around 100km/h
}

double Train::calculateEmissions(double distance) const {
    return distance * 0.05;  // kg CO2 par km ... Kg of CO2 by km
}