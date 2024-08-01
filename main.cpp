#include<iostream>
#include"init.h"
#include<vector>
#include<string>
using namespace std;



int main(int argc, char** argv)
{
    
    std::string authorName;
    std::cout << "Enter author name: ";
    std::getline(std::cin, authorName);
  
    std::string current_exec_name = argv[0]; // Name of the current exec program
    std::vector<std::string> all_args;
    if (argc > 1)
    {
        all_args.assign(argv + 1, argv + argc);
    }

   
   
    
    
    if (all_args.size() >= 1 && all_args[0] == "init") {
        Init::Intialize();
        cout << "tmam";
    }
    else {
        cout << "m4 tmam";
    }


    while (1);

    return 0;
}