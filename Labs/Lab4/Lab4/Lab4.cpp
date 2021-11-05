#include "DB.h"

int DB::size = 5;

int main()
{
	srand(time(NULL));

	DB* temp = new DB();
	int size_ = temp->getSize();
	DB* obj = new DB[size_];

	int num;

	for (;;) {
		obj->show();
		std::cout << "\nEnter a number" << endl;
		std::cout << "1. Add " << endl;
		std::cout << "2. Delete " << endl;
		std::cout << "3. Sort " << endl;
		std::cout << "4. Exit" << endl;
		std::cin >> num;
		if (std::cin.fail())break;
		std::system("cls");
		switch (num)
		{
		case 1:
			obj->add();
			obj->show();
			std::system("pause");
			std::system("cls");
			break;

		case 2:
			obj->del();
			obj->show();
			std::system("pause");
			std::system("cls");
			break;

		case 3:
			obj->sort(*obj);
			obj->show();
			std::system("pause");
			std::system("cls");
			break;
		}
		if (num == 4)
			break;
	}
	return 0;

}
