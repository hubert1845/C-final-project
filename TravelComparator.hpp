#ifndef TRAVELCOMPARATOR_HPP
#define TRAVELCOMPARATOR_HPP

#include "TransportMode.hpp"
#include <vector>
#include <memory>

class TravelComparator {
public:
    void compareModes(const std::vector<std::unique_ptr<TransportMode>>& modes, double distance) const;
    static TransportMode* selectMode(const std::vector<std::unique_ptr<TransportMode>>& modes);
};

#endif