#include <iostream>
#include "movie.h"
#include "room.h"

void printRoom(Room& room) {
    std::cout << "Room: " << room.getNumber() << std::endl;
    for(int i = 0; i < room.getRows().size(); i++) {
        auto row = room.getRows().at(i);
        for(int j = 0; j < row.size(); j++) {
            auto seat = row.at(j);
            std::cout << "[" << (seat.getIsTaken() ? "X" : std::to_string(seat.getNumber()).c_str()) << "]";
        }
        std::cout << std::endl;
    }
}


int main()
{

    Movie movie{"The lord of the rings the fellowship of the ring", "LOTR description", 180};

    Room room{1,2,5};
    printRoom(room);

    return 0;
    std::cout << "Welcome to my Cinema simulator" << std::endl;
    std::cout << "What would you like to do today ?" << std::endl;

    std::cout  << "1. Login as admin" << std::endl;
    std::cout  << "2. Make an online reservation" << std::endl;
    std::cout  << "3. Visit cinema as a customer" << std::endl;
    return 0;
}


