#ifndef TRANSPORTMODE_HPP
#define TRANSPORTMODE_HPP

#include <string>

class TransportMode {
protected:
    std::string name;

public:
    TransportMode(const std::string& name) : name(name) {}
    virtual ~TransportMode() {}

    virtual void getUserPreferences() {}
    virtual double calculateCost(double distance) const = 0;
    virtual double calculateDuration(double distance) const = 0;
    virtual double calculateEmissions(double distance) const = 0;
    virtual void displayInfo(double distance) const;
    
    std::string getName() const { return name; }
};

#endif