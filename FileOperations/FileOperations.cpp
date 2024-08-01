#include<fstream>
#include<filesystem>
#include<string>
#include<iostream>
using namespace std;
namespace fs = std::filesystem;

namespace FileOperation {
	string getCurrentPath() {
		return fs::current_path().string();
	}

	/*bool checkFileExistance(char*) {

	}

	bool checkFolderExistance(char*) {

	}
	*/

	void createFile(string file_name) {
		string cpath = getCurrentPath();
		string fil = cpath + (string)"\\" + file_name;
		ofstream MyFile(fil);
		MyFile.close();
	}

	bool createFolder(string folder_name) {
		string cpath = getCurrentPath();
		string dir = cpath + (string)"\\" + folder_name;
		bool flag = true;
		try {
			flag = fs::create_directories(dir);
		}
		catch (fs::filesystem_error& e) {
			// How to go back, skip this, and resume?
			cerr << e.what() << endl;
		}
		return flag;
	}


}