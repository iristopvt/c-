#pragma once
#include "CShape.h"



// �ڽ�Ŭ����      : public �θ� Ŭ����
class CRectangle : public CShape
{
public:
	CRectangle();
	~CRectangle();
	int m_width, m_height;
	int m_area;
	int m_length;

	void Area(int width, int height); //���� �Լ�
	void Length(); // �ѷ� ���ϴ� �Լ�
};

