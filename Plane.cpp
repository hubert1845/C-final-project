#include "Plane.hpp"
#include <iostream>

void Plane::getUserPreferences() {
    char choice;
    std::cout << "Voulez-vous voyager en classe affaires ? ... do you want to travel in business class (o/n) : ";
    std::cin >> choice;
    businessClass = (choice == 'o' || choice == 'O');
}

double Plane::calculateCost(double distance) const {
    double baseCost = distance * BASE_COST_PER_KM;
    return businessClass ? baseCost * BUSINESS_CLASS_MULTIPLIER : baseCost;
}

double Plane::calculateDuration(double distance) const {
    // Ajout de 2 heures pour les procédures aéroportuaires... add 2 hours for the procedure at the airport
    return (distance / 800.0) + 2.0;
}

double Plane::calculateEmissions(double distance) const {
    return distance * 0.25;
}