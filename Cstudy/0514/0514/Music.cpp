#include "Music.h"

MusicInfo::MusicInfo() :title("unknown"), genre("x"), singer("unknown"), releaseDate(""), playing("no data")
{
}





string MusicInfo::getTitle()
{
	return title;
}

string MusicInfo::getSinger()
{
	return singer;
}

string MusicInfo::getGenre()
{
	return genre;
}

string MusicInfo::getreleaseDate()
{
	return releaseDate;
}

string MusicInfo::getplaying()
{
	return playing;
}

void MusicInfo::Display()
{
	cout << title << "\t\t" << singer << "\t\t" << genre << "\t\t" 
		 << "\t\t" << playing << endl;
}


