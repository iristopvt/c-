#pragma once
#include "CShape.h"



// 자식클래스      : public 부모 클래스
class CRectangle : public CShape
{
public:
	CRectangle();
	~CRectangle();
	int m_width, m_height;
	int m_area;
	int m_length;

	void Area(int width, int height); //면적 함수
	void Length(); // 둘레 구하는 함수
};

