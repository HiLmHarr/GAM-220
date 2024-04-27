// Rooms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "room.h"
#include "WorldObjects.h"
#include <string>
int main()
{
    // Build the world

    room start("You are in the starting room");
    start.AddConnection(room::Connection::north, new room("Room to the North"));
    start.AddConnection(room::Connection::south, new room("Room to the South"));
    start.AddConnection(room::Connection::east, new room("Room to the East"));
    start.GetConnection(room::Connection::east)->AddConnection(room::Connection::east, new room("Room twice to the east"));
    
    //This object will be moved around to ensure all the functions work
    WorldObjects exampleObject("example", "example description");
    
    start.AddObject(&exampleObject);

    start.MoveObject(&exampleObject, room::Connection::north);
    

}

