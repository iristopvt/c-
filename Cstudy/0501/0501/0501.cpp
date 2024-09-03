
#include "hh.h"

#include "CCircle.h"
#include "CRectangle.h"
#include "test.h"
#include "CBox.cpp"


using namespace std;

int main()
{
	
		
	CRectangle rect; //
	CCircle circle;
	test tex1;
	
	/*CPoint3* pv = new CPoint3[8];


	CBox box;*/
	
	rect.center.m_x = 10;
	rect.center.m_y = 10;

	rect.Area(10,10);
	
	//rect.Length();
	//CPoint p = rect.center;

	rect.m_width = 100;
	rect.m_height = 100;

	circle.center.m_x = 20;
	circle.center.m_y = 20;
	circle.radius = 10;



	circle.Area();
	//circle.Length();


	//-----test-----

	tex1.Area();
	tex1.Length();

	

	return 0;
}