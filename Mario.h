#ifndef MARIO_H_
#define MARIO_H_

#include <iostream>
#include "Character.h"
#include <string>

class Mario : public Character {
public:
    // Constructor
    Mario();

    // Destructor
    virtual ~Mario();

    virtual std::string WhatAmI() const;

    inline int crests() const {
        return crests_;
    }

protected:
    int crests_;
};

#endif
