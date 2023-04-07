#include <iostream>
#include <string>

struct myDate {
	int day = 1;
	int month = 1;
	int year = 1970;
};
struct myPerson {
	std::string name = "noname";
	myDate birthday;
	std::string job = "programer";
	int  salary = 35000;
};

void print_myPerson(const myPerson& MP) {
	std::cout << "Name : " << MP.name << std::endl;
	std::cout << "Birthtday : " <<
		MP.birthday.day << "." <<
		MP.birthday.month << "." <<
		MP.birthday.year << std::endl;
	std::cout << "Job    : " << MP.job << std::endl;
	std::cout << "Salary : " << MP.salary << std::endl;
}

myPerson input_myPerson() {
	myPerson tmp;
	std::cout << "Enter name -> ";
	std::getline(std::cin, tmp.name);
	
	std::cout << "Enter birthday day -> ";
	std::cin >> tmp.birthday.day;

	std::cout << "Enter birthday month -> ";
	std::cin >> tmp.birthday.month;

	std::cout << "Enter birthday year -> ";
	std::cin >> tmp.birthday.year;
	std::cin.ignore();

	std::cout << "Enter job -> ";
	std::getline(std::cin, tmp.job);

	std::cout << "Enter salary -> ";
	std::cin >> tmp.salary;

	return tmp;
}

struct coinsKeeper{ // Задача 1
	std::string name = "no name";
	int age = 0;
	int coins_number = 0;
	int* coins = nullptr;
};
void print_coinsKeeper(const coinsKeeper& CK); // Задача 1
inline int year_of_birth(const coinsKeeper& Ck, int year); // Задача 1
int cash(const coinsKeeper& CK); // Задача 1



int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//Структура 
	//Структуры - это описание множества состоящего из одного или более переменных, возможно имеющих различные типы, 
	//объединенных под одним именем.Является производным пользовтельским типом данных, используемым для создания объекта
	
	// Структура person
	/*struct person {     // Структкра person описываюшая содержимое объекта 
		std::string name; // Поле структуры тип string с именем персоны 
		int age;            // Поле структуры тип ште с возрастом персоны 
		std::string gender;
		std::string job;
		int salary;   
	} p1, p2{"Sakura Horuna", 23, "femaile", "actres", 65000}; // Создание объектов структры, один из которых мгновено инициализируется  
	
	
	// ОБращение к полям объектов, как к обычным переменным 
	p1.name = "Mark Smith";
	p1.age = 25;
	p1.gender = "male";
	p1.job = "programer";
	p1.salary = 80000;

	std::cout << "Name:   " << p1.name << std::endl;
	std::cout << "Age:    " << p1.age << std::endl;
	std::cout << "Gender: " << p1.gender << std::endl;
	std::cout << "Job:    " << p1.job << std::endl;
	std::cout << "Salary: " << p1.salary << std::endl;
	std::cout << "--------------------------------\n";
	std::cout << "Name:   " << p2.name << std::endl;
	std::cout << "Age:    " << p2.age << std::endl;
	std::cout << "Gender: " << p2.gender << std::endl;
	std::cout << "Job:    " << p2.job << std::endl;
	std::cout << "Salary: " << p2.salary << std::endl;
	
	person p3{ // Альтернативный способ создания объекта 
		"Cris Bumsted",
		37,
		"mail",
		"Bodybilder",
		150000
	};

	person p4 = p3; // Копировние значений полей объекта p3 в объект p4
	std::cout << "--------------------------------\n";
	std::cout << "Name:   " << p4.name << std::endl;
	std::cout << "Age:    " << p4.age << std::endl;
	std::cout << "Gender: " << p4.gender << std::endl;
	std::cout << "Job:    " << p4.job << std::endl;
	std::cout << "Salary: " << p4.salary << std::endl;*/

	// Cтруктура date
	
	/*struct date { // Структура с полями по умолчанию 
		int day = 1;
		int month = 1;
		int year = 1970;
		std::string note = "empty";
	};

	date d1{ 13, 11, 2023 };
	std::cout << d1.day << ".";
	std::cout << d1.month << ".";
	std::cout << d1.year << " - ";
	std::cout << d1.note  << std::endl; // 13.11.2023 - empty*/
	
	// Структуры myDate и myPerson
	/*myPerson mp{
		"Ivan Ivanov",
		{29, 07, 1998},
		"Disigner",
		90000
	};
	print_myPerson(mp);

	myPerson* pointer = &mp;
	std::cout << pointer->name << std::endl;

	myPerson mp2 = input_myPerson();
	std::cout << "----------------------------------\n";
	print_myPerson(mp2);*/

	// Задача 1. Хранитель монет
	std::cout << "Задача 1.\nОбъект:\n";
	coinsKeeper ck{
		"Petr",
		10,
		7,
		new int[7]{5, 1, 1, 2, 5, 2, 1}
	};
	print_coinsKeeper(ck);
	std::cout << "Год рождения: " << year_of_birth(ck, 2023) << std::endl;
	std::cout << "Общик сбрежения : " << cash (ck) << std::endl;
	



	delete[] ck.coins;





	return 0;
}
void print_coinsKeeper(const coinsKeeper& CK) {  // Задача 1
	std::cout << "Имя: " << CK.name << std::endl;
	std::cout << "Возраст: " << CK.age << std::endl;
	std::cout << "Монеты : ";
	for (int i = 0; i < CK.coins_number; i++)
		std::cout << CK.coins[i] << " ";
	std::cout << std::endl;
}
inline int year_of_birth(const coinsKeeper& Ck, int year) { // Задача 1
	return year - (Ck.age);
}
int cash(const coinsKeeper& CK) {  // Задача 1
	int sum = 0;
	for (int i = 0; i < CK.coins_number; i++)
		sum += CK.coins[i];
	return sum;
}














































































































































































































































































































































