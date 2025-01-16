#include "Character.h"
#include "Mario.h"
#include "Yoshi.h"
#include <iostream>

void MushroomCupRace();  

int main() {
    std::cout << "Welcome to the Mushroom Cup Race!" << std::endl;
    std::cout << "Here we go!" << std::endl;
    std::cout << "Turi Turi Ti Tu!" << std::endl; 

    
    MushroomCupRace();  
    
    return 0;
}

void MushroomCupRace() {
    
    Mario mario;        
    Yoshi yoshi(3);  // Yoshi with 3 crests

    // Start the race
    std::cout << "GO!" << std::endl;

    int mario_distance = 0;
    int yoshi_distance = 0;
    const int finish_line = 40;  // 40 mts

    while (mario_distance < finish_line && yoshi_distance < finish_line) {
        // Both characters accelerate
        mario.Accelerate();
        yoshi.Accelerate();  

        mario_distance += mario.speed();
        yoshi_distance += yoshi.speed();

        // Progress of the race
        std::cout << mario.WhatAmI() << " has traveled " << mario_distance << " meters." << std::endl;
        std::cout << yoshi.WhatAmI() << " has traveled " << yoshi_distance << " meters." << std::endl;
        std::cout << std::endl;
    }

    // Results at the finish line
    std::cout << "Finish Line!" << std::endl;

    // Winner
    if (yoshi_distance >= finish_line && mario_distance >= finish_line) {
        std::cout << "It's a tie!" << std::endl;
    } else if (yoshi_distance >= finish_line) {
        std::cout << "Yoshi wins the Mushroom Cup!" << std::endl;
    } else {
        std::cout << "Mario wins the Mushroom Cup!" << std::endl;
    }
}