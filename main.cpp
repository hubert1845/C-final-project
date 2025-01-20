#include <iostream>
#include <vector>
#include <memory>
#include <limits>
#include "TransportMode.hpp"
#include "Car.hpp"
#include "Train.hpp"
#include "Plane.hpp"
#include "Walking.hpp"
#include "Bicycle.hpp"
#include "Bus.hpp"
#include "TravelComparator.hpp"

int main() {
    try {
        std::cout << "Bienvenue dans le comparateur de moyens de transport !... welcome in the comparator of means of transport !\n";
        
        double distance;
        do {
            std::cout << "Entrez la distance du voyage (en kilomètres)... enter the distance (KM) :  ";
            std::cin >> distance;
            
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Veuillez entrer un nombre valide... enter a valide number please.\n";
                distance = -1;
            }
        } while (distance <= 0);

        // Création des différents moyens de transport... creation of all of the different means of transport
        std::vector<std::unique_ptr<TransportMode>> modes;
        modes.push_back(std::make_unique<Car>());
        modes.push_back(std::make_unique<Train>());
        modes.push_back(std::make_unique<Plane>());
        modes.push_back(std::make_unique<Walking>());
        modes.push_back(std::make_unique<Bicycle>());
        modes.push_back(std::make_unique<Bus>());

        // Afficher la comparaison initiale ... print the initial comparison
        TravelComparator comparator;
        comparator.compareModes(modes, distance);

        // Sélection du mode de transport ... selection of the mean of transport
        TransportMode* selectedMode = TravelComparator::selectMode(modes);
        
        // Obtenir les préférences spécifiques au mode de transport... features of each means of transport
        selectedMode->getUserPreferences();
        
        // Afficher les détails du voyage sélectionné ... features of the selected mode
        std::cout << "\nDétails de votre voyage :\n";
        selectedMode->displayInfo(distance);

    } catch (const std::exception& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
