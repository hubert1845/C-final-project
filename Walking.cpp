#include "Walking.hpp"

double Walking::calculateCost(double distance) const {
    return 0.0;
}

double Walking::calculateDuration(double distance) const {
    return distance / 5.0;  // 5 km/h en moyenne ... 5km/h mean of speed
}

double Walking::calculateEmissions(double distance) const {
    return 0.0;  // 0g de CO2 par km ... 0g of CO2 per Km
}

double Walking::calculateCaloriesBurned(double distance) const {
    const double caloriesPerKm = 50.0;  // Calories approximatives brûlées par km ... burned calories each KM
    return distance * caloriesPerKm;
}
