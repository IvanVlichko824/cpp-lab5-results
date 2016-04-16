#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

class File
{
protected:
	char name,text;
public:
	File(char a, char b)
	{
		cout << "\n wwedite sodergimoe";
		this->text = a;
	}
	virtual void print()
	{
		cout << "\n sodergimoe [" << name << "] : " << text;
	}
	~File () {}
};


class Directory
{
protected:
	char name,text;
public:
	Directory(char a, char b)
	{
		this->name = a;
		this->text = b;
	}
	virtual void print()
	{
		cout << "\n sodergimoe [" << name <<"] :" << text;
	}
	~Directory () {}
};