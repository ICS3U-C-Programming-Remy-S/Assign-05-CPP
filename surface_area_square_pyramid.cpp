// Copyright (c) 2023 Remy Skelton All rights reserved.
//
// Created by: Remy Skelton
// Date: Dec, 11, 2023
// This program will ask for the base edge
// and height of a square based pyramid
// then it will calculate the surface area

#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

double calc_surface_area_pir(double base_edge, double height) {
    // Calculate the surface area of the square pyramid
    double calc_surface_area = std::pow(base_edge, 2) + base_edge * 2 *
    std::sqrt(std::pow(base_edge, 2) / 4 + std::pow(height, 2));
    return calc_surface_area;
}

int main() {
    // Declare variables
    std::string userBaseEdgeStr, userHeightStr, userDecision;
    double userBaseEdgeDouble, userHeightDouble, surface_area;

    // To continue to loop if the user wants
    do {
        // Nested loop to get valid input
        do {
            // Get decimal and places and display a message to the user
            std::cout << "This program will ask for the base edge\n";
            std::cout << "and height of a square based pyramid\n";
            std::cout << "then it will calculate the surface area\n";
            std::cout << "Enter the base edge of the square pyramid: ";
            std::cin >> userBaseEdgeStr;
            std::cout << "Enter the height of the square pyramid: ";
            std::cin >> userHeightStr;

            // Check if input is correct
            try {
                userBaseEdgeDouble = std::stod(userBaseEdgeStr);
                userHeightDouble = std::stod(userHeightStr);
                // Exit the loop if input is valid
                break;
            } catch (std::exception& e) {
                std::cout << userBaseEdgeStr << " and " << userHeightStr
                          << " are invalid base edge and height\n";
            }
        } while (true);

        // Call the function
        surface_area = calc_surface_area_pir
        (userBaseEdgeDouble, userHeightDouble);

        // Display the surface area
        std::cout << "\nThe surface area of the square pyramid is: "
        << std::fixed << std::setprecision(2) << surface_area << std::endl;

        // Ask if the user wants to continue
        std::cout <<
        "\nDo you want to calculate for another square based pyramid? (y/n): ";
        std::cin >> userDecision;
    } while (userDecision == "y" || userDecision == "Y");
}
