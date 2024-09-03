// 0509.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "h.h"
#include "Mu.h"


int main() {
  
    int choice; // 사용자 선택 변수
    cout << "1. 장르별 음악 목록 출력하기\n";
    
    cin >> choice; // 사용자로부터 선택 받기

    switch (choice) {
    case 1: {
        string genre;
        cout << "Enter genre (jpop, kpop, rock): ";
        cin >> genre; // 사용자로부터 장르 입력 받기
        Music music("", "", ""); // 임시 Music 객체 생성
        music.genre(); // 입력한 장르의 음악 리스트 출력
        break;
    }
    case 2: {
        string Title;
        cin >> Title; // 사용자로부터 제목 입력 받기
        //리스트에서 해당 제목 찾기
        // 해당 리스트를 플레이 중입니다 출력
    }

    case 3: {
        string name; 
        cin >> name; // 가수 이름 입력
        //리스트에서 해당가수가 부른 노래들 찾기
        //해당가수가 부른 노래 리스트 출력 

    }

    default:
        cout << "Invalid choice\n"; // 잘못된 선택일 경우 메시지 출력
        break;
    }

    return 0;
}

/*
int main()
{
	
	Music music;

	////  case 2: {
 ////       string title;
 ////       cout << "Enter song title: ";
 ////       cin >> title; // 사용자로부터 노래 제목 입력 받기
 ////       // 노래 재생 함수 호출
 ////       break;
 ////   }
 ////   case 3: {
 ////       string artist;
 ////       cout << "Enter artist name: ";
 ////       cin >> artist; // 사용자로부터 가수 이름 입력 받기
 ////       // 가수 노래 출력 함수 호출
 ////       break;
 ////   }
 ////   case 4: {
 ////       // 전체 음악 리스트 출력
 ////       break;
 ////   }
	////


	/*switch (M)
	{
	default:
		break;
	}*/
   


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
