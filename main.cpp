/*  
    Implemented by Sandeep Pillai
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    https://becca9941.github.io/programming-problem/2019/08/13/building-mars-rover-solution-object-oriented-tdd-with-pharo.html

    ** Mars Rover Problem Statement **

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

    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    TEST INPUT: 
    1)  5 5
        1 2 N
        LMLMLMLMM

    2)  5 5
        3 3 E
        MMRMMRMRRM

    EXPECTED OUTPUT:
        1 3 N
        5 1 E


    DEVNOTE: "I changed LMR to AWD controls because I'M A GAMER" 
*/


#include <iostream>

#include "commands.h"
#include "coordinates.h"
#include "direction.h"
#include "rover.h"
#include "marsmap.h"

using namespace std;




int main(){

    cout<<"Enter Rover Initial Location X:Y on mars: ";
    int x, y;
    cin>> x >> y;

    Rover r1(x, y, N);
    Coordinates c = r1.getCurrentLocation();
    cout<<"~\nMars Rover Booted!\n";
    std::cout<<"Initial Rover Pos: ["<< c.getX()<<" "<<c.getY()<<"]\n";
    cout<< "Rover is Facing Direction: "<< r1.getRoverDirection()<<endl<<endl;
    

    char ch = 'W';

    cout<<"\nControls:\n[W] Move Forward one unit.\n[A] Turn Rover Right\n[D] Turn Rover Left\n" ;
    cout<<"[S] Get Status of Rover.\n[H] For Commands\n[Q] Shutdown Rover.\n";
    cout<<"\nEnter Command-> ";
    // Temp Menu Implementation. 
    while(true){
        cout<<endl;
        cin>> ch;
        ch = (char)toupper(ch);
        
        switch(ch){
            case 'W':   MarchForward().doCommand(r1);
                        cout<<"\nMoving Forward!\n";
                        c = r1.getCurrentLocation();
                        cout<<"Current Rover Pos: ["<< c.getX()<<" "<<c.getY()<<"]\n"; 
                        break;
            case 'D':   RotateRight().doCommand(r1); 
                        cout<<"\nTurning Right!\n"; 
                        cout<< "Rover is Facing Direction: "<< r1.getRoverDirection()<<endl;
                        break;
            case 'A':   RotateLeft().doCommand(r1); 
                        cout<<"\nTurning Left!\n"; 
                        cout<< "Rover is Facing Direction: "<< r1.getRoverDirection()<<endl;
                        break;

            case 'S':   c = r1.getCurrentLocation();
                        cout<<"Current Rover Pos: ["<< c.getX()<<" "<<c.getY()<<"]\n"; 
                        cout<<"Rover is Facing Direction: "<< r1.getRoverDirection()<<endl; 
                        break;
            case 'H':   cout<<"\nControls:\n[W] Move Forward one unit.\n[A] Turn Rover Right\n[D] Turn Rover Left\n" ;
                        cout<<"[S] Get Status of Rover.\n[Q] Shutdown Rover.\n";
                        break;
            case 'Q':   cout<<"\nGoodbye, Human :(\n\n";
                        return 0;
            default: cout<<"\nInvalid Command: "<<ch<<endl;
        }
    }

    return 0;
}