#include <iostream>

struct People
{
// public : 
	int age;
	int height;

private :
	char name[256];
};
// 사용자 정의 자료형

class cPeople
{
	// 접근제한 지정자 -> 중요한 데이터를 감춰두어서. 클일날 위험 줄여주게끔.
private:
	int age;
	int height;

public :
	char name[256];
};

// 구조체와 클래스의 차이는
// 구조체는 디폴트 접근제한 지정자가 public :
// 클래스는 디폴트 접근제한 지정자가 private :

int main()
{
	// 자료구조

	// 구조체, 클래스

	People moonHyun;

	moonHyun.age = 10;

	cPeople moonSeon;
	// moonSeon

	return 0;
}