#ifndef ROVER_H
#define ROVER_H
#include "coordinates.h"
#include "direction.h"
using namespace std;


class Rover{

public:
    Rover(int x, int y, Direction d);
    void turnLeft();
    void turnRight();
    bool marchForward();

    Coordinates getCurrentLocation();    
    char getRoverDirection();

private:

    Coordinates current_location;
    Direction facing;
};

char Rover::getRoverDirection(){
    switch(facing.getDirection()){
        case N: return 'N'; break;
        case S: return 'S'; break;
        case E: return 'E'; break;
        case W: return 'W'; break;
    
        default: return 'X';
    }
}


Coordinates Rover::getCurrentLocation(){
    return current_location;
}

Rover::Rover(int x, int y, Direction d): current_location(0,0), facing(N){
    current_location = Coordinates(x,  y);
    facing = d;
}
/*
void Rover::turnLeft(){
    int val = facing -1;
    if(val == -1) val = 3;
    facing = (Direction)(val) ;
};
*/
void Rover::turnLeft(){
    int val = facing.getDirection() - 1;
    if(val == -1) val = 3;
    facing.updateDirection(val) ;
};

void Rover::turnRight(){
    int val = (facing.getDirection() +1) % 4;
    facing.updateDirection(val) ;
};

bool Rover::marchForward(){
    
    switch(facing.getDirection()){
        case N: current_location.updateCoordinates(current_location.getX(), current_location.getY() + 1);  break;
        case S: current_location.updateCoordinates(current_location.getX(), current_location.getY() - 1); break;
        case E: current_location.updateCoordinates(current_location.getX() + 1, current_location.getY()); break;
        case W: current_location.updateCoordinates(current_location.getX() - 1, current_location.getY()); break;
        default: return false;
    }

    return true;
};


#endif