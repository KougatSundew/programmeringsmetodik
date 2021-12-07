//
// Created by jolof on 2021-12-07.
//

#ifndef LABB_3_P_QUEUE2_H
#define LABB_3_P_QUEUE2_H


bool less(int a1, int a2) {
    return a1 < a2;
}
struct node {
    int value;
    node *next;
};
class p_queue2 {
    std::vector<int> container;
    node *head, *tail;
    int sz;
public:
    p_queue2():sz(0), head(nullptr), tail(nullptr) {

    }
    ~p_queue2() {
        node* it = head;
        while(head != nullptr) {
            head = it->next;
            delete it;
            it = head;
        }
        delete head;
    }
    int pop() {

    }
    void push(int value) {
        std::cout << value << "\n";
        node* tmp = new node;
        tmp->value = value;
        tmp->next = nullptr;

        if(head == nullptr) {
            head = tmp;
            tail = tmp;
            sz = 1;
        } else {
            tail->next = tmp;
            tail = tail->next;
            sz += 1;
        }
    }
    int size() {
        return sz;
    }
    bool empty() {
        return (sz == 0);
    }
    node* get_head() {
        return head;
    }
    node* get_tail() {
        return tail;
    }
};



#endif //LABB_3_P_QUEUE2_H
