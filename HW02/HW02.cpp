#include <iostream>
using namespace std;

// Animal 클래스 정의, 순수 가상함수 makeSound 포함
// Dog, Cat, Cow 
class Animal
{
public:
	Animal() {}
	virtual void makeSound() = 0;
	virtual ~Animal() {}
};

class Dog : public Animal
{
public:
	void makeSound() override {
		cout << "멍멍!\n";
	}
	~Dog() {}
};

class Cat : public Animal
{
public:
	void makeSound() override {
		cout << "야옹~\n";
	}
	~Cat() {}
};

class Cow : public Animal
{
public:
	void makeSound() override {
		cout << "음머~\n";
	}
	~Cow() {}
};

int main() {
	cout << " 동물 소리 \n";
	// Animal 타입의 포인터 배열 선언
	Animal* animals[3];

	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Cow();
	
	// 반복문 순회하며 울음소리 내게하기
	for (int i = 0; i < 3; ++i) {
		animals[i]->makeSound();
	}
	for (int i = 0; i < 3; ++i) {
		delete animals[i];
		animals[i] = nullptr;
	}
	return 0;
}

// Zoo 클래스 추가
// Animal 객체 포인터 받아 포인터 배열에 저장
// 동물원에 있는 모든 동물의 행동을 수행하는 함수
// Zoo 소멸자
// 랜덤 동물을 생성하는 함수 createRandomAnimal() 함수
