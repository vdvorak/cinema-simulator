#include <iostream>
#include "Movie.h"
#include "Room.h"



void printRoom(Cinema::Room& room) {
    std::cout << "Room: " << room.Number << std::endl;
    for(int i = 0; i < room.GetRows().size(); i++) {
        auto row = room.GetRows().at(i);
        for(int j = 0; j < row.size(); j++) {
            auto seat = row.at(j);
            std::cout << "[" << (seat.GetIsTaken() ? "X" : std::to_string(seat.Number).c_str()) << "]";
        }
        std::cout << std::endl;
    }
}


int main()
{
    Cinema::Movie movie{"The lord of the rings the fellowship of the ring", Cinema::MovieGenre::Sci_Fi, "LOTR description", 180};

    Cinema::Room room{1,2,5};

    printRoom(room);

    return 0;
    std::cout << "Welcome to my Cinema simulator" << std::endl;
    std::cout << "What would you like to do today ?" << std::endl;

    std::cout  << "1. Login as admin" << std::endl;
    std::cout  << "2. Make an online reservation" << std::endl;
    std::cout  << "3. Visit cinema as a customer" << std::endl;
    return 0;
}




