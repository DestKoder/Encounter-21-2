#pragma once

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Shape
{
	
	public:
		virtual void show() = 0;
		virtual void save(string filename) = 0;
		virtual void load(string filename) = 0;
};

