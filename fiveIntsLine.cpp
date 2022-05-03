// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: May 3, 2022
// This program uses one for loop and one if statement, prints
// the integers from 1000 to 2000 outputting five integers per
// line with each separated by a space

#include <iostream>


int main() {
    int counter;

    for (counter = 1000; counter < 2000 + 1; counter ++) {
        if (counter % 5 == 0 && counter != 1000) {
            std::cout << "\n";
        }
    std::cout << counter << " ";
    }
}
