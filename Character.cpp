#include "Character.h"
#include <iostream>

// Static member
float Character::max_speed_ = 10;

// Default constructor
Character::Character() {
    speed_ = 0;
}

// Destructor
Character::~Character() {}

// Accelerate
void Character::Accelerate() {
    if (speed_ < max_speed_) {
        speed_ = speed_ + 1;
        std::cout << "Speed increased." << std::endl;
    } else {
        std::cout << "Maximum speed reached, acceleration impossible!!" << std::endl;
    }
}

// Break
void Character::Break() {
    if (speed_ > 0) {
        speed_ = speed_ - 1;
        std::cout << "Speed decreased." << std::endl;
    } else {
        std::cout << "Minimum speed reached, braking impossible!" << std::endl;
    }
}