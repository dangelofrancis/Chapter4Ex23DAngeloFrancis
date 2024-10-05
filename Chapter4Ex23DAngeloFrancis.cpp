//
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// defining variables
	int choice;
	int radius;
	double pi = 3.14159;
	double area;
	double height;
	double length;
	double width;
	double base;

	while (true)
	{
		cout << "Geometry Calculator" << endl << endl;
		cout << "1. Calculate the area of a circle." << endl;
		cout << "2. Calculate the area of a rectangle." << endl;
		cout << "3. Calculate the area of a triangle." << endl;
		cout << "4. Quit." << endl << endl;
		cout << "Enter your choice (1-4): ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << endl << "Enter the radius of the circle: "; // user inputs radius
			cin >> radius;

			if (radius < 1)
			{
				cout << "The radius you entered is invalid." << endl << endl;
				break;
			}

			area = pow((radius * pi), 2); // calculate area of circle

			cout << endl << "The area of this circle is " << area << endl << endl;
		case 2:
			cout << endl << "Enter the length of the rectangle: "; // user inputs length
			cin >> length;

			if (length < 1)
			{
				cout << "The length you entered is invalid" << endl << endl;
				break;
			}

			cout << endl << "Enter the width of the rectangle: "; // user inputs width
			cin >> width;

			if (width < 1)
			{
				cout << "The width you entered is invalid" << endl << endl;
				break;
			}

			area = (length * width); // calculate area of rectangle

			cout << endl << "The area of this rectangle is " << area << endl << endl;
		case 3:
			cout << endl << "Enter the base of the triangle: "; // user inputs base
			cin >> base;

			if (base < 1)
			{
				cout << "The base you entered is invalid." << endl << endl;
				break;
			}

			cout << endl << "Enter the height of the triangle: "; // user inputs height
			cin >> height;

			if (height < 1)
			{
				cout << "The height you entered is invalid." << endl << endl;
				break;
			}

			area = (base * height) * 0.5; // calculate area of triangle

			cout << "The area of this triangle is " << area << endl << endl;
		case 4:
			return 0;
		default:
			cout << "The number entered is invalid";
			break;
		}
	}
}
