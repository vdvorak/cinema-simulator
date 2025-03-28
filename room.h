#pragma once
#include "roomseat.h"
#include <vector>


class Room
{
public:
    Room(const unsigned int number, const unsigned int numberOfRows, const unsigned int numberOfSeats);

    const unsigned int getNumber() const { return number; }
    bool takeSeat(const unsigned int rowNumber, const unsigned int seatNumber);
    bool isFull();
    const std::vector<std::vector<RoomSeat>> getRows() const { return rows; }
    const RoomSeat& getSeat(int rowNumber, int seatNumber) const { return rows.at(rowNumber).at(seatNumber); }

private:
    unsigned int number;
    std::vector<std::vector<RoomSeat>> rows;

};


