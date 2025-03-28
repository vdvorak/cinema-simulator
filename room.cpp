#include "room.h"
#include <vector>

Room::Room(const unsigned int number, const unsigned int numberOfRows, const unsigned int numberOfSeats) : number(number) {
    this->number = number;
    rows.reserve(numberOfRows);
    for (int i = 0; i < numberOfRows; i++) {
        auto row = rows[i];
        row.reserve(numberOfSeats);

        for (int j = 0; j < numberOfSeats; j++) {
            row.emplace_back(j+1);
        }

        rows.push_back(std::move(row));
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
