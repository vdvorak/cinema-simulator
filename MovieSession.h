#pragma once

#include "Movie.h"

namespace Cinema {

    struct MovieSession
    {
        MovieSession(const unsigned int roomNumber, Movie& movie)
            : RoomNumber(roomNumber), SessionMovie(movie)
        {
        }

        const unsigned int RoomNumber;
        const Movie& SessionMovie;
    };

}
