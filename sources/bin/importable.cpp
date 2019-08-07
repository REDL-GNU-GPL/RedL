//---------------------------------------------------- RLF ERROR
string a = imp;
			char nummerName1 = a[a.size()-4];
			char nummerName2 = a[a.size()-3];
			char nummerName3 = a[a.size()-2];
			char nummerName4 = a[a.size()-1];

			if(nummerName1 != '.') {
				cout << "IMPORTABLE FILE ERROR its not .rlf" << endl;
				return 0;
			}
			if(nummerName2 != 'r') {
				cout << "IMPORTABLE FILE ERROR its not .rlf" << endl;
				return 0;
			}
			if(nummerName3 != 'l') {
				cout << "IMPORTABLE FILE ERROR its not .rlf" << endl;
				return 0;
			}
			if(nummerName4 != 'f') {
				cout << "IMPORTABLE FILE ERROR its not .rlf" << endl;
				return 0;
			}
//-------------------------------------------------------------------------
			
			
			
			string file;
			file = a;
			
			char *stroke = new char [15000];
		    int strokeINT=0;
		    ifstream base(file.c_str());
		    
			if(!base) {
		    	cout << "ERROR importable file not found" << endl;
		    	return 0;
			}
	    
		    while (!base.eof())
		    {
		        base.getline(stroke, 15000, '\n');
		        strokeINT++;
		    }
		    base.close();
			
			
			
			char code [strokeINT][1024];
		    ifstream fin;
		    fin.open(file.c_str());
		 
		    int n;
		    for (n = 0; n < strokeINT && !fin.eof(); ++n) {
		    	fin.getline(code[n], 1024);
       		}
       		
       		
		string newer;
		for (int voice2 = 0;voice2 < strokeINT; voice2++) {
			string codest = code[voice2];


			int maxsimbhol = strokeINT * 300;
			#include "treat.cpp"
		}
		
		long long line2 = newer.length();
			
		
		// Command start
	int x = 0;
	for(;x<line2;x++) {
		#include "return.cpp"
		#include "../libs/libsadd.cpp"
		#include "libscpp.cpp"
		#include "../libs/vprint.cpp"	
	}
	
	
		
		// COMMAND END
		
