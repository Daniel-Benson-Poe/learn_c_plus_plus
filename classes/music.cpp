# include <iostream>
# include "song.hpp"

int main() {

    // Instantiate a new song using our class and the constructor parameters
    Song electric_relaxation("Electric Relaxation", "A Tribe Called Quest");

    // Use Song's built-in get_title method to retrieve title
    std::cout << "Artist: " << electric_relaxation.get_artist() << "\n";
    std::cout << "Song Title: " << electric_relaxation.get_title() << "\n";

    // Let's try renaming the song title
    electric_relaxation.add_title("Electronic Reverberation");

    // Now rename the artist
    electric_relaxation.add_artist("The Electronics");

    // Print out the new names
    std::cout << "Artist: " << electric_relaxation.get_artist() << "\n";
    std::cout << "Song Title: " << electric_relaxation.get_title() << "\n";
}