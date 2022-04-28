// Copyright (c) 2022 Dahrio Francois All rights reserved
//
// Created by: Dahrio Francois
// Created on: April 2022
// This program tells you how many days there are in a month
//   with user input

#include <iostream>
#include <string>


int main() {
    // this creates the calendar program
    std::string nameOfMonth;

    // input
    std::cout << "Tell me a month on the calendar (ex: January): ";
    std::cin >> nameOfMonth;

    // process & output
    if (nameOfMonth == "January") {
        std::cout << "\nThe number of days in this month is 31." << std::endl;
    } else if (nameOfMonth == "February") {
        std::cout << "\nThe number of days in this month is 28" <<
        " unless it is a leap year. Then it is 29 days." << std::endl;
    } else if (nameOfMonth == "March") {
        std::cout << "\nThe number of days in this month is 31." << std::endl;
    } else if (nameOfMonth == "April") {
        std::cout << "\nThe number of days in this month is 30." << std::endl;
    } else if (nameOfMonth == "May") {
        std::cout << "\nThe number of days in this month is 31." << std::endl;
    } else if (nameOfMonth == "June") {
        std::cout << "\nThe number of days in this month is 30." << std::endl;
    } else if (nameOfMonth == "July") {
        std::cout << "\nThe number of days in this month is 31." << std::endl;
    } else if (nameOfMonth == "August") {
        std::cout << "\nThe number of days in this month is 31." << std::endl;
    } else if (nameOfMonth == "September") {
        std::cout << "\nThe number of days in this month is 30." << std::endl;
    } else if (nameOfMonth == "October") {
        std::cout << "\nThe number of days in this month is 31." << std::endl;
    } else if (nameOfMonth == "November") {
        std::cout << "\nThe number of days in this month is 30." << std::endl;
    } else if (nameOfMonth == "December") {
        std::cout << "\nThe number of days in this month is 31." << std::endl;
    }
}
