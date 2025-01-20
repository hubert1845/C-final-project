# Variables ... variables
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Liste des fichiers source et des objets ... list of all of the sources files
SRCS = main.cpp TransportMode.cpp Car.cpp Train.cpp Plane.cpp Walking.cpp Bicycle.cpp Bus.cpp TravelComparator.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = travel_comparator

# Règle par défaut... default mode
all: $(TARGET)

# Créer l'exécutable... creation of the exe
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Règles de compilation pour chaque fichier source... compilation for each source files
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

TransportMode.o: TransportMode.cpp
	$(CXX) $(CXXFLAGS) -c TransportMode.cpp

Car.o: Car.cpp
	$(CXX) $(CXXFLAGS) -c Car.cpp

Train.o: Train.cpp
	$(CXX) $(CXXFLAGS) -c Train.cpp

Plane.o: Plane.cpp
	$(CXX) $(CXXFLAGS) -c Plane.cpp

Walking.o: Walking.cpp
	$(CXX) $(CXXFLAGS) -c Walking.cpp

Bicycle.o: Bicycle.cpp
	$(CXX) $(CXXFLAGS) -c Bicycle.cpp

Bus.o: Bus.cpp
	$(CXX) $(CXXFLAGS) -c Bus.cpp

TravelComparator.o: TravelComparator.cpp
	$(CXX) $(CXXFLAGS) -c TravelComparator.cpp

# Nettoyer les fichiers objets et l'exécutable.. clean every objects and the exe
clean:
	rm -f $(OBJS) $(TARGET)
