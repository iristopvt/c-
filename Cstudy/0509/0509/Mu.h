#pragma once
#include "h.h"

//1 �帣�� �Է��ϸ� �ش� �帣�� ���� ��� ���
//2 ��°�� ���� �� �Է��ϸ� ȭ��� ���� ����� �÷��� ���Դϴٶ�� ������
//3 �����̸��� �Է��ϸ� �ش� ������ �θ� �뷡�� ����ϱ�

class Music
{
private:
	string Genre; //�帣 �̸�
	string Title; //�뷡 ����
	string name; // ���� �̸� 


public:

	Music(string Genre,string Title, string name);
	enum class Mygenre { main1, jpop, kpop, rock };
	enum class Mytitle { };
	void genre(); // �帣�� �Է��Ժ� �帣�� ���� �����  ���

};



