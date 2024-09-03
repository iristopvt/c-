
// 컴파일 4단계
// 1. 전처리기
//  - 주석 삭제
//  - 매크로 치환
//  - #... 처리
// 2. 컴파일러
//  - 고수준 언어를 저수준 언어(어셈블리어)로 변환
// 3. 어셈블러
//  - 저수준 언어를 기계어 변환
// 4. 링커
//  - 파일 합치기


//메모리 4영역

// 1. code영역 (코드영역)
// 실행할 프로그램의 코드가 저장되는 영역
// 코드(code)영역 혹은 텍스트(text)영역이라고도 부름
// 2. data영역 (데이타영역)
// 전역변수,정적변수,배열,구조체등이 저장
// - 초기화된 데이터는 data영역에 저장되며,
// - 초기화 되지 않은 데이터는 BSS영역에 저장
// 프로그램이 실행 될때 생성되고 프로그램이 종료되면 시스템에 반환 된다.

// 생성주기 : 프로그램 실행/정료
// -> 장점: 어디서나 갖고와서 쓸 수 있다.
// -> 단점: 어디서나 갖고와서 쓸 수 있다. //메모리 해제를 시킬 수 없다.

// 3. heap 영역 (힙 영역)
// 필요에 의해 동적으로 메모리를 할당 하고자 할때 위치하는 메모리 영역
// 사용자 영역, 프로그래머 영역, 크기가 제일 큼
// 생성주기 : 사용자 마음대로
// -> 장점: 내 마음대로 할당하고 해지할 수 있다.
// -> 단점: 메모리 누수

// 4. stack 영역 (스택영역)
// 프로그램이 자동으로 사용하는 임시 메모리 영역
// 지역 변수, 매개변수, 리턴 값이 잠시 사용되었다가 사라지는 데이터를 저장하는 영역
// 함수 호출시 생성되고, 함수가 끝나면 시스템에 반환
// 생성주기 : 함수가 호출되었을 때/ 함수가 종료되었을 때
// -> 장점: 비교적 전역보단 생성 주기를 제어할 수 있다.
// -> 단점: 여전히 내가 직접 생성주기를 제어할 수 없다.

// ****포인터 (* )
// 포인터는 변수의 메모리 주소를 저장하는 변수
// 다른 변수나 데이터 구조를 가르키거나 참조할수 있음
// ****포인터는 간접적으로 데이터를 조작할수 있도록 함 
// (포인터를 통해 실제 데이터에 접근하고 조작 할수 있음)
// 포인터는 동적 메모리 할당 및 해제, 배열 및 구조체의 요소에 접근,함수 인자 전달등에 사용



// 참조 (& )
// 포인터와 마찬가지로, 메모리의 다른 위치에 있는 개체의 주소를 저장 
// 
// 포인터와 참조의 차이점
// 포인터는 NULL값을 가질 수 있고, 참조는 가질 수 없다.
// 포인터는 저장 된 주소를 변경하여 다른 개체에 접근할 수 있지만, 
//     참조는 초기화 된 후에는 다른 개체에 접근할 수 없다.


//struct 사용자가 정의하는 자료형 

//struct 와 classs 는 99프로 일치 거의 같다 
// struct 와 class 의 차이
// struct 는 기본접근 지정자가 public, class는 private 
// class 의 접근 지정자 private, public, protected 
// public 에 선언된 멤버는 어디서든 접근 가능
// private 에 선언된 멤버는 외부에서 접근할수 없고 오직 해당 클래스 내부에서만 접근가능 
// protected로 선언된 멤버는 외부에서는 직접 접근할 수 없지만
//    , 해당 클래스와 해당 클래스를 상속한 하위 클래스에서는 접근가능 

// Class // 건물 설계도와 비슷
//  - 3속성
//  - 은닉성 (캡슐화)
//  - 상속성
//  - 다형성

// 캡슐화
// 데이터를 보호하고, 데이터에 대한 접근을 제한하여 외부로부터 숨기는 것을 의미
// 캡슐화는 클래스의 내부 구현 세부 사항을 숨기고, 
//    사용자에게 필요한 인터페이스만 제공하여 모듈성을 향상시킵니다.
// private로 데이터를 캡슐화 publlc 에서 불러와 사용할수 있음

// 상속
// 기존 클래스(부모 클래스)의 속성과 메서드를 상속받아 재사용
// 새로운 클래스는 기존 클래스의 특성을 물려받아 새로운 기능을 추가하거나 기존 기능을 수정

// 다형성
// 같은 이름의 메서드가 다양한 방법으로 동작 할 수 있도록 하는 것을 의미
// 다형성은 주로 "함수 오버로딩" 과 "함수 오버라이딩" 을 통해 구현 
// ***
// - 함수오버로딩(함수이름이 같고, 매개변수 형식이나 자료형이 다른 것을 정의), 
// - 함수오버라이딩(부모의 함수를 자식에서 재정의)

//가상함수란
// 부모클래스에서 "virtual(버추얼)" 키워드를 선언한 함수
// 자식클래스에서 "virtual" 를 쓴 (가상함수)를 재정의 가능 
// 가독성과 명확성을 위해 "override" 를 사용하는 것이 좋음

//순수가상함수
// 가상함수와 똑같이 "virtual" 을 쓰지만,
//   함수안에 구현이 없고 "=0"으로 정의된 함수를 순수가상함수 
// 함수안에 내용이 없고 이름만 있는 "**빈껍데기 함수**"
// 


//추상클래스 
// 하나 이상의 순수가상함수를 포함
// 추상클래스는 직접 객체를 생성할수 없음
// 추상클래스는 주로 공통된 동작이나 인터페이스를 정의할때 사용
// 다른 클래스의 부모 클래스로 사용됨
// "**순수가상함수만을**" 하나 이상 포함하고 있는 클래스



//동적할당
// 프로그램 실행 중에 메모리를 할당하고 해제하는 프로세스
// 프로그램 실행중에 메모리를 필요로 할 때만 할당되며, 필요 없어지면 다시 해제됨
// "new" 연산자를 사용하여 동적 할당을 수행하고
// "delete"연산자를 사용하여 할당된 메모리를 해제

// 장점 
// 유연성 : 프로그램 실행 중에 메모리 요구 사항을 동적으로 조정할수 있다
// 자원관리 : 필요한 만큼의 메모리를 할당하고, 사용이 끝나면 해제하여 자원의 효율적인 사용
// 동적 데이터 구조 : 동적 할당을 사용하여 동적으로 크기가 조정되는 데이터 구조를 생성

// 사용법
// int* ptr = new int; // int형 변수를 동적으로 할당하여 ptr이 가리킴
// 할당된 메모리는 프로그램이 직접 해제 하기 전까지 계속 유지
// 해제 
// delete ptr; // ptr이 가리키는 메모리 해제




///////
// 0612 싱글톤

// 클래스의 생성을 딱! 1개로 정한다는 뜻 
// 생성한 클래스의 객체는 static(스태틱)로 생성 
// 똑같은 클래스 정보가 2개 이상 늘어나면 안된다.. ?

// 디자인 패턴
// 소프트웨어를 설계할 때 자주 나타나는 패턴을 정형화 해둔 것
// 싱글톤 패턴
// 특정 클래스의 인스턴스가 오직 하나임을 보장하고 이 인스턴스에 접근할 방법을 제공
// 
//퍼사드 패턴
// 서브시스템의 가장 앞쪽에 위치, 하위 시스템의 객체들을 사용할 수 있도록 하는 역활 을 하는 패턴
// 복잡성을 줄이기 위해 서브시스템을 구조화 하고 서브시스템으로의 접근을 퍼사드객체로 제공
// 
//옵저버 패턴
// 객체의 상태변화를 감지하는 옵저버를 두고, 이들의 목록을 객체에 등록하여 상태 변화가 있을 때 마다
// 객체가 직접 목록의 옵저버에게 통지하도록 하는 패턴
// 
// 스트래티지 패턴

//팩토리 패턴 


// static 변수와 static 함수
// static 변수
// 특정 클래스나 함수 내에서 정의 되지만 해당 클래스나 함수의 인스턴스에 속하는 것이 아니라 
// 프로그램이 실행되는 동안 메모리에 지속 
// 이는 변수가 해당 함수나 클래스를 벗어나 프로그램의 다른 부분에서도 계속 사용될 수 있음을 의미
// 프로그램 실행 시작 시 할당되고 프로그램 종료 시 해제
//

//콜백함수 
//
//
void add(int a, int b, double v);
void add(int a, double c);