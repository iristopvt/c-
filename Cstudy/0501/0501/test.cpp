#include "test.h"
#include "hh.h"
#include "CShape.h"


test::test()
{
	m_width = 0;
	m_height = 0;
	m_area = 0;
	m_length = 0;
}

test::~test()
{
}

void test::Area()
{
	m_area = (m_width * m_height) / 2 ;
	Print("test::Area()");

}

void test::Length()
{
	m_length = m_height * 3;
	Print("test::Length()");
}
