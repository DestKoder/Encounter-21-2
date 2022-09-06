#pragma once
#include "Shape.h"
class Trapeze : public Shape
{
	int base_1, base_2, height;

public:

	Trapeze() {
		base_1 = 0;
		base_2 = 0;
		height = 0;
	};

	Trapeze(int base_1, int base_2, int height) {
		this->base_1 = base_1;
		this->base_2 = base_2;
		this->height = height;
	}

	virtual void show() {
		cout << "Аля трапеция с основаниями " << base_1 << " и " << base_2 << " и высотой " << height;
	}

	virtual void save(string filename) {
		ofstream out;

		out.open(filename);

		if (!out.is_open()) {
			cout << "Error saving shape" << endl;
			return;
		}

		out << base_1 << endl << base_2 << endl << height << endl;

		out.close();
	}

	virtual void load(string filename) {
		ifstream in;

		in.open(filename);

		if (!in.is_open()) {
			cout << "Couldn't open file" << endl;
			return;
		}

		in >> base_1;
		in >> base_2;
		in >> height;
	}
};

