#pragma once
#include <string>
using namespace std;
namespace FileOperation {
	string getCurrentPath();

	bool checkFileExistance(string);

	bool checkFolderExistance(string );

	void createFile(string);

	bool createFolder(string);


}