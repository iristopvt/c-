#pragma once
#include "CShape.h"

class test : public CShape
{
public:
	test();
	~test();
	

	int m_width, m_height; // ��, ��
	int m_area;
	int m_length;

	void Area();
	void Length();
};

