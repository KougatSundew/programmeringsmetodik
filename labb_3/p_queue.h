// Labb 3, programmeringsmetodik
// Joel Olofsson (jool1904)
// p_queue.h, 2021-12-06 - 2021-12-07
// The main template priority queue class

#ifndef LABB_3_P_QUEUE_H
#define LABB_3_P_QUEUE_H

#include <vector>
#include <algorithm>
#include <functional>
#include <functional>

/**
 * Template for templating the class p_queue
 * @tparam T - the type of object or type to use
 * @tparam Comp - comparison function object
 */
template<typename T, typename Comp>
class p_queue {
private:
    std::vector<T> container;
    /**
     * Function object for getting two T elements for comparison and then using the comparison object comp which returns an boolean
     */
    struct less {
        bool operator()(const T& firstElement, const T& secondElement) const {
            Comp comp;
            return comp(firstElement, secondElement);
        }
    };
public:
    /**
     * Defaulted default constructor
     */
    p_queue() = default;

    /**
     * Function for doing a pop like function on priority queue
     * @return returns an object T
     */
    T pop() {
        T front = container.front();
        container.erase(container.begin());
        return front;
    }
    /**
     * Function for pushing a element to the vector
     * @param element - const element of type T
     */
    void push(const T element) {
        container.push_back(element);
        std::sort(container.begin(), container.end(), less());
    }
    /**
     * Function for getting the top element of the vector
     * @return - returns reference to element with type T
     */
    T& top() {
        return container.front();
    }
    /**
     * Function for getting the size of the vector
     * @return
     */
    int size() {
        return container.size();
    }
    /**
     * Function for checking if the vector is empty, which returns a boolean that can be true or false
     * @return - returns boolean
     */
    bool empty() {
        return container.empty();
    }
    /**
     * Function for getting the vector with the T elements
     * @return - returns a vector with elements with type T
     */
    std::vector<T> get_container() {
        return container;
    }
};
#endif //LABB_3_P_QUEUE_H