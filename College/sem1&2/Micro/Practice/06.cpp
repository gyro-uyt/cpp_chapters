#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX_PRODUCTS = 100;
int productCount = 5;

class Product {
  public:
    string name;
    double price;

    void display() const {
        cout << "Product: " << name << ", Price: Rs " << fixed << setprecision(2) << price << "/-" << endl;
    }
};

// ========== Function for Upper/Lower Case Error ==========
string toLower(const string& str) {
    string lowerStr = str;
    for(char& ch : lowerStr) {
        ch = tolower(ch);
    }
    return lowerStr;
}

// ========== Sort ==========
void sortByPrice(Product arr[], int size) {
    for(int i = 0; i < size - 1; ++i)
        for(int j = 0; j < size - i - 1; ++j)
            if(arr[j].price > arr[j + 1].price)
                swap(arr[j], arr[j + 1]);
}

void sortByName(Product arr[], int size) {
    for(int i = 0; i < size - 1; ++i)
        for(int j = 0; j < size - i - 1; ++j)
            if(arr[j].name > arr[j + 1].name)
                swap(arr[j], arr[j + 1]);
}

// ========== Search ==========
int binarySearchByName(Product arr[], int size, const string& target) {
    string targetLower = toLower(target);
    int left = 0, right = size - 1;
    while(left <= right) {
        int mid = (left + right) / 2;
        string midLower = toLower(arr[mid].name);
        if(midLower == targetLower) return mid;
        else if(midLower < targetLower) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

// ========== Login ==========
bool login(bool &isAdmin) {
    string phone, enteredOtp;
    const string userOtp = "1234";
    const string adminPhone = "1234567890";
    const string adminPin = "8878";

    cout << "==== Login Page ====\n";
    cout << "Enter your phone number: ";
    cin >> phone;

    if(phone == adminPhone) {
        isAdmin = true;
        cout << "Enter PIN: ";
        cin >> enteredOtp;
        if(enteredOtp == adminPin) {
            cout << "Admin login successful!\n";
            return true;
        } else {
            cout << "Incorrect PIN! Access denied.\n";
            return false;
        }
    } else {
        isAdmin = false;
        cout << "Sending OTP to " << phone << "...\n";
        cout << "Your OTP is: " << userOtp << endl;
        cout << "Enter OTP: ";
        cin >> enteredOtp;
        if(enteredOtp == userOtp) {
            cout << "Login successful!\n";
            return true;
        } else {
            cout << "Invalid OTP. Access denied.\n";
            return false;
        }
    }
}

// ========== Menu ==========
void displayUserMenu() {
    cout << "\n====== User Menu ======\n";
    cout << "1. View All Products (Sorted by Price)\n";
    cout << "2. Search Product by Name\n";
    cout << "3. Exit\n";
    cout << "Enter your choice (1-3): ";
}

void displayAdminMenu() {
    cout << "\n====== Admin Menu ======\n";
    cout << "1. View All Products (Sorted by Price)\n";
    cout << "2. Search Product by Name\n";
    cout << "3. Add New Product\n";
    cout << "4. Exit\n";
    cout << "Enter your choice (1-4): ";
}

// ========== Main ==========
int main() {
    Product products[MAX_PRODUCTS] = {
        {"Laptop", 49990.00},
        {"Mouse", 500.00},
        {"Keyboard", 990.00},
        {"Monitor", 10000.00},
        {"Smartphone", 24999.99}
    };

    bool isAdmin = false;
    if(!login(isAdmin)) return 0;

    int choice;
    bool running = true;

    while(running) {
        if(isAdmin) displayAdminMenu();
        else displayUserMenu();

        cin >> choice;
        cin.ignore();

        if(!isAdmin && choice == 3) {
            cout << "Thank you for visiting. Goodbye!\n";
            break;
        }

        switch(choice) {
        case 1:
            sortByPrice(products, productCount);
            cout << "\n--- Product Catalog (Sorted by Price) ---\n";
            for(int i = 0; i < productCount; ++i)
                products[i].display();
            break;

        case 2: {
            sortByName(products, productCount);
            string searchName;
            cout << "\nEnter product name to search: ";
            getline(cin, searchName);
            int index = binarySearchByName(products, productCount, searchName);
            if(index != -1) {
                cout << "\nProduct Found!\n";
                products[index].display();
            } else {
                cout << "\nProduct \"" << searchName << "\" not found :(\n";
            }
            break;
        }

        case 3:
            if(isAdmin) {
                if(productCount < MAX_PRODUCTS) {
                    cout << "\nEnter new product name: ";
                    getline(cin, products[productCount].name);
                    cout << "Enter price: Rs ";
                    cin >> products[productCount].price;
                    ++productCount;
                    cout << "Product added successfully.\n";
                } else {
                    cout << "Product limit reached. Cannot add more.\n";
                }
            }
            break;

        case 4:
            if(isAdmin) {
                cout << "Admin logged out. Goodbye!\n";
                running = false;
            } else {
                cout << "Invalid choice. Try again.\n";
            }
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
