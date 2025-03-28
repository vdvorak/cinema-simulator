#pragma once

#include "movie.h"

class MovieSession
{
    MovieSession(const unsigned int roomNumber, Movie& movie) : roomNumber(roomNumber), movie(movie) {};

private:
    const unsigned int roomNumber;
    Movie& movie;
};


