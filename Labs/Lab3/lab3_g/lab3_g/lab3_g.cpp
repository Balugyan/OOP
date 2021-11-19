#include "Figure.h"


int main()
{
	
    double num1, num2;

	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;

	Triangle triangle{ num1, num2 };
	Rectangle rectangle{ num1, num2 };
	Circle circle{ num1 };
	Figure* figure = NULL;


	for (;;){
		int number;
	cout << "1. Area of triangle\n";
	cout << "2. Area of rectangle\n";
	cout << "3. Area of circle\n";
	cin >> number;

	switch (number) {
	case 1: {
		figure = &triangle;
		cout << "Via pointer: " << endl;
		figure->show(figure->getX(), figure->getY());
		cout << "Via objects: " << endl;
		triangle.show(triangle.getX(), triangle.getY());
		system("pause");
		system("cls");
		break;
	}
	case 2: {
		figure = &rectangle;
		cout << "Via pointer: " << endl;
		figure->show(figure->getX(), figure->getY());
		cout << "Via objects: " << endl;
		rectangle.show(rectangle.getX(), rectangle.getY());
		system("pause");
		system("cls");
		break;
	}
	case 3: {
		figure = &circle;
		cout << "Via pointer: " << endl;
		figure->show(figure->getX());
		cout << "Via objects: " << endl;
		circle.show(circle.getX(), circle.getY());
		system("pause");
		system("cls");
		break;
	}
	}
   }

}
    



