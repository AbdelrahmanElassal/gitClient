#pragma once
#include"init.h"
#include"config.h"
#include"FileOperations.h"
#include<iostream>
#include<fstream>
using namespace std;

namespace Init {

	void intializeDescr();
	void intializeObj();
	void intializeHooks();
	void intializeHEAD();
	void intializeRefs();
	void intializeConfig();
	//if git init command is ran in a directory that is not intialized as a git repo
	void Intialize();



	//runned in the main function excuting the init command
	void InitCommand();
}