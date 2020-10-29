# include <iostream>
# include "song.hpp"  // Allows access to header file for method definitions

// add Song method definitions here:
void Song::add_title(std::string new_title) {

    title = new_title;
}

std::string Song::get_title() {

    return title;

}

void Song::add_artist(std::string new_artist) {

    artist = new_artist;
}

std::string Song::get_artist() {

    return artist;
}

// Define the constructor allowing initialization of
// title and artist on new class creation
Song::Song(std::string new_title, std::string new_artist)
    : title(new_title), artist(new_artist) {}

// Define the destructor that outputs a "Goodbye" string
Song::~Song() {

    // Final cleanup
    std::cout << "Goodbye " << title << "\n";
}