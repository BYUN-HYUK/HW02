#include <iostream>
using namespace std;

// Animal Ŭ���� ����, ���� �����Լ� makeSound ����
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
		cout << "�۸�!\n";
	}
	~Dog() {}
};

class Cat : public Animal
{
public:
	void makeSound() override {
		cout << "�߿�~\n";
	}
	~Cat() {}
};

class Cow : public Animal
{
public:
	void makeSound() override {
		cout << "����~\n";
	}
	~Cow() {}
};

int main() {
	cout << " ���� �Ҹ� \n";
	// Animal Ÿ���� ������ �迭 ����
	Animal* animals[3];

	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Cow();
	
	// �ݺ��� ��ȸ�ϸ� �����Ҹ� �����ϱ�
	for (int i = 0; i < 3; ++i) {
		animals[i]->makeSound();
	}
	for (int i = 0; i < 3; ++i) {
		delete animals[i];
		animals[i] = nullptr;
	}
	return 0;
}

// Zoo Ŭ���� �߰�
// Animal ��ü ������ �޾� ������ �迭�� ����
// �������� �ִ� ��� ������ �ൿ�� �����ϴ� �Լ�
// Zoo �Ҹ���
// ���� ������ �����ϴ� �Լ� createRandomAnimal() �Լ�
