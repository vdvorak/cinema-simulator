#pragma once

class RoomSeat
{
public:
    RoomSeat(const unsigned int number) : number(number) {};
    void setTaken();
    void setFree();
    bool getIsTaken() const { return isTaken; }
    const unsigned int getNumber() const {return number; }

private:
    bool isTaken = false;
    const unsigned int number;
};

