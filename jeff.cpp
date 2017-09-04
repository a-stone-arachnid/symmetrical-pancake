// jeff.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "input.hh"
#include "output.hh"
#include "cmdprocessor.hh"
const unsigned short year{ 2017 };
const int build{ 1 };
const float version{ 1.44f };

int main()
{
	copyright(version, build, year,commandsver);
	respond("Hello");
	while (true)
	{
		std::string jfout{ "" };
		requestText();
		jfout = getInput();
		if (jfout == "exit" || jfout == "quit" || jfout == "bye" || jfout == "logout")
		{
			return 0;
		}
		else if (jfout == "clear" || jfout == "clr" || jfout == "cls")
			clear();
		else if (jfout == "hi" || jfout == "hi jeff" || jfout == "hello")
			respond("Hello, person. I'm Jeff.");
		else
			system(jfout.c_str());
	}
	return 0;
}

