// Labb 4, programmeringsmetodik
// Joel Olofsson (jool1904)
// MailBox.cpp, 2021-12-07 - 2021-12-13
// The main function and other functions

//
// Created by jolof on 2021-12-07.
//

#include "MailBox.h"

std::vector<Email> MailBox::emails() {
    return inbox;
}

void MailBox::push(Email email) {
    inbox.push_back(email);
}

size_t MailBox::size() {
    return inbox.size();
}

void MailBox::SortWho() {
    CompWhoDateSubject comp;
    std::sort(inbox.begin(), inbox.end(), comp);
}

void MailBox::SortDate() {
    CompDateWhoSubject comp;
    std::sort(inbox.begin(), inbox.end(), comp);
}

void MailBox::SortSubject() {
    CompSubjectWhoDate comp;
    std::sort(inbox.begin(), inbox.end(), comp);
}

auto MailBox::begin() {
    return inbox.begin();
}

auto MailBox::end() {
    return inbox.end();
}
