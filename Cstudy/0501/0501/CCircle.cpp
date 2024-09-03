#include "hh.h"
#include "CCircle.h"


CCircle::CCircle()
{
	radius = 0;
	m_area = 0;
	m_length = 0;

}

CCircle::~CCircle()
{
}

void CCircle::Area()
{
	m_area = PI * radius*radius;
	Print("CCircle::Area()");
}

void CCircle::Length()
{
	m_length = 2 * PI * radius;
	Print("CCircle::Length()");
}
