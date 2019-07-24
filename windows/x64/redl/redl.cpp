#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <fcntl.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

using std::string;
using namespace std;
string libs;


std::string trim(const std::string & s){
    size_t startPos = s.find_first_not_of(" \t");
    if ( startPos == std::string::npos )
        return "";
    size_t endPos = s.find_last_not_of(" \t");
    return s.substr(startPos, endPos - startPos + 1);
}


bool converter = false;

int main(int argc, char **argv) {

	// GPL

	system("cls");
	
	cout << "When storing or launching redl you accept the license agreement GNU GPL" << endl;
	cout << "GNU GENERAL PUBLIC LICENSE v3.0"  << endl; 
	cout << "" << endl;


	string a;
	if(argc == 1) {
			cout << "--------------------------------------------------|" << endl;
			cout << "|  ERROR: NON ARGUMENT                            |" << endl;
			cout << "--------------------------------------------------|" << endl;
			cout << "| redl -v   -->>  version redl                    |" << endl;
			cout << "| redl test.rlf   -->> compile file .rlf          |" << endl;
			cout << "| redl -convert test.rlf  -->> convert rlf in cpp |" << endl;
			cout << "--------------------------------------------------|" << endl;
			cout << endl;
			return 0;
	}

	string version = "-v";
	if(argv[1] == version) {
		cout << "--------------------------------" << endl;
		cout << "|                              |" << endl;
		cout << "|   RedL 0.02 BETA for WINDOWS |" << endl;
		cout << "|                              |" << endl;
		cout << "--------------------------------" << endl;
		cout << endl;
		return 0;
	}
	
	string convert = "-convert";
	if(argv[1] == convert) {
		a = argv[2];
		converter = true;
	}else {
		a = argv[1];
	}
	
	#include "bin/code.cpp"
	

		ofstream out("file.cpp");
		
		if(converter == false) {
			out << "#include <fstream>" << '\n';
			out << "#include <iostream>" << '\n';
			out << "#include <string>" << '\n';
			out << "#include <sstream>" << '\n';
			out << "using namespace std;" << '\n';
			out << "int main(int argv, char **args) {" << '\n';
		}
		string nol = "null";
		for (int voice = 0;voice < strokeINT; voice++) {
			string codest0 = code[voice]; 
			string codest1 = code[voice+1]; 
			string codest2 = code[voice+2]; 
			string codest3 = code[voice+3]; 
			string codest4 = code[voice+4]; 
			string codest5 = code[voice+5]; 
			string codest6 = code[voice+6]; 
			string codest7 = code[voice+7];  
			
  // Delete enter in start and end stroke 
  
			codest0 = trim(codest0);
			
  //-------------------------------------
	    
			#include "bin/func/functions.dll"
			#include "bin/func/active.dll"
			
			#include "bin/return.dll"
			#include "bin/import.dll"
			#include "bin/cmd/cmd.dll"
			#include "bin/voice/voice.dll"
			#include "bin/if/if.dll"
			#include "bin/for/for.dll"
			#include "bin/while/while.dll"
			#include "bin/while/do.dll"
			#include "bin/cin/cin.dll"
			#include "bin/var/string.dll"
			#include "bin/var/int.dll"
			#include "bin/var/float.dll"
			#include "bin/var/bool.dll"
			#include "bin/var/mass.dll"
			#include "bin/switch/switch.dll"
			
			#include "bin/strInc/strint.dll"
			#include "bin/len/len.dll"
			#include "bin/files/write.dll"
			#include "bin/files/read.dll"
			#include "bin/files/ffunc.dll"
			#include "libs/libsadd.dll"
	
		//LIBS, for developers only 
			
			#include "libs/template.cpp"
			
		}
		if(converter == false) {
			out << "system(\"pause\");" << '\n';
			out << "return 0;" << '\n';
			out << "}" << '\n';
		}
		out.close();
		

			if(converter != true) {
				system("g++ -Wall -o file file.cpp");
				system("del file.cpp");
			}
		
		
	
	return 0; 
}

