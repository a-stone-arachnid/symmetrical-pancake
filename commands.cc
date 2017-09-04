#include "stdafx.h"
#include <string>
#include <iostream>
#include "commands.hh"
Command commandProcess(cmd_t cmd)
{
	Command rvi;
	rvi.command = cmd;
	rvi.valid = true;	
	return rvi;
}