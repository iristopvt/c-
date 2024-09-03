#pragma once
#include "h.h"

//1 장르를 입력하면 해당 장르의 음악 목록 출력
//2 번째는 제목 을 입력하면 화면상에 현재 어떤곡이 플레이 중입니다라는 식으로
//3 가수이름을 입력하면 해당 가수가 부른 노래를 출력하기

class Music
{
private:
	string Genre; //장르 이름
	string Title; //노래 제목
	string name; // 가수 이름 


public:

	Music(string Genre,string Title, string name);
	enum class Mygenre { main1, jpop, kpop, rock };
	enum class Mytitle { };
	void genre(); // 장르를 입력함변 장르의 음악 목록을  출력

};



