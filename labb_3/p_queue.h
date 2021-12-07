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


template<typename T, typename Comp>
class p_queue {
private:
    std::vector<T> container;
    //Function object for comparing
    struct less {
        bool operator()(const T& firstElement, const T& secondElement) const {
            Comp comp;
            return comp(firstElement, secondElement);
        }
    };
public:
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
    void push(const T element) {
        container.push_back(element);
        std::sort(container.begin(), container.end(), less());
    }
    T& top() {
        return container.front();
    }
    int size() {
        return container.size();
    }
    bool empty() {
        return container.empty();
    }
    std::vector<T> get_container() {
        return container;
    }
};
#endif //LABB_3_P_QUEUE_H