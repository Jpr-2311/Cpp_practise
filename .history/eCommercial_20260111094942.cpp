#include <iostream>
#include <vector>
#include <string>
using namespace std;

class solution {
public:
    vector<pair<string, pair<int, double>>> orders;

    void addOrder(string itemName, int quantity, double price) {
        orders.push_back({itemName, {quantity, price}});
    }

    void updateOrder(string itemName, int newQuantity, double newPrice) {
        for (auto &order : orders) {
            if (order.first == itemName) {
                order.second.first = newQuantity;
                order.second.second = newPrice;
                return;
            }
        }
    }

    double calculateTotalRevenue() {
        double total = 0.0;
        for (auto &order : orders) {
            total += order.second.first * order.second.second;
        }
        return total;
    }
};

int main() {
    solution shop;

    int n;
    cin >> n;   // n

    for (int i = 0; i < n; i++) {
        string item;
        int qty;
        double price;
        cin >> item >> qty >> price;
        shop.addOrder(item, qty, price);
    }

    string updateItem;
    int newQty;
    double newPrice;
    cin >> updateItem >> newQty >> newPrice;
    shop.updateOrder(updateItem, newQty, newPrice);

    cout << shop.calculateTotalRevenue() << endl;

    return 0;
}
