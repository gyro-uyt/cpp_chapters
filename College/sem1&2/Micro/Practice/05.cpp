#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

class Product {
  public:
    string name;
    double price;

    Product(string name, double price) : name(name), price(price) {}

    void display() const {
        cout << "Product: " << name << ", Price: Rs " << fixed << setprecision(2) << price << "/-" << endl;
    }

    // For sorting by name
    bool operator<(const Product& other) const {
        return name < other.name;
    }
};

class Catalog {
  private:
    vector<Product> products;

  public:
    void addProduct(const string& name, double price) {
        products.emplace_back(name, price);
    }

    void viewAllSortedByPrice() {
        vector<Product> sorted = products;
        sort(sorted.begin(), sorted.end(), [](const Product & a, const Product & b) {
            return a.price < b.price;
        });

        cout << "\n--- Product Catalog (Sorted by Price) ---\n";
        for(const auto& p : sorted) {
            p.display();
        }
    }

    void searchByName(const string& name) {
        vector<Product> sorted = products;
        sort(sorted.begin(), sorted.end()); // uses operator< by name

        int left = 0, right = sorted.size() - 1;
        while(left <= right) {
            int mid = (left + right) / 2;
            if(sorted[mid].name == name) {
                cout << "\nProduct Found!\n";
                sorted[mid].display();
                return;
            } else if(sorted[mid].name < name) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        cout << "\nProduct \"" << name << "\" not found :(\n";
    }

    void searchByPrice(double targetPrice) {
        vector<Product> sorted = products;
        sort(sorted.begin(), sorted.end(), [](const Product & a, const Product & b) {
            return a.price < b.price;
        });

        cout << "\nProducts matching Rs " << fixed << setprecision(2) << targetPrice << ":\n";
        bool found = false;
        for(const auto& p : sorted) {
            if(p.price == targetPrice) {
                p.display();
                found = true;
            }
        }

        if(!found)
            cout << "No products found with that price.\n";
    }
};

void displayMenu() {
    cout << "\n====== E-Commerce Menu ======\n";
    cout << "1. View All Products (Sorted by Price)\n";
    cout << "2. Search Product by Name\n";
    cout << "3. Search Product by Price\n";
    cout << "4. Add New Product\n";
    cout << "5. Exit\n";
    cout << "Enter your choice (1-5): ";
}

int main() {
    Catalog catalog;

    // Initial products
    catalog.addProduct("Laptop", 49990.00);
    catalog.addProduct("Mouse", 500.00);
    catalog.addProduct("Keyboard", 990.00);
    catalog.addProduct("Monitor", 10000.00);
    catalog.addProduct("Smartphone", 24999.99);

    int choice;
    bool running = true;

    while(running) {
        displayMenu();
        cin >> choice;
        cin.ignore();

        switch(choice) {
        case 1:
            catalog.viewAllSortedByPrice();
            break;

        case 2: {
            string name;
            cout << "Enter product name to search: ";
            getline(cin, name);
            catalog.searchByName(name);
            break;
        }

        case 3: {
            double price;
            cout << "Enter product price to search: ";
            cin >> price;
            cin.ignore();
            catalog.searchByPrice(price);
            break;
        }

        case 4: {
            string name;
            double price;
            cout << "Enter new product name: ";
            getline(cin, name);
            cout << "Enter price: ";
            cin >> price;
            cin.ignore();
            catalog.addProduct(name, price);
            cout << "Product added successfully!\n";
            break;
        }

        case 5:
            cout << "Thank you for visiting. Goodbye!\n";
            running = false;
            break;

        default:
            cout << "Invalid choice. Please enter 1-5.\n";
        }
    }

    return 0;
}
