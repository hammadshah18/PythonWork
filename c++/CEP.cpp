#include <iostream>
#include <vector>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

class Shop {
protected:
    string shopName;
    string ownerName;
    string location;

public:
    Shop(string shopName, string ownerName, string location)
        : shopName(shopName), ownerName(ownerName), location(location) {}

    string getShopName() { return shopName; }
    string getOwnerName() { return ownerName; }
    string getLocation() { return location; }

    void setShopName(string shopName) { this->shopName = shopName; }
    void setOwnerName(string ownerName) { this->ownerName = ownerName; }
    void setLocation(string location) { this->location = location; }
};

class FruitFlavour {
private:
    string flavourName;
    int price;

public:
    FruitFlavour(string flavourName, int price)
        : flavourName(flavourName), price(price) {}

    string getFlavourName() { return flavourName; }
    int getPrice() { return price; }

    void setFlavourName(string flavourName) { this->flavourName = flavourName; }
    void setPrice(int price) { this->price = price; }

    void Fruit() { cout << flavourName << endl; }
    void FruitWithPrice() { cout << flavourName << " : " << price << endl; }
};

class FruitJuiceShop : public Shop {
private:
    vector<FruitFlavour> fruitFlavours;

public:
    FruitJuiceShop(string shopName, string ownerName, string location, vector<FruitFlavour> fruitFlavours)
        : Shop(shopName, ownerName, location), fruitFlavours(fruitFlavours) {}

    vector<FruitFlavour> getFruitFlavours() { return fruitFlavours; }
    void setFruitFlavours(vector<FruitFlavour> fruitFlavours) { this->fruitFlavours = fruitFlavours; }

    void FruitList() {
        for (size_t i = 0; i < fruitFlavours.size(); i++) {
            cout << i + 1 << ". ";
            fruitFlavours[i].Fruit();
        }
        cout << endl;
    }

    void FruitListWithPrice() {
        for (size_t i = 0; i < fruitFlavours.size(); i++) {
            cout << i + 1 << ". ";
            fruitFlavours[i].FruitWithPrice();
        }
        cout << endl;
    }

    int FlavourPrice(string flavour) {
        int price = -1;
        for (size_t i = 0; i < fruitFlavours.size(); i++) {
            if (fruitFlavours[i].getFlavourName() == flavour) {
                price = fruitFlavours[i].getPrice();
                break; // Stop searching once the match is found
            }
        }
        return price;
    }
};

void View() {
    cout << "\tWELCOME TO JUICE SHOP" << endl;
    cout << endl;
    cout << "--------------------------------------" << endl;
    cout << "Press -> 1. Available Fruit Juice List" << endl;
    cout << "Press -> 2. Check Price of Fruit Juices" << endl;
    cout << "Press -> 3. Wanna Purchase Juice" << endl;
    cout << "Press -> 4. No! Not Interested!!!!" << endl;
    cout << "--------------------------------------" << endl;
    cout << endl;
}

int main() {
    system("cls");
    cout<<"23CS010"<<endl;
    vector<FruitFlavour> fruitFlavours = {
        FruitFlavour("Apple", 150), FruitFlavour("Banana", 100), FruitFlavour("Orange", 120),
        FruitFlavour("Pineapple", 180), FruitFlavour("Mango", 200), FruitFlavour("Strawberry", 250),
        FruitFlavour("Lemon", 140), FruitFlavour("Papaya", 170), FruitFlavour("Grapes", 220),
        FruitFlavour("Watermelon", 80)
    };

    FruitJuiceShop shop("OD Fruit Shop", "AITZAZ HASSAN", "JAMSHORO", fruitFlavours);

    while (true) {
        try {
            View();
            int opt;
            cin >> opt;
            cin.ignore(); // To clear leftover characters in input buffer
            switch (opt) {
            case 1:
            system("cls");
                shop.FruitList();
                break;
            case 2:
                system("cls");
                shop.FruitListWithPrice();
                // this_thread::sleep_for(chrono::seconds(1));
                break;
            case 3: {
                system("cls");
                cout << "\tCustomer's details" << endl;
                cout << endl;
                cout << "Name : ";
                string name;
                getline(cin, name);
                cout << "Flavour : ";
                string flavour;
                cin >> flavour;
                int price = shop.FlavourPrice(flavour);
                if (price == -1) {
                    cout << "Sorry, we don't have " << flavour << " flavour." << endl;
                    break;
                }
                cout << flavour << " : " << price << endl;
                cout << "How Much : ";
                int count;
                cin >> count;
                int bill = price * count;
                cout << "Bill : " << bill << endl;
                cout << "Payment : ";
                int amount;
                cin >> amount;
                if (amount == bill) {
                    // this_thread::sleep_for(chrono::seconds(1));
                    cout << endl << "Successfully done!!!" << endl;
                    // this_thread::sleep_for(chrono::seconds(1));
                    cout << "Receipt!!!! (Y/N)" << endl;
                    char ch;
                    cin >> ch;
                    if (ch == 'y' || ch == 'Y') {
                        system("cls");
                        cout << endl << "\tReceipt" << endl;
                        cout << "Name : " << name << endl;
                        cout << "Flavour : " << flavour << endl;
                        cout << "Price : " << price << endl;
                        cout << "Bill : " << bill << endl;
                        cout << "Status : Paid" << endl;
                    }
                } else {
                system("cls");
                    cout << "Sorry unsuccessful..." << endl;
                }
                break;
            }
            case 4:
                system("cls");
                cout << "\t------ THANK YOU ------" << endl;
                return 0;
            default:
                cout << "Sorry Invalid Input try again...." << endl;
            }
            cout << "Press Enter to continue..." << endl;
            cin.ignore();
            cin.get();
        } catch (exception &e) {
            cerr << "Error: " << e.what() << endl;
        }
    }
}
