// Labb 1, programmeringsmetodik
// Joel Olofsson (jool1904)
// main.cpp, 2021-12-06 - 2021-12-07
// The main function and other functions

#include <iostream>
#include <ctime>
#include <string>
#include <iomanip>
#include "p_queue.h"

struct Order {
    Order(int price, std::string fullname): price(price), fullname(fullname) {}

    int price;
    std::string fullname;
};
struct less {
    bool operator()(const Order& a, const Order& b) {
        return a.price < b.price;
    }
};

int main() {
    srand(time(nullptr));

    p_queue<Order, less> buyOrders;
    p_queue<Order, less> sellOrders;

    //For creating buy- & sell orders for the 3 persons
    for(int person = 0; person < 3; person++) {
        std::string name;
        if(person == 0) name = "Erik Pendel";
        if(person == 1) name = "Jarl Wallenburg";
        if(person == 2) name = "Joakim von Anka";

        for(int orders = 0; orders < 7; orders++) {
            int randomPrice = rand() % 16 + 15;
            buyOrders.push(Order(randomPrice, name));
            randomPrice = rand() % 16 + 15;
            sellOrders.push(Order(randomPrice, name));
        }
    }

    int counter = 1;
    //Then we walk the buy- & sell orders until they are empty
    while(!buyOrders.empty() && !sellOrders.empty()) {
        if(sellOrders.top().price <= buyOrders.top().price) {
            Order buyOrder = buyOrders.pop();
            Order sellOrder = sellOrders.pop();

            std::cout << counter++ << "\t" << buyOrder.fullname << " Buyed of " << sellOrder.fullname << " for " << buyOrder.price << "kr " << "\n";
        }
        else
            buyOrders.pop();
    }

    return 0;
}
