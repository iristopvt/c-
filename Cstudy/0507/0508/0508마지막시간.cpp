#include "h.h"

int main()
{
	/*int num = 10;
	float  fnum;*/

	//fnum = (float)num; //Ÿ�� ĳ���� int -> float ������ ����

	//cout << fnum << endl;
	//printf("%f\n", fnum);


	//double b = (double)num;

	//printf("%09f\n", b);
	//cout << b << endl;


	//2.static_cast <Ÿ��>
	//double dnum = 3.141592;

	//int d = static_cast<int>(dnum);

	//cout << d << endl;

	//3. ����ĳ����

	/*class Animal {
		void foo(){} 
	};

	class Dog : public Animal
	{

	};

	Dog* parentptr = new Dog();
	Animal* dog = dynamic_cast<Animal*>(parentptr);
*/


	//4. ��� ĳ����  ( const_cast)
	const float i = 3.14;

	float* num = const_cast<float*>(&i);
	*num = 5.000;
	cout << "i:" << i << endl;



	return 0;

}