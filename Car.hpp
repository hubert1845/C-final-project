#ifndef CAR_HPP
#define CAR_HPP

#include "TransportMode.hpp"

class Car : public TransportMode {
private:
    bool useHighway;
    static constexpr double BASE_COST_PER_KM = 0.15;
    static constexpr double HIGHWAY_TOLL_PER_KM = 0.10;
    static constexpr double BASE_SPEED = 70.0;
    static constexpr double HIGHWAY_SPEED = 110.0;

public:
    Car() : TransportMode("Voiture (CAR)"), useHighway(false) {}

    void getUserPreferences() override;
    double calculateCost(double distance) const override;
    double calculateDuration(double distance) const override;
    double calculateEmissions(double distance) const override;
};

#endif