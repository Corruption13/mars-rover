// I mean, this is an abstract class for the sake of making an abstract class. Is it reall needed?

#include "rover.h"

class Command{
public:
    virtual void doCommand(Rover &r)=0;
};

class RotateLeft: public Command{
public:
    void doCommand(Rover &r){
        r.turnLeft();
    };
};


class RotateRight: public Command{
public:
    void doCommand(Rover &r){
        r.turnRight();
    };
};


class MarchForward: public Command{
public:
    void doCommand(Rover &r){
        r.marchForward();
    };
};