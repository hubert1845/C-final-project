#ifndef BICYCLE_HPP
#define BICYCLE_HPP

#include "TransportMode.hpp"

class Bicycle : public TransportMode {
public:
    Bicycle() : TransportMode("À vélo (BY BIKE)") {}

    double calculateCost(double distance) const override;
    double calculateDuration(double distance) const override;
    double calculateEmissions(double distance) const override;

    double calculateCaloriesBurned(double distance) const;
};

#endif
