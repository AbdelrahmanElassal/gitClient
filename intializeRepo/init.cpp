#include"init.h"
#include"FileOperations.h"
#include<iostream>
using namespace std;
namespace Init{

	/*
	* 
	* take username 
	* take e,ail
	* create .gitclient directory
	* save un and email in config
	* 
	*/

	void Intialize() {
		bool f = FileOperation::createFolder(".gitRepo");
		f= FileOperation::createFolder(".gitRepo\\objects");
		f = FileOperation::createFolder(".gitRepo\\hooks");
		f = FileOperation::createFolder(".gitRepo\\refs");
		FileOperation::createFile(".gitRepo\\HEAD.txt");
		FileOperation::createFile(".gitRepo\\config.txt");
		FileOperation::createFile(".gitRepo\\description.txt");


	}


	void ReIntialize() {

	}

	void InitCommand() {


	}
}