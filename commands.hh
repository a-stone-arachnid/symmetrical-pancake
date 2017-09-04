#pragma once
#include <string>
#ifndef CMD_HH
#define CMD_HH
typedef std::string cmd_t;
struct Command
{
	bool valid;
	cmd_t command;
};
Command commandProcess(cmd_t);
std::string cmds[2];

const int totalcmds = sizeof(cmds) / sizeof(cmds[0]);
#endif