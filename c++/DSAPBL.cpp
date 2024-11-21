#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;
struct Route {
    string destination; 
    int travelTime;     
    int distance;       
    bool isBlocked;    
    int substituteTime; 
};

// Class to represent a city with hospitals
class City {
public:
    string locations[8];    
    vector<Route> roads[8];            
    int numLocations;                  

    City(); 
    void addLocation(string location); 
    void addRoute(string location1, string location2, int travelTime, int distance, bool isBlocked = false, int substituteTime = -1); // Add a route
    void displayRoutes(string startLocation); // Show routes from a hospital
};


City::City() {
    numLocations = 0; 
}

void City::addLocation(string location) {
    if (numLocations < 8) {
        locations[numLocations++] = location; 
    }
}
void City::addRoute(string location1, string location2, int travelTime, int distance, bool isBlocked, int substituteTime) {
    int index1 = -1, index2 = -1;

    
    for (int i = 0; i < numLocations; i++) {
        if (locations[i] == location1) index1 = i;
        if (locations[i] == location2) index2 = i;
    }

    if (index1 != -1 && index2 != -1) {
        roads[index1].push_back({ location2, travelTime, distance, isBlocked, substituteTime });
        roads[index2].push_back({ location1, travelTime, distance, isBlocked, substituteTime }); // Bidirectional
    }
}


void City::displayRoutes(string startLocation) {
    int startIndex = -1;

    // Find the starting index
    for (int i = 0; i < numLocations; i++) {
        if (locations[i] == startLocation) {
            startIndex = i;
            break;
        }
    }

    // Output header
    cout << "\n=================================================\n";
    cout << "  Routes Available from " << startLocation << "\n";
    cout << "=================================================\n";
    cout << "  Direct travel to " << startLocation << ": 0 minutes\n\n";

    int routeCount = 1;


    for (int i = 0; i < numLocations; i++) {
        if (i != startIndex) {
            int shortestTime = INT_MAX;
            int quickestDistance = INT_MAX;
            int shortestRouteIndex = -1;
            bool hasAvailableRoute = false;

        
            for (int j = 0; j < roads[startIndex].size(); ++j) {
                const auto& route = roads[startIndex][j];
                if (locations[i] == route.destination && !route.isBlocked) {
                    if (route.travelTime < shortestTime || 
                        (route.travelTime == shortestTime && route.distance < quickestDistance)) {
                        shortestTime = route.travelTime;
                        quickestDistance = route.distance;
                        shortestRouteIndex = j;
                        hasAvailableRoute = true;
                    }
                }
            }

            cout << routeCount << " - To " << locations[i] << ":\n";

            if (!hasAvailableRoute) {
                // If no direct route is available, provide estimated default values
                int defaultDistance = 150; // Default distance in km
                int defaultTime = 120;     // Default time in minutes
                cout << "     Estimated Route: " << defaultDistance << " km, " << defaultTime << " minutes (DEFAULT)\n";
            } else {
                bool allRoutesBlocked = true;

                // Display each route, marking only the single shortest available route with "(SHORTEST)"
                for (int j = 0; j < roads[startIndex].size(); ++j) {
                    const auto& route = roads[startIndex][j];
                    if (locations[i] == route.destination) {
                        if (route.isBlocked) {
                            cout << "     Route: " << route.distance << " km, " << route.travelTime << " minutes (BLOCKED)";
                            if (route.substituteTime != -1) {
                                cout << " [Substitute: " << route.substituteTime << " minutes]";
                            }
                        } else {
                            cout << "     Route: " << route.distance << " km, " << route.travelTime << " minutes (AVAILABLE)";
                            if (j == shortestRouteIndex) {
                                cout << " (SHORTEST & QUICKEST)";
                            }
                            allRoutesBlocked = false;
                        }
                        cout << "\n"; // New line after each route
                    }
                }

                // If all routes are blocked, print a summary statement
                if (allRoutesBlocked) {
                    cout << "     All routes to " << locations[i] << " are currently blocked.\n";
                }
            }
            cout << "-------------------------------------------------\n"; // Separator line between destinations
            routeCount++;
        }
    }

    // Prompt user to choose a route
    int selectedRoute = 0;
    cout << "Choose a route by entering the route number: ";
    cin >> selectedRoute;

    
    if (selectedRoute > 0 && selectedRoute <= routeCount - 1) {
        int locationIndex = selectedRoute - 1;
        if (roads[startIndex][locationIndex].isBlocked) {
            cout << "\nSelected route is currently blocked.\n";
        } else {
            const Route& chosenRoute = roads[startIndex][locationIndex];
            cout << "\nYou selected the route to " << locations[locationIndex]
                 << ", which will take approximately " << chosenRoute.travelTime
                 << " minutes and covers a distance of " << chosenRoute.distance << " km.\n";
        }
    } else {
        cout << "Invalid selection. Please try again.\n";
    }
}

// Main function
int main() {
   cout<<"23CS060"<<endl;
    City city; // Create city object

    // Add hospitals
    city.addLocation("Isra Hospital, Hyderabad");
    city.addLocation("NIMRA Cancer Hospital, Jamshoro");
    city.addLocation("Jinnah Hospital, Karachi");
    city.addLocation("Aga Khan Hospital, Karachi");
    city.addLocation("Civil Hospital, Karachi");
    city.addLocation("LUMHS, Jamshoro");
    city.addLocation("Dow Hospital, Karachi");
    city.addLocation("Al Khidmat Hospital, Karachi");

    // Add routes between hospitals with realistic travel times and distances
    city.addRoute("Isra Hospital, Hyderabad", "NIMRA Cancer Hospital, Jamshoro", 20, 25);
    city.addRoute("Isra Hospital, Hyderabad", "Jinnah Hospital, Karachi", 130, 165, true, 150); // Blocked
    city.addRoute("Isra Hospital, Hyderabad", "Aga Khan Hospital, Karachi", 140, 170);
    city.addRoute("Isra Hospital, Hyderabad", "LUMHS, Jamshoro", 25, 30);
    city.addRoute("NIMRA Cancer Hospital, Jamshoro", "Jinnah Hospital, Karachi", 120, 150);
    city.addRoute("NIMRA Cancer Hospital, Jamshoro", "Civil Hospital, Karachi", 115, 145, true, 140); // Blocked
    city.addRoute("Aga Khan Hospital, Karachi", "Civil Hospital, Karachi", 15, 20);
    city.addRoute("Dow Hospital, Karachi", "Al Khidmat Hospital, Karachi", 10, 12);

    // Display routes from each hospital and let the user choose a route
    city.displayRoutes("Isra Hospital, Hyderabad");
    city.displayRoutes("NIMRA Cancer Hospital, Jamshoro");
    city.displayRoutes("Jinnah Hospital, Karachi");
    city.displayRoutes("Aga Khan Hospital, Karachi");
    city.displayRoutes("Civil Hospital, Karachi");
    city.displayRoutes("LUMHS, Jamshoro");
    city.displayRoutes("Dow Hospital, Karachi");
    city.displayRoutes("Al Khidmat Hospital, Karachi");

    return 0;
}
