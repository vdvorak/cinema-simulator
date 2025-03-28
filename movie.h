#pragma once

class Movie
{
public:
    Movie(const char* title, const char* description, const unsigned int durationInMinutes) :
        title(title),
        description(description),
        durationInMinutes(durationInMinutes) {};

    const char* getTitle() const { return title; }
    const char* getDescription() const { return description; }
    const unsigned int getDurationInMinutes() const { return durationInMinutes; }

private:
    const char* title;
    const char* description;
    const unsigned int durationInMinutes;};

