//---------------------------------------------------- RLF ERROR
			
			char nummerName1 = a[a.size()-4];
			char nummerName2 = a[a.size()-3];
			char nummerName3 = a[a.size()-2];
			char nummerName4 = a[a.size()-1];

			if(nummerName1 != '.') {
				cout << "FILE ERROR its not .rlf" << endl;
				return 0;
			}
			if(nummerName2 != 'r') {
				cout << "FILE ERROR its not .rlf" << endl;
				return 0;
			}
			if(nummerName3 != 'l') {
				cout << "FILE ERROR its not .rlf" << endl;
				return 0;
			}
			if(nummerName4 != 'f') {
				cout << "FILE ERROR its not .rlf" << endl;
				return 0;
			}
//-------------------------------------------------------------------------
			
			
			
			string file;
			file = a;
			
			char *stroke = new char [15000];
		    int strokeINT=0;
		    ifstream base(file.c_str());
		    
			if(!base) {
		    	cout << "ERROR file not found" << endl;
		    	return 0;
			}
	    
		    while (!base.eof())
		    {
		        base.getline(stroke, 15000, '\n');
		        strokeINT++;
		    }
		    base.close();
			
			
			
			char code [strokeINT][300];
		    ifstream fin;
		    fin.open(file.c_str());
		 
		    int n;
		    for (n = 0; n < strokeINT && !fin.eof(); ++n) {
       			fin.getline(code[n], 300);
       		}
