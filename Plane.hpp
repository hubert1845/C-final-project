#ifndef PLANE_HPP
#define PLANE_HPP

#include "TransportMode.hpp"

class Plane : public TransportMode {
private:
    bool businessClass;
    static constexpr double BASE_COST_PER_KM = 0.20;
    static constexpr double BUSINESS_CLASS_MULTIPLIER = 2.5;

public:
    Plane() : TransportMode("Avion (PLANE)"), businessClass(false) {}

    void getUserPreferences() override;
    double calculateCost(double distance) const override;
    double calculateDuration(double distance) const override;
    double calculateEmissions(double distance) const override;
};

#endif 