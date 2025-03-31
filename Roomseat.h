#pragma once

namespace Cinema {

    class RoomSeat
    {

    public:
        RoomSeat(const unsigned int number)
            : Number(number)
        {
        }

        bool GetIsTaken() const { return m_IsTaken; }

        const unsigned int Number;

    private:
        void SetTaken();
        void SetFree();
        bool m_IsTaken = false;
        friend class Room;
    };

}

