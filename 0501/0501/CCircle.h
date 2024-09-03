#pragma once
#include "CShape.h"

// 자식클래스      : public 부모 클래스
class CCircle :  public CShape
{
public:

	CCircle(); // 
	~CCircle();

	int radius;
	int m_area;
	int m_length;

	void Area(); // 구 면적 구하는 함수
	void Length(); // 구 둘레 구하는 함수
	
};

