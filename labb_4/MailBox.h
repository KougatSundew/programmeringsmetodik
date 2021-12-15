// Labb 4, programmeringsmetodik
// Joel Olofsson (jool1904)
// MailBox.h, 2021-12-07 - 2021-12-13
// The main function and other functions

//
// Created by jolof on 2021-12-07.
//

#ifndef LABB_4_MAILBOX_H
#define LABB_4_MAILBOX_H


#include <vector>
#include "Email.h"
#include <algorithm>

class MailBox {
    std::vector<Email> inbox;
public:
    //Default constructor
    MailBox() = default;

    //Getters
    std::vector<Email> emails();
    size_t size();
    auto begin();
    auto end();

    void push(Email email);

    //Sort methods
    void SortWho();
    void SortDate();
    void SortSubject();
};


#endif //LABB_4_MAILBOX_H
