#pragma once


#include "CPoint.h"
#include <string>

using namespace std;


class CShape
{	

public:
	
	CShape() {}; 
	~CShape() {};
	//int m_x, m_y; //�簢�� �߽��� = > CPoint ��ü
	CPoint center;


	virtual void Area();
	virtual void Length();

	void Print(string str);

};


