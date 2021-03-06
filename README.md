# mars-rover



Simple Mars Rover OOPS Question Implemented by me without external reference. (2 Hours Whiteboard to end.)

[Inheritance, Composition, Abstraction.] 




## Problem Statement

    ** Mars Rover Problem Statement **

    https://becca9941.github.io/programming-problem/2019/08/13/building-mars-rover-solution-object-oriented-tdd-with-pharo.html

    

    A *squad* of robotic rovers are to be landed by NASA on a plateau on Mars.

    This plateau, which is curiously rectangular, must be navigated by the rovers so that their on board cameras 
    can get a complete view of the surrounding terrain to send back to Earth.

    A rover's position is represented by a combination of x and y coordinates and a letter representing 
    one of the four cardinal compass points. The plateau is divided up into a grid to simplify navigation. 
    An example position might be 0, 0, N, which means the rover is in the bottom left corner facing North.

    In order to control a rover, NASA sends a simple string of letters. The possible letters are 'L', 'R' and 'M'.

    'L' and 'R' makes the rover spin 90 degrees left or right respectively, without moving from its current spot. 
    'M' means move forward one grid point, and maintain the same heading.

    Assume that the square directly North from (x, y) is (x, y+ 1).

    Input
    The first line of input is the upper-right coordinates of the plateau, the lower-left coordinates are assumed to be 0,0.

    The rest of the input is information pertaining to the rovers that have been deployed. Each rover has two lines of input.
     The first line gives the rover's position, and the second line is a series of instructions telling the rover how to explore the plateau.

    The position is made up of two integers and a letter seperated by spaces, corresponding to the x and y co-ordinates and the rover's orientation.

    Each rover will be finished sequentially, which means that the second rover won't start to move until the first one has finished moving.

    Output
    The output for each rover should be it's final coordinates and heading.

    

### TEST INPUT: 
    
1)      
        5 5
        1 2 N
        LMLMLMLMM

2)      
        5 5
        3 3 E
        MMRMMRMRRM

### EXPECTED OUTPUT:
        
        1 3 N
        5 1 E

### DEVNOTE: 

        I changed LMR to AWD controls because it makes more intuitive sense. 



## Requirements

    No External Modules used. 
    

### Learning OOPS Grind

This repo was made while preparing for job interviews. You can find additional assignments I did below:

Snake Game OOPS LLD: https://github.com/Corruption13/Snake-Game-CPP

If you want me to upload the remaining projects, send me an email.

