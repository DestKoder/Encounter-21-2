#pragma once
class Rectangle : public Shape
{
	int corner_x, corner_y, len, height;

public:

	Rectangle(int corner_x, corner_y, int len, int height) {
		this->corner_x = corner_x;
		this->corner_y = corner_y;
		this->len = len;
		this->height = height;
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
	}

	virtual Shape load(string filename) {
		ifstream in;

		in.open(string filename);

		if (!in.is_open()) {
			cout << "Couldn't open file" << endl;
		}

		int x, y, len, height;

		in >> x;
		in >> y;
		in >> len;
		in >> height;

		return Rectangle(x, y, len, height);
	}
};

