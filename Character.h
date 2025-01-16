#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>

class Character {
protected:
    float speed_;                  
    static float max_speed_;       

public:
    // Constructor
    Character();

    // Destructor
    virtual ~Character();

    // Methods
    virtual void Accelerate();     
    virtual void Break();          

   
    inline float speed() const { return speed_; };
    inline static float max_speed() { return max_speed_; };

    // Pure virtual function
    virtual std::string WhatAmI() const = 0;

};

#endif 
