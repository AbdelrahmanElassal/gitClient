#pragma once
namespace Init {

	//if git init command is ran in a directory that is not intialized as a git repo
	void Intialize();


	//if git init command is ran in a directory that is already intialized as a git repo
	void ReIntialize();


	//runned in the main function excuting the init command
	void InitCommand();
}