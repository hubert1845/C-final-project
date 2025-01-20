#include "TransportMode.hpp"
#include "Walking.hpp"
#include "Bicycle.hpp"
#include <iostream>
#include <iomanip>

void TransportMode::displayInfo(double distance) const {
    std::cout << "\nMoyen de transport ... mean of transport : " << name << "\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Coût estimé ... cost estimated : " << calculateCost(distance) << " €\n";
    std::cout << "Durée estimée ... duration estimated : " << calculateDuration(distance) << " heures... hours\n";
    std::cout << "Émissions estimées ... emissions of CO2 estimated : " << calculateEmissions(distance) << " kg CO2\n";

    // Vérifie si le mode de transport est Walking pour afficher les calories brûlées ... check if the mode of transport selected is walking to print burned calories
    const Walking* walking = dynamic_cast<const Walking*>(this);
    if (walking) {
        std::cout << "Calories brûlées... Burned calories : " << walking->calculateCaloriesBurned(distance) << " kcal\n";
    }

    // Vérifie si le mode de transport est Bicycle pour afficher les calories brûlées ... check if the mode of transport selected is Bycycle to print the burned calories
    const Bicycle* bicycle = dynamic_cast<const Bicycle*>(this);
    if (bicycle) {
        std::cout << "Calories brûlées... Burned calories : " << bicycle->calculateCaloriesBurned(distance) << " kcal\n";
    }

    std::cout << "-----------------------------------\n";
}
