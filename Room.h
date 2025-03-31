#pragma once
#include "Roomseat.h"
#include <vector>

namespace Cinema {

    class Room
    {
    public:
        Room(const unsigned int number, const unsigned int numberOfRows, const unsigned int numberOfSeats);

        bool TakeSeat(const unsigned int rowNumber, const unsigned int seatNumber);
        bool IsFull();
        const std::vector<std::vector<RoomSeat>> GetRows() const { return m_Rows; }
        const RoomSeat& GetSeat(int rowNumber, int seatNumber) const { return m_Rows.at(rowNumber).at(seatNumber); }

        const unsigned int Number;

    private:
        std::vector<std::vector<RoomSeat>> m_Rows;
    };

}


