#include "TravelComparator.hpp"
#include <iostream>

void TravelComparator::compareModes(const std::vector<std::unique_ptr<TransportMode>>& modes, double distance) const {
    for (const auto& mode : modes) {
        mode->displayInfo(distance);
    }
}

TransportMode* TravelComparator::selectMode(const std::vector<std::unique_ptr<TransportMode>>& modes) {
    std::cout << "\nMoyens de transport disponibles ... modes of transport avalaible :\n";
    for (size_t i = 0; i < modes.size(); ++i) {
        std::cout << i + 1 << ". " << modes[i]->getName() << "\n";
    }

    size_t choice;
    do {
        std::cout << "Choisissez votre moyen de transport... Choose your transport mode (1-" << modes.size() << ") : ";
        std::cin >> choice;
    } while (choice < 1 || choice > modes.size());

    return modes[choice - 1].get();
}
