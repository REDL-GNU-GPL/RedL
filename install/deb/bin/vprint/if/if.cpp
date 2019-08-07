if(timeint == 0) {
				if(newer[x] == 'i') {
					if(newer[x+1] == 'f') {
						if(newer[x+2] != '.') {
					
							bool exec1 = false;
							bool exec2 = false;
							string GLOBAL;
							int y = x+2;
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
								cout << "ERROR syntax not executed in `if`" << endl;
								return 0;
							}
							if(exec2 == false) {
								cout << "ERROR syntax not executed in `if`" << endl;
								return 0;
							}
							
							
						
							#include "../../GLOBAL_COMMAND_LIBS/GLOBAL.cpp"
							
							
							out << "if(" << GLOBAL << '\n';
						}
					}
				}
				
	}


if(timeint == 0) {
	if(newer[x] == 'e')	 {
		if(newer[x+1] == 'l') {
			if(newer[x+2] == 's') {
				if(newer[x+3] == 'e') {
					if(newer[x+4] == 'i') {
						if(newer[x+5] == 'f') {
							
								bool exec1 = false;
							bool exec2 = false;
							string GLOBAL;
							int y = x+6;
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
								cout << "ERROR syntax not executed in `elseif`" << endl;
								return 0;
							}
							if(exec2 == false) {
								cout << "ERROR syntax not executed in `elseif`" << endl;
								return 0;
							}
							
							
						
							#include "../../GLOBAL_COMMAND_LIBS/GLOBAL.cpp"
							
							
							out << "else if(" << GLOBAL << '\n';
	
							
						}
					}
				}
			}
		}
	}
}


if(timeint == 0) {
	if(newer[x] == 'e')	 {
		if(newer[x+1] == 'l') {
			if(newer[x+2] == 's') {
				if(newer[x+3] == 'e') {
					if(newer[x+4] == ' ') {
						if(newer[x+5] == 'i') {
							if(newer[x+6] == 'f') {
								
							
							bool exec1 = false;
							bool exec2 = false;
							string GLOBAL;
							int y = x+7;
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
								cout << "ERROR syntax not executed in `else if`" << endl;
								return 0;
							}
							if(exec2 == false) {
								cout << "ERROR syntax not executed in `else if`" << endl;
								return 0;
							}
							
							
						
							#include "../../GLOBAL_COMMAND_LIBS/GLOBAL.cpp"
							
							
							out << "else if(" << GLOBAL << '\n';
						
							
							}
						}
					}
				}
			}
		}
	}
}


if(timeint == 0) {
	if(newer[x] == 'e') {
		if(newer[x+1] == 'l') {
			if(newer[x+2] == 's') {
				if(newer[x+3] == 'e') {
					out << "else" << '\n';
				}
			}
		}
	}
	
}


	
	
if(timeint == 0) {	
	if(newer[x] == 'i')	 {
		if(newer[x+1] == 'f') {
			if(newer[x+2] == '.') {
				if(newer[x+3] == 'i') {
					if(newer[x+4] == 'n') {
					
							bool exec1 = false;
							bool exec2 = false;
							bool exec3 = false;
							string GLOBAL;
							string text;
							int y = x+5;
							for(;y<line;y++) {
								if(newer[y] == '(') {
									exec1 = true;
									break;
								}
							}
							y+=1;
							for(;y<line;y++) {
								if(newer[y] == '>') {
									exec2 = true;
									break;
								}
								text += newer[y];
								x++;
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
								        exec3 = true;
								        break;
								    }
								}
													 
								GLOBAL += newer[y];
								x++;
							}
							
							if(exec1 == false) {
								cout << "ERROR syntax not executed in `if.in`" << endl;
								return 0;
							}
							if(exec2 == false) {
								cout << "ERROR syntax not executed in `if.in`" << endl;
								return 0;
							}
							if(exec3 == false) {
								cout << "ERROR syntax not executed in `if.in`" << endl;
								return 0;
							}
								    
							
							
							out << "if((" << GLOBAL << ".find(" << text << ", 0) + 1)" << '\n'; 
					
					}
				}
			}
		}
	}
	
}


