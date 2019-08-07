if(timeint == 0) {
				
				if(newer[x] == 'v') {
					if(newer[x+1] == 'o') {
						if(newer[x+2] == 'i') {
							if(newer[x+3] == 'c') {
								if(newer[x+4] == 'e') {
									bool exec1 = false;
									bool exec2 = false;
									string GLOBAL;
									int y = x+5;
									string scobe = ";";
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
									if(exec2 == false) {
										cout << "ERROR syntax not executed in `voice`" << endl;
										return 0;
									}
										    
									
									
									
									
									
									
									#include "../../GLOBAL_COMMAND_LIBS/GLOBAL.cpp"
									
									
									
									
									
									
									
									
										    
										    
									out << "cout << " << GLOBAL << "<< endl;" << '\n';
						
								}
							}
						}
					}
				}
				
		}
			
