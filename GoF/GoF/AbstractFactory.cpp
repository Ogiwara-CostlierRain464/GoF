//
//  AbstractFactory.cpp
//  GoF
//
//  Created by 荻原湧志 on 2018/08/01.
//  Copyright © 2018年 ogiwara. All rights reserved.
//

#include "AbstractFactory.hpp"

class Maze{};
class Wall{};

class Room{

public:
    Room(int number){
        this->number = number;
    }
private:
    int number;
    
};

class Door{
    
public:
    Door(Room *room1, Room *room2){
        room = room1;
    }
    
private:
    Room *room;
};

class MazeFactory{

public:
    MazeFactory();
    
    virtual Maze* MakeMaze() const{
        return new Maze();
    }
    
    virtual Wall* MakeWall() const{
        return new Wall();
    }
    
    virtual Room* MakeRoom(int n) const{
        return new Room(n);
    }
    
    virtual Door* MakeDoor(Room *r1, Room *r2) const{
        return new Door(r1, r2);
    }
};


