#pragma once
#include "main.h"
#include <vector>

struct Song 
{
    string title;
    string album;
    int year;
};



class Music
{
public:
    string name; //가수
	
	vector<Song> song; //노래를 벡터로 

	void aaa(); //가수를 입력받으면 찾기
	

    Music(string name, vector<Song> song) : name(name), song(song) {}
};

//map<key,value>

//map<string , vector<MusicInfo>> myMap;

//myMap.find("가수이름")


//vector <MusicInfo> myvect = myMap[key]



























struct Song {
    string title;
    string album;
    int year;
};

class Artist {
public:
    string name;
    vector<Song> songs;

    Artist(string name, vector<Song> songs) : name(name), songs(songs) {}
};

vector<Artist> initializeData() {
    vector<Artist> artists;
    artists.push_back(Artist("Artist1", {
        {"Song1", "Album1", 2001},
        {"Song2", "Album2", 2002},
        {"Song3", "Album3", 2003}
        }));
    artists.push_back(Artist("Artist2", {
        {"SongA", "AlbumA", 2010},
        {"SongB", "AlbumB", 2011},
        {"SongC", "AlbumC", 2012}
        }));
    return artists;
}

void displaySongInfo(const Song& song) {
    cout << "Title: " << song.title << endl;
    cout << "Album: " << song.album << endl;
    cout << "Year: " << song.year << endl;
}

void displaySongs(const vector<Song>& songs, int selected) {
    system("cls"); // clear screen
    for (int i = 0; i < songs.size(); ++i) {
        if (i == selected) {
            cout << "-> ";
        }
        else {
            cout << "   ";
        }
        cout << songs[i].title << endl;
    }
}

int main() {
    vector<Artist> artists = initializeData();
    string artistName;

    cout << "Enter artist name: ";
    getline(cin, artistName);

    vector<Song>* songs = nullptr;
    for (Artist& artist : artists) {
        if (artist.name == artistName) {
            songs = &artist.songs;
            break;
        }
    }

    if (!songs) {
        cout << "Artist not found." << endl;
        return 1;
    }

    int selected = 0;
    bool running = true;

    while (running) {
        displaySongs(*songs, selected);

        int ch = _getch();
        switch (ch) {
        case 72: // up arrow key
            selected = (selected - 1 + songs->size()) % songs->size();
            break;
        case 80: // down arrow key
            selected = (selected + 1) % songs->size();
            break;
        case 13: // enter key
            displaySongInfo((*songs)[selected]);
            cout << "Press any key to continue..." << endl;
            _getch();
            break;
        case 27: // escape key
            running = false;
            break;
        }
    }

    return 0;
}