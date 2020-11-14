#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>

using namespace std;

class Song {
    friend ostream &operator<<(ostream &os, const Song &s);
    string name;
    string artist;
    int rating;
public:
    Song() = default;
    Song(string name, string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}
    string get_name() const {
        return name;
    }
    string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }
    
    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }
    
    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};

ostream &operator<<(ostream &os, const Song &s) {
    os << setw(20) << left << s.name
       << setw(30) << left << s.artist
       << setw(2) << left << s.rating;
       return os;
}

void display_menu() {
    cout << "\nF - Play First Song" << endl;
    cout << "N - Play Next song" << endl;
    cout << "P - Play Previous song" << endl;
    cout << "A - Add and play a new Song at current location" << endl;
    cout << "L - List the current playlist" << endl;
    cout << "===============================================" << endl;
    cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
   	cout << "Curretly Playing: " << endl;
   	cout << song;
}

void display_playlist(const list<Song> &playlist, const Song &current_song) {
    for (const auto &i : playlist) 
    	cout << i << endl;
    play_current_song(current_song);
}

int main() {

    list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  4},
            {"The Middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever It Takes", "Imagine Dragons",           3}          
    };
    
    list<Song>::iterator current_song = playlist.begin();

    display_playlist(playlist, *current_song);
    play_current_song(*current_song);
	char ch {};    
	do {
		display_menu();
		cin >> ch;
		switch (ch) {
			case 'F':
			case 'f': {
				current_song = playlist.begin();
				cout << "Playing first song" << endl;
				cout << "Playing:" << endl;
				cout << *current_song << endl;
				break;

			}

			case 'N':
			case 'n': {
				current_song++;
				if (current_song == playlist.end())
					current_song = playlist.begin();
				play_current_song(*current_song);
				break;
			}

			case 'P':
			case 'p': {
				if (current_song == playlist.begin()) {
					current_song = playlist.end();
				}
				play_current_song(*(--current_song));
				break;
			}

			case 'A':
			case 'a': {
				string song_name, artist;
				int rating;
				cin.clear();
            	cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout << "Enter the song name: ";
				getline(cin, song_name);
				cout << "Enter the artist: ";
				getline(cin, artist);
				cout << "Enter the rating: ";
				cin >> rating;
				playlist.emplace(current_song, Song{song_name, artist, rating});
				break;
			}

			case 'L':
			case 'l': {
				display_playlist(playlist, *current_song);
				break;
			}

			case 'Q': 
			case 'q': {
				cout << "Have a great time ahead!" << endl;
				break;
			}

			default: cout << "Invalid Choice!";
		}
	} while (ch != 'q' && ch != 'Q');
    cout << "Thanks for listening!" << endl;
    return 0;
}