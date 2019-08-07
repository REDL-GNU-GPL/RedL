long errrorscobe1 = 0;
	for(int z = 0;z<line;z++) {
		if(newer[z] == '\\') {
			if(newer[z+1] == '\"') {
				z+=2;
			}
		}
		if(newer[z] == '\"') {
			errrorscobe1+=1;	
		}
	}
	
	long errrorscobe2 = 0;
	for(int z = 0;z<line;z++) {
		if(newer[z] == '\\') {
			if(newer[z+1] == '\'') {
				z+=2;
			}
		}
		if(newer[z] == '\'') {
			errrorscobe2+=1;	
		}
	}
	
	errrorscobe1%=2;
	errrorscobe2%=2;
	if(errrorscobe1 == 1 || errrorscobe2 == 1) {
		cout << "ERROR invalid number of quotes" << endl;
		return 0;
	}
