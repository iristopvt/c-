
#include "hh.h"
#include "CRectangle.h"
#include "CShape.h"

CRectangle::CRectangle()
{
	m_width = 10;
	m_height = 10;
	m_area = 0;
	m_length = 0;
}

CRectangle::~CRectangle()
{
}

void CRectangle::Area(int width, int height)
{
	width = m_width;
	height = m_height;
	m_area = m_width * m_height;
	cout << "CRectangle::Area()"<< m_area << "\n";
	//Print("CRectangle::Area()") << m_area;
	//cout << "CShape::Area()" << endl;

}



void CRectangle::Length()
{

	m_length = (m_width + m_height) * 2;
	printf("CRectangle::Length()");
	//cout << "CShape::Length()" << endl;
}
