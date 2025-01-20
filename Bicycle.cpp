#include "Bicycle.hpp"

double Bicycle::calculateCost(double distance) const {
    return 0.0;  // Le vélo est gratuit ... traveling by ike is free
}

double Bicycle::calculateDuration(double distance) const {
    return distance / 15.0;  // 15 km/h en moyenne ... 15km/h mean
}

double Bicycle::calculateEmissions(double distance) const {
    return 0.0;  // 0g de CO2 par km ... 0g of CO2 per Km
}

double Bicycle::calculateCaloriesBurned(double distance) const {
    const double caloriesPerKm = 30.0;  // Calories approximatives brûlées par km en vélo ... calories burned on a trip by bike
    return distance * caloriesPerKm;
}
