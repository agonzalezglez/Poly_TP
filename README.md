# Poly_TP
Object Oriented Programming Course 4BIM

This project simulates a race between two characters, Mario and Yoshi, using object-oriented principles in C++. The program demonstrates inheritance, polymorphism, and the interaction between different classes such as Character, Mario, and Yoshi.

Features

    Character Class: Represents a basic racing character with attributes like speed and methods for accelerating and braking.
    Mario Class: Inherits from Character, represents the Mario character.
    Yoshi Class: Inherits from Character, represents the Yoshi character, with additional features like "crests" that give it a slight edge in acceleration.

Mario Kart Race Simulation

    The program simulates a race between Mario and Yoshi.
    Yoshi accelerates faster due to his special "crest" feature.
    The race tracks the distance each character travels, and prints updates until one of them wins by crossing the finish line.

Files

    Character.h: Header file defining the base Character class with methods for accelerating, braking, and getting the current speed.
    Character.cpp: Implementation of the Character class.
    Mario.h: Header file defining the Mario class, derived from Character.
    Mario.cpp: Implementation of the Mario class.
    Yoshi.h: Header file defining the Yoshi class, derived from Character.
    Yoshi.cpp: Implementation of the Yoshi class.
    main.cpp: The main file containing the simulation for the race.
