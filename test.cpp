// Used while testing each module during developement. 

#include <iostream>

#include "commands.h"
#include "coordinates.h"
#include "direction.h"
#include "rover.h"
#include "marsmap.h"

using namespace std;




int main(){
    std::cout<<"Testing Modules:\n\n";


/*
    ROVER.H Test Code.
*/

    Rover r1(2, 2, S);
    Coordinates c = r1.getCurrentLocation();
    std::cout<<"Initial Rover Pos: "<< c.getX()<<" "<<c.getY()<<std::endl;
    cout<< "Rover is Facing Direction: "<< r1.getRoverDirection()<<endl<<endl;

    RotateLeft().doCommand(r1);
    RotateLeft().doCommand(r1);
    MarchForward().doCommand(r1);
    c = r1.getCurrentLocation();
    std::cout<<"Current Rover Pos after command sequence 'LLM': "<< c.getX()<<" "<<c.getY()<<std::endl;

    MarchForward().doCommand(r1);
    RotateLeft().doCommand(r1);
    MarchForward().doCommand(r1);
    c = r1.getCurrentLocation();
    std::cout<<"Current Rover Pos after command sequence 'MLM': "<< c.getX()<<" "<<c.getY()<<std::endl;

    RotateRight().doCommand(r1);
    MarchForward().doCommand(r1);
    c = r1.getCurrentLocation();
    std::cout<<"Current Rover Pos after 'RM': "<< c.getX()<<" "<<c.getY()<<std::endl;

    cout<< "Rover is Facing Direction: "<< r1.getRoverDirection()<<endl;

/*
    COORDINATE.H Test Code.

    Coordinates c(3, 4);
    std::cout<<c.getCoordinates().first<<" "<<c.getCoordinates().second<<std::endl;
    c.updateCoordinates(3, 5);
    std::cout<<c.getCoordinates().first<<" "<<c.getCoordinates().second<<std::endl;
*/


/*
    DIRECTION.H Test Code.

    DIRECTION d(N);

*/



/*
    MAP.H Test Code.

    MarsMap m(50, 50);
    cout<<withinBound(c)?"Yes":"No";

*/

    std::cout<<std::endl;
    return 0;

}