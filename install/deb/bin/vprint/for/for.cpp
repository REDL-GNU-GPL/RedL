	if(timeint == 0) {
				if(newer[x] == 'f') {
					if(newer[x+1] == 'o') {
						if(newer[x+2] == 'r') {
					
							bool exec1 = false;
							bool exec2 = false;
							string GLOBAL;
							int y = x+3;
							for(;y<line;y++) {
								if(newer[y] == '(') {
									exec1 = true;
									break;
								}
							}
							y+=1;
							string scobe = "{";
							bool test = false;
							for(;y<line;y++) {
								if (newer[y] == '\\')
								    if (newer[y+1] == '\"')
								        y+=2;
										
								if (newer[y] == '\"')
								    test = !test;
								
								if (!test) {
								    if (newer.compare(y, scobe.length(), scobe) == 0) {
								        exec2 = true;
								        break;
								    }
								}
													 
								GLOBAL += newer[y];
								x++;
							}
							
							if(exec1 == false) {
								cout << "ERROR syntax not executed in `for`" << endl;
								return 0;
							}
							if(exec2 == false) {
								cout << "ERROR syntax not executed in `row`" << endl;
								return 0;
							}
							
							
						
							#include "../../GLOBAL_COMMAND_LIBS/GLOBAL.cpp"
							
							
							out << "for(;" << GLOBAL << '\n';
						}
					}
				}
				
	}
