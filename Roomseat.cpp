#include "Roomseat.h"

namespace Cinema {

    void RoomSeat::SetFree() {
        m_IsTaken = false;
    }

    void RoomSeat::SetTaken() {
        m_IsTaken = true;
    }


}
