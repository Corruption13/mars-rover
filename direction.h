#ifndef DIRECTION_H
#define DIRECTION_H


enum DIR{ N, E, S, W} ;


class Direction{
public:
    Direction(DIR);
    void updateDirection(int);
    DIR getDirection();


private:
    DIR direction; 

};

Direction::Direction(DIR d){
    updateDirection(d);
}

void Direction::updateDirection(int d){
    direction = (DIR)d;
};

DIR Direction::getDirection(){
    return direction;
};

#endif