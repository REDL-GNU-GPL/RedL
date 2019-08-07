if(timeint == 0) {
	
	
				if(newer[x] == 'l') {
					if(newer[x+1] == 'i') {
						if(newer[x+2] == 'b') {
							if(newer[x+3] == 's') {
									bool point = false;
									int y = x+4;
									for(;y<300;y++) {
										if(newer[y] == ';') {
											point = true;
											break;
										}		 
										libs += newer[y];
										x++;
									}
									
									if(point == false) {
								    	cout << "ERROR syntax not executed" << endl;
										return 0;
									}
									
									if((libs.find("vprint", 0) + 1)) {
										out << "#include <iostream>" << '\n';
										out << "#include <sstream>" << '\n';
									}
									if((libs.find("math", 0) + 1)) {
									 	out << "#include <cmath>" << '\n';
									}
									
									
							}
						}
					}
				}
				
		}
