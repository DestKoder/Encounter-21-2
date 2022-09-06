
#include "Shape.h"

#pragma once
class Circle : public Shape
{
	int center_x, center_y, radius;

	public:
		Circle(int center_x, int center_y, int radius) {
			this->center_x = center_x;
			this->center_y = center_y;
			this->radius = radius;
		}

		Circle() {
			center_x = 0;
			center_y = 0;
			radius = 0;
		}

		virtual void show() {
			cout << "Аля круг с центром в точке (" << corner_x << ";" << corner_y << ") и радиус " << len;
		}

		virtual void save(string filename) {
			ofstream out;

			out.open(filename);

			if (!out.is_open()) {
				cout << "Error saving shape" << endl;
				return;
			}

			out << center_x << endl << center_y << endl << radius << endl;

			out.close();
		}

		virtual void load(string filename) {
			ifstream in;

			in.open(filename);

			if (!in.is_open()) {
				cout << "Couldn't open file" << endl;
				return;
			}

			in >> center_x;
			in >> center_y;
			in >> radius;
		}

};

