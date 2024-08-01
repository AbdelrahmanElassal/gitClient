#pragma once
#include<fstream>
#include<filesystem>
#include<string>
#include<iostream>
using namespace std;
namespace fs = std::filesystem;

namespace FileOperation {
	string getCurrentPath();

	void createFile(string);

	bool createFolder(string);


}