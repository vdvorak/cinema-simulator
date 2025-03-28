#include "room.h"
#include <vector>

#include "roomseat.h"

Room::Room(const unsigned int number, const unsigned int numberOfRows, const unsigned int numberOfSeats) : number(number), rows(numberOfRows) {
    this->number = number;

    for (int i = 0; i < numberOfRows; i++) {
        for (int j = 0; j < numberOfSeats; j++) {
            rows[i].emplace_back(j+1);
        }
    }
}

bool Room::takeSeat(const unsigned int rowNumber, const unsigned int seatNumber) {
    RoomSeat& seat = rows.at(rowNumber).at(seatNumber);
    if(seat.getIsTaken()){
        return false;
    }
    seat.setTaken();
    return true;
}

bool Room::isFull() {
    for (auto& row : rows) {
        for (auto& seat: row) {
            if(!seat.getIsTaken()){
                return false;
            }
        }
    }

    return true;
}
