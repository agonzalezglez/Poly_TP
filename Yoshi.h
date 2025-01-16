#ifndef YOSHI_H_
#define YOSHI_H_
#include "Character.h"
#include <string>
#include <iostream>

class Yoshi : public Character {

    public:
        //Constructor
	    Yoshi(int crests);

	    //Destructor
	    virtual ~Yoshi();

        //WhatAmI
	    virtual std::string WhatAmI() const;

	    //Acceleration
	    virtual void Accelerate() override;

        inline int crests () const {
            return crests_;
        };
        
        protected:
	    
        int crests_ ;

};

#endif