#include"init.h"

namespace Init{


	void Intialize() {
		FileOperation::createFolder(".gitRepo\\objects");
		FileOperation::createFolder(".gitRepo\\hooks");
		FileOperation::createFolder(".gitRepo\\refs");
		FileOperation::createFile(".gitRepo\\HEAD.txt");
		FileOperation::createFile(".gitRepo\\description.txt");
		FileOperation::createFile(".gitRepo\\config.txt");
		unordered_map<string, string> conf = config::readConfigFromUser();
		config::writeConfig(".gitRepo\\config.txt", conf);

	}


	void InitCommand() {
		bool f = FileOperation::createFolder(".gitRepo");
		if (f) {
			Intialize();
			cout << "Successfully intialized as a git repo" << endl;
		}
		else {
			cout << "Already intialized as a git repo" << endl;
		}

	}
}