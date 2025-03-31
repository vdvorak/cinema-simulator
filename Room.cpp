#include "Room.h"
#include <vector>

#include "Roomseat.h"

namespace Cinema {

    Room::Room(const unsigned int number, const unsigned int numberOfRows, const unsigned int numberOfSeats)
        : Number(number), m_Rows(numberOfRows) {

        for (int i = 0; i < numberOfRows; i++) {
            for (int j = 0; j < numberOfSeats; j++) {
                m_Rows[i].emplace_back(j+1);
            }
        }
    }

    bool Room::TakeSeat(const unsigned int rowNumber, const unsigned int seatNumber) {
        RoomSeat& seat = m_Rows.at(rowNumber).at(seatNumber);
        if(seat.GetIsTaken()){
            return false;
        }
        seat.SetTaken();
        return true;
    }

    bool Room::IsFull() {
        for (auto& row : m_Rows) {
            for (auto& seat: row) {
                if(!seat.GetIsTaken()){
                    return false;
                }
            }
        }

        return true;
    }

}
