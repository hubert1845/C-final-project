#ifndef BUS_HPP
#define BUS_HPP

#include "TransportMode.hpp"

class Bus : public TransportMode {
private:
    bool useHighway;
    static constexpr double BASE_COST_PER_KM = 0.08;
    static constexpr double HIGHWAY_COST_INCREASE = 0.03;
    static constexpr double BASE_SPEED = 50.0;
    static constexpr double HIGHWAY_SPEED = 90.0;

public:
    Bus() : TransportMode("En car (BUS)"), useHighway(false) {}

    void getUserPreferences() override;
    double calculateCost(double distance) const override;
    double calculateDuration(double distance) const override;
    double calculateEmissions(double distance) const override;
};

#endif