#include <iostream>
#include <vector>

void fun(std::vector<int>&& par) //��ֵ����
{

}

int main()
{
	/*std::vector<int> x;
	fun(std::move(x));  //x�ǽ���ֵ����Դ�������¸�����
	const int y = 3;//��Ϊ��ȷ��
	const int& ref = y;
	int z = 7;
	int* ptr = &z;
	float* ptr2 = reinterpret_cast<float*>(ptr);
	int& ref2 = const_cast<int&> (ref);
	ref2 = 4;
	std::cout << y << std::endl;
	std::cout << *ptr2 << std::endl; */

    const int y = 3;
	short x;
	x = { y };
	std::cout << x << std::endl;

}