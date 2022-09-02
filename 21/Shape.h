#pragma once

#include <string>;
#include <fstream>;

class Shape
{
	
	public:
		virtual void show() = -1;
		virtual void save(string filename) = -1;
		virtual Shape load(string filename) = -1;
};

