#pragma once

#include "Shape.h";

class Rectangle : public Shape
{
	int corner_x, corner_y, len, height;

public:

	Rectangle(int corner_x, int corner_y, int len, int height) {
		this->corner_x = corner_x;
		this->corner_y = corner_y;
		this->len = len;
		this->height = height;
	}

	Rectangle() {
		corner_x = 0;
		corner_y = 0;
		len = 0;
		height = 0;
	}

	virtual void show() {
		cout << "јл€ пр€моугольник с координатами правого левого угла (" << corner_x << ";" << corner_y << "), длиной стороны " << len << " и высотой " << height;
	}

	virtual void save(string filename) {
		ofstream out;

		out.open(filename);

		if (!out.is_open()) {
			cout << "Error saving shape" << endl;
			return;
		}

		out << corner_x << endl << corner_y << endl << len << endl << height << endl;

		out.close();
	}

	virtual void load(string filename) {
		ifstream in;

		in.open(filename);

		if (!in.is_open()) {
			cout << "Couldn't open file" << endl;
			return;
		}

		in >> corner_x;
		in >> corner_y;
		in >> len;
		in >> height;
	}
};

