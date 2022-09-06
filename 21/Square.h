#pragma once
#include "Shape.h"
class Square : public Shape
{
	int corner_x, corner_y, len;

public:

	Square() {
		corner_x = 0;
		corner_y = 0;
		len = 0;
	};

	Square(int corner_x, int corner_y, int len) {
		this->corner_x = corner_x;
		this->corner_y = corner_y;
		this->len = len;
	}

	virtual void show() {
		cout << "Аля квадрат с координатами правого угла (" << corner_x << ";" << corner_y << ") и длиной стороны " << len;
	}

	virtual void save(string filename) {
		ofstream out;

		out.open(filename);

		if (!out.is_open()) {
			cout << "Error saving shape" << endl;
			return;
		}

		out << corner_x << endl << corner_y << endl << len << endl;

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
	}
};

