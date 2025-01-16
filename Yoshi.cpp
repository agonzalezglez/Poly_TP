#include "Yoshi.h"
#include "Character.h"
#include <string>
#include <iostream>

//Constructor
Yoshi::Yoshi(int crests){
    crests_=crests;
};

////Destructor
Yoshi::~Yoshi(){
}

//WhatAmI
std::string Yoshi::WhatAmI() const {
    std::string name = "Yoshi with ";
    std::string crests_number = std::to_string(crests_);
    std::string crests = " crests";
    return name + crests_number + crests;
}


//Accelerate
void Yoshi::Accelerate(){
	if (speed_+2 < max_speed_){
		speed_=speed_+2;
	}
}