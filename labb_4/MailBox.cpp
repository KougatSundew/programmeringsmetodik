// Labb 4, programmeringsmetodik
// Joel Olofsson (jool1904)
// MailBox.cpp, 2021-12-07 - 2021-12-13
// The main function and other functions

//
// Created by jolof on 2021-12-07.
//

#include "MailBox.h"
/**
 * Function for getting the vector which containing the emails
 * @return
 */
std::vector<Email> MailBox::emails() {
    return inbox;
}
/**
 * Function for pushing an class Email to the inbox
 * @param email - an email of class Email
 */
void MailBox::push(Email email) {
    inbox.push_back(email);
}
/**
 * Function for getting the size of the inbox
 * @return - returns the inbox size
 */
size_t MailBox::size() {
    return inbox.size();
}
/**
 * Function for sorting after the author
 */
void MailBox::SortWho() {
    CompWhoDateSubject comp;
    std::sort(inbox.begin(), inbox.end(), comp);
}
/**
 * Function for sorting after the date
 */
void MailBox::SortDate() {
    CompDateWhoSubject comp;
    std::sort(inbox.begin(), inbox.end(), comp);
}
/**
 * Function for sorting after the subject
 */
void MailBox::SortSubject() {
    CompSubjectWhoDate comp;
    std::sort(inbox.begin(), inbox.end(), comp);
}
/**
 * Function for getting the begin iterator of the inbox
 * @return - returns iterator of the vector
 */
auto MailBox::begin() {
    return inbox.begin();
}
/**
 * Function for getting the end iterator of the inbox
 * @return - returns iterator of the vector
 */
auto MailBox::end() {
    return inbox.end();
}
