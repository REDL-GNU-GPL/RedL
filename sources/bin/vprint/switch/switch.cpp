
if(timeint == 0) {
				if(newer[x] == 'r') {
					if(newer[x+1] == 'e') {
						if(newer[x+2] == 'l') {
							if(newer[x+3] == 'a') {
								if(newer[x+4] == 'y') {
									
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
										cout << "ERROR syntax not executed in `relay`" << endl;
										return 0;
									}
									if(exec2 == false) {
										cout << "ERROR syntax not executed in `relay`" << endl;
										return 0;
									}
									
										
										
										
									#include "../../GLOBAL_COMMAND_LIBS/GLOBAL.cpp"
									
									
									
									out << "switch(" << GLOBAL << '\n';
									
									
								}
							}
						}
					}
				}
				
		}
	
if(timeint == 0) {	
if(newer[x] == 'b') {
	if(newer[x+1] == 'o') {
		if(newer[x+2] == 'x') {
				
				bool point = false;
				string GLOBAL;
				int y = x+3;
				string scobe = ":";
				bool test = false;
				for(;y<line;y++) {
					if (newer[y] == '\\')
						if (newer[y+1] == '\"')
							y+=2;
										
					if (newer[y] == '\"')
						test = !test;
								
					if (!test) {
						if (newer.compare(y, scobe.length(), scobe) == 0) {
							point = true;
							break;
						}
					}
													 
					GLOBAL += newer[y];
					x++;
				}
				
				if(point == false) {
					cout << "ERROR syntax not executed in `box`" << endl;
					return 0;
				}
				
				#include "../../GLOBAL_COMMAND_LIBS/GLOBAL.cpp"			
						
				out << "case " << GLOBAL << ":" << '\n';	
			
		}
	}				
}
}

if(timeint == 0) {

if(newer[x] == 'd') {
	if(newer[x+1] == 'e') {
		if(newer[x+2] == 'f') {
			if(newer[x+3] == 'a') {
				if(newer[x+4] == 'u') {
					if(newer[x+5] == 'l') {
						if(newer[x+6] == 't') {
							out << "default :" << '\n';	
						}
					}
				}
			}
		}
	}				
}

}
