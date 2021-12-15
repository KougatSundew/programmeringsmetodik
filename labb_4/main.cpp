// Labb 4, programmeringsmetodik
// Joel Olofsson (jool1904)
// main.cpp, 2021-12-07 - 2021-12-13
// The main function and other functions

#include <iostream>
#include <vector>
#include "MailBox.h"

template<typename T>
void show(std::vector<T> elements) {
    for(auto element : elements) {
        std::cout << element;
    }
    std::cout << "\n";
}

int main() {
    MailBox inbox;

    inbox.push(Email("Joel", "2021-12-13", "Hello"));
    inbox.push(Email("Kurt", "2021-12-13", "Hello 2"));
    inbox.push(Email("Bengt", "2021-12-11", "Hello"));
    inbox.push(Email("Karl", "2021-12-09", "Aa"));

    std::cout << "Unsorted: " << "\n";
    show(inbox.emails());

    inbox.SortWho();
    std::cout << "Sorted on author:" << "\n";
    show(inbox.emails());

    inbox.SortDate();
    std::cout << "Sorted on date:" << "\n";
    show(inbox.emails());

    inbox.SortSubject();
    std::cout << "Sorted on subject:" << "\n";
    show(inbox.emails());


    return 0;
}
