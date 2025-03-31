#pragma once

namespace Cinema {

    enum class MovieGenre
    {
        Comedy = 0,
        Sci_Fi,
        Cartoon,
        Thriller
    };

    struct Movie {
        Movie(const char* title, MovieGenre genre, const char* description, int durationInMinutes)
            : Title(title), Genre(genre), Description(description), DurationInMinutes(durationInMinutes)
        {
        }

        const char* Title;
        const MovieGenre Genre;
        const char* Description;
        const int DurationInMinutes;
    };

}
