# include <string>

// Classes are created in the header file
class Song {
    // attributes
    std::string title;
    std::string artist;
/*
 Public used to make everything below it accessible 
 outside the class. Default is private
*/
public: 
    // Add method declaration accepting new title for a song
    void add_title(std::string new_title);

    // Add method declaration that returns the title name
    std::string get_title();

    // Add method declaration accepting new name for an artist
    void add_artist(std::string new_artist);

    // Add method declaration that returns the artist name
    std::string get_artist();

    // Declare constructor with two parameters
    Song(std::string new_title, std::string new_artist);

    // Declare a destructor
    ~Song();

};
