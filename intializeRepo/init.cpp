#include"init.h"

namespace Init{


	void Intialize() {
		intializeDescr();
		intializeObj();
		intializeHooks();
		intializeHEAD();
		intializeRefs();
		intializeConfig();
	}

	void intializeDescr() {
		FileOperation::createFile(".git\\description");
	}


	void intializeObj() {
		FileOperation::createFolder(".git\\objects");
		FileOperation::createFolder(".git\\objects\\info");
		FileOperation::createFolder(".git\\objects\\pack");
	}

	void intializeHooks() {
		FileOperation::createFolder(".git\\hooks");
	}

	void intializeHEAD() {
		FileOperation::createFile(".git\\HEAD");
		std::ofstream HEAD(".git\\HEAD");
		if (HEAD.is_open()) {
			HEAD << "ref: refs/heads/master\n";
		}
	}

	void intializeRefs() {
		FileOperation::createFolder(".git\\refs");
	}

	void intializeConfig() {
		FileOperation::createFile(".git\\config");
		unordered_map<string, string> conf = config::readConfigFromUser();
		config::writeConfig(".git\\config", conf);
	}


	void InitCommand() {
		bool f = FileOperation::createFolder(".git");
		if (f) {
			Intialize();
			cout << "Successfully intialized as a git repo" << endl;
		}
		else {
			cout << "Already intialized as a git repo" << endl;
		}

	}
}