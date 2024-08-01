#pragma once
#include"init.h"
#include"FileOperations.h"
#include<iostream>
using namespace std;

namespace Init {

	//if git init command is ran in a directory that is not intialized as a git repo
	void Intialize();



	//runned in the main function excuting the init command
	void InitCommand();
}