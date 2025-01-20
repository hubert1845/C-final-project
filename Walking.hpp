#ifndef WALKING_HPP
#define WALKING_HPP

#include "TransportMode.hpp"

class Walking : public TransportMode {
public:
    Walking() : TransportMode("À pied (BY FOOT)") {}

    double calculateCost(double distance) const override;
    double calculateDuration(double distance) const override;
    double calculateEmissions(double distance) const override;

    // Nouvelle méthode pour calculer les calories brûlées... Methode to calcul burned calories 
    double calculateCaloriesBurned(double distance) const;
};

#endif
