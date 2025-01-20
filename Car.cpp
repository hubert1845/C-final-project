#include "Car.hpp"
#include <iostream>

void Car::getUserPreferences() {
    char choice;
    std::cout << "Voulez-vous prendre l'autoroute ? ... take the highway ? (o/n) : ";
    std::cin >> choice;
    useHighway = (choice == 'o' || choice == 'O');
}

double Car::calculateCost(double distance) const {
    double baseCost = distance * BASE_COST_PER_KM;
    return useHighway ? baseCost + (distance * HIGHWAY_TOLL_PER_KM) : baseCost;
}

double Car::calculateDuration(double distance) const {
    double speed = useHighway ? HIGHWAY_SPEED : BASE_SPEED;
    return distance / speed;
}

double Car::calculateEmissions(double distance) const {
    double baseEmissions = 0.2;  // kg CO2 par km .. CO2 KG per Km
    return distance * (useHighway ? baseEmissions * 1.2 : baseEmissions);
}
