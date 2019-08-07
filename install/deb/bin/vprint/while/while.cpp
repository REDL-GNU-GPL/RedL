
		if(timeint == 0) {
				if(newer[x] == 'w') {
					if(newer[x+1] == 'h') {
						if(newer[x+2] == 'i') {
							if(newer[x+3] == 'l') {
								if(newer[x+4] == 'e') {
									bool doe = false;
									bool exec1 = false;
									bool exec2 = false;
									string GLOBAL;
									int y = x+5;
									for(;y<line;y++) {
										if(newer[y] == '(') {
											exec1 = true;
											break;
										}
									}
									y+=1;
									string scobe = "{";
									string scobe2 = ");";
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
										    if (newer.compare(y, scobe2.length(), scobe2) == 0) {
										        exec2 = true;
										        doe = true;
										        break;
										    }
										}
															 
										GLOBAL += newer[y];
										x++;
									}
									
									if(exec1 == false) {
										cout << "ERROR syntax not executed in `while`" << endl;
										return 0;
									}
									if(exec2 == false) {
										cout << "ERROR syntax not executed in `while`" << endl;
										return 0;
									}
										    
							    
								    
									#include "../../GLOBAL_COMMAND_LIBS/GLOBAL.cpp"
									
									if(doe == true) {
										out << "while(" << GLOBAL << ")" << '\n';
									}else {
										out << "while(" << GLOBAL << '\n';
									}
							
								}
							}
						}
					}
				}
				
				
			}
