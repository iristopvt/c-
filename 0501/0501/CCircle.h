#pragma once
#include "CShape.h"

// �ڽ�Ŭ����      : public �θ� Ŭ����
class CCircle :  public CShape
{
public:

	CCircle(); // 
	~CCircle();

	int radius;
	int m_area;
	int m_length;

	void Area(); // �� ���� ���ϴ� �Լ�
	void Length(); // �� �ѷ� ���ϴ� �Լ�
	
};

