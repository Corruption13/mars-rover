#ifndef COORDINATES_H
#define COORDINATES_H

#include <utility>
class Coordinates{
public:
    Coordinates(int, int);
    void updateCoordinates(int, int);
    std::pair<int, int> getCoordinates();
    int getX();
    int getY();

private:
    std::pair<int, int> coor; 

};


/* IMPLEMENTION BELOW BECAUSE TOO LAZY TO CREATE .CPP FILE FOR EACH HEADER */ 
/* IMPLEMENTION BELOW BECAUSE TOO LAZY TO CREATE .CPP FILE FOR EACH HEADER */ 
/* IMPLEMENTION BELOW BECAUSE TOO LAZY TO CREATE .CPP FILE FOR EACH HEADER */ 
/* IMPLEMENTION BELOW BECAUSE TOO LAZY TO CREATE .CPP FILE FOR EACH HEADER */ 
/* IMPLEMENTION BELOW BECAUSE TOO LAZY TO CREATE .CPP FILE FOR EACH HEADER */ 
/* IMPLEMENTION BELOW BECAUSE TOO LAZY TO CREATE .CPP FILE FOR EACH HEADER */ 
/* IMPLEMENTION BELOW BECAUSE TOO LAZY TO CREATE .CPP FILE FOR EACH HEADER */ 
/* IMPLEMENTION BELOW BECAUSE TOO LAZY TO CREATE .CPP FILE FOR EACH HEADER */ 
/* IMPLEMENTION BELOW BECAUSE TOO LAZY TO CREATE .CPP FILE FOR EACH HEADER */ 
/* IMPLEMENTION BELOW BECAUSE TOO LAZY TO CREATE .CPP FILE FOR EACH HEADER */ 
/* IMPLEMENTION BELOW BECAUSE TOO LAZY TO CREATE .CPP FILE FOR EACH HEADER */ 
/* IMPLEMENTION BELOW BECAUSE TOO LAZY TO CREATE .CPP FILE FOR EACH HEADER */ 
/* IMPLEMENTION BELOW BECAUSE TOO LAZY TO CREATE .CPP FILE FOR EACH HEADER */ 
/* IMPLEMENTION BELOW BECAUSE TOO LAZY TO CREATE .CPP FILE FOR EACH HEADER */ 



Coordinates::Coordinates(int x, int y){
    updateCoordinates(x, y);
}

void Coordinates::updateCoordinates(int x, int y){
    coor.first = x;
    coor.second = y;
};

std::pair<int, int> Coordinates::getCoordinates(){
    return coor;
};

int Coordinates::getX(){
    return coor.first;
}

int Coordinates::getY(){
    return coor.second;
}


#endif