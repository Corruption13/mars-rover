// Didn't end up implementing bounded functionality for rover, got lazy ehe.

#include "coordinates.h"

class MarsMap{
    MarsMap(Coordinates);
    bool withinBound(Coordinates);


private:
    Coordinates max_coor;
};


MarsMap::MarsMap(Coordinates max_coordinates): max_coor(0,0){
    max_coor = max_coordinates;
}


bool MarsMap::withinBound(Coordinates c){
    if(c.getX() > 0 && c.getY() > 0 && c.getX() <= max_coor.getX() && c.getY() == max_coor.getY()){
        return true;
    }
    return false;
};