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

    void displayRow() const {
        cout << "| " << left << setw(20) << name
             << " | Rs " << right << setw(10) << fixed << setprecision(2) << price << "     |\n";
    }
};

string toLower(const string& str) {
    string lowerStr = str;
    for (char& ch : lowerStr) ch = tolower(ch);
    return lowerStr;
}

void sortByPrice(Product arr[], int size) {
    for (int i = 0; i < size - 1; ++i)
        for (int j = 0; j < size - i - 1; ++j)
            if (arr[j].price > arr[j + 1].price)
                swap(arr[j], arr[j + 1]);
}

void sortByName(Product arr[], int size) {
    for (int i = 0; i < size - 1; ++i)
        for (int j = 0; j < size - i - 1; ++j)
            if (arr[j].name > arr[j + 1].name)
                swap(arr[j], arr[j + 1]);
}

int binarySearchByName(Product arr[], int size, const string& target) {
    string targetLower = toLower(target);
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        string midLower = toLower(arr[mid].name);
        if (midLower == targetLower) return mid;
        else if (midLower < targetLower) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

bool login(bool &isAdmin) {
    string phone, enteredOtp;
    const string userOtp = "1234";
    const string adminPhone = "1234567890";
    const string adminPin = "8878";

    cout << "+------------------+\n";
    cout << "|   Login Page     |\n";
    cout << "+------------------+\n";
    cout << "Enter your phone number: ";
    cin >> phone;

    if (phone == adminPhone) {
        isAdmin = true;
        cout << "Enter PIN: ";
        cin >> enteredOtp;
        if (enteredOtp == adminPin) {
            cout << "\n+------------------------+\n";
            cout << "| Admin Login Successful |\n";
            cout << "+------------------------+\n";
            return true;
        } else {
            cout << "\nAccess denied. Incorrect PIN.\n";
            return false;
        }
    } else {
        isAdmin = false;
        cout << "Sending OTP to " << phone << "...\n";
        cout << "Your OTP is: " << userOtp << endl;
        cout << "Enter OTP: ";
        cin >> enteredOtp;
        if (enteredOtp == userOtp) {
            cout << "\n+-----------------------+\n";
            cout << "| User Login Successful |\n";
            cout << "+-----------------------+\n";
            return true;
        } else {
            cout << "\nAccess denied. Invalid OTP.\n";
            return false;
        }
    }
}

void displayUserMenu() {
    cout << "\n+--------------------+\n";
    cout << "|     User Menu      |\n";
    cout << "+--------------------+\n";
    cout << "1. View All Products (Sorted by Price)\n";
    cout << "2. Search Product by Name\n";
    cout << "3. Exit\n";
    cout << "Enter your choice (1-3): ";
}

void displayAdminMenu() {
    cout << "\n+--------------------+\n";
    cout << "|     Admin Menu     |\n";
    cout << "+--------------------+\n";
    cout << "1. View All Products (Sorted by Price)\n";
    cout << "2. Search Product by Name\n";
    cout << "3. Add New Product\n";
    cout << "4. Exit\n";
    cout << "Enter your choice (1-4): ";
}

void displayTableHeader() {
    cout << "+----------------------+-------------------+\n";
    cout << "| Product Name         |   Price           |\n";
    cout << "+----------------------+-------------------+\n";
}

void displayTableFooter() {
    cout << "+----------------------+-------------------+\n";
}

int main() {
    Product products[MAX_PRODUCTS] = {
        {"Laptop", 49990.00},
        {"Mouse", 500.00},
        {"Keyboard", 990.00},
        {"Monitor", 10000.00},
        {"Smartphone", 24999.99}
    };

    bool isAdmin = false;
    if (!login(isAdmin)) return 0;

    int choice;
    bool running = true;

    while (running) {
        if (isAdmin) displayAdminMenu();
        else displayUserMenu();

        cin >> choice;
        cin.ignore();

        if (!isAdmin && choice == 3) {
            cout << "\n+---------------------+\n";
            cout << "| Thanks for visiting |\n";
            cout << "+---------------------+\n";
            break;
        }

        switch (choice) {
        case 1:
            sortByPrice(products, productCount);
            cout << "\n+=======================================+\n";
            cout << "|     Product Catalog (by Price)        |\n";
            cout << "+=======================================+\n";
            displayTableHeader();
            for (int i = 0; i < productCount; ++i)
                products[i].displayRow();
            displayTableFooter();
            break;

        case 2: {
            sortByName(products, productCount);
            string searchName;
            cout << "\nEnter product name to search: ";
            getline(cin, searchName);
            int index = binarySearchByName(products, productCount, searchName);
            if (index != -1) {
                cout << "\n+========================+\n";
                cout << "|   Product Found! 🎉    |\n";
                cout << "+========================+\n";
                displayTableHeader();
                products[index].displayRow();
                displayTableFooter();
            } else {
                cout << "\n+-----------------------------+\n";
                cout << "| Product not found. 😢       |\n";
                cout << "+-----------------------------+\n";
            }
            break;
        }

        case 3:
            if (isAdmin) {
                if (productCount < MAX_PRODUCTS) {
                    cout << "\nEnter new product name: ";
                    getline(cin, products[productCount].name);
                    cout << "Enter price: Rs ";
                    cin >> products[productCount].price;
                    ++productCount;
                    cout << "\n+----------------------------+\n";
                    cout << "| Product added successfully |\n";
                    cout << "+----------------------------+\n";
                } else {
                    cout << "\nProduct limit reached. Cannot add more.\n";
                }
            }
            break;

        case 4:
            if (isAdmin) {
                cout << "\n+------------------+\n";
                cout << "| Admin Logged Out |\n";
                cout << "+------------------+\n";
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
