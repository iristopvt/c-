#pragma once


#include "CPoint.h"
#include <string>

using namespace std;


class CShape
{	

public:
	
	CShape() {}; 
	~CShape() {};
	//int m_x, m_y; //사각형 중심점 = > CPoint 교체
	CPoint center;


	virtual void Area();
	virtual void Length();

	void Print(string str);

};


