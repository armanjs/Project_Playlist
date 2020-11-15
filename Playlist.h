//
// Created by Arman Sadeghi on 11/14/20.
//

#ifndef PROJECTPLAYLIST_PLAYLIST_H
#define PROJECTPLAYLIST_PLAYLIST_H
#include <string>
using namespace std;

class Playlist{
public:
    Playlist();
    void skip();
    void previous();
    void shuffle();
    void repeat();

private:
    int length;
    int rating;
};

class track : public Playlist{
public:
    track();
    string name;
    string artist;
    string album;
    int duration;
    int releaseDate;
};

track::track() {
    name = "";
    artist = "";
    album = "";
    duration = 0;
    releaseDate = 0;
}

#endif //PROJECTPLAYLIST_PLAYLIST_H
