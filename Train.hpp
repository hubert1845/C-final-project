#ifndef TRAIN_HPP
#define TRAIN_HPP

#include "TransportMode.hpp"

class Train : public TransportMode {
private:
    bool firstClass;
    static constexpr double BASE_COST_PER_KM = 0.10;
    static constexpr double FIRST_CLASS_MULTIPLIER = 1.8;

public:
    Train() : TransportMode("Train (TRAIN)"), firstClass(false) {}

    void getUserPreferences() override;
    double calculateCost(double distance) const override;
    double calculateDuration(double distance) const override;
    double calculateEmissions(double distance) const override;
};

#endif