
if(timeint == 0) {
	if(newer[x] == 'r')	 {
		if(newer[x+1] == 'e') {
			if(newer[x+2] == 'p') {
				if(newer[x+3] == 'l') {
					if(newer[x+4] == 'a') {
						if(newer[x+5] == 'y') {
					
							bool exec1 = false;
							bool exec2 = false;
							bool exec3 = false;
							string ifs1;
							string GLOBAL;
							int y = x+6;
							for(;y<line;y++) {
								if(newer[y] == '(') {
									exec1 = true;
									break;
								}
							}
							y+=1;
							for(;y<line;y++) {
								if(newer[y] == ',') {
									exec2 = true;
									break;
								}		 
								ifs1 += newer[y];
								x++;
							}
							y+=1;
							string scobe = ");";
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
								cout << "ERROR syntax not executed in `oper`" << endl;
								return 0;
							}
							if(exec2 == false) {
								cout << "ERROR syntax not executed in `oper`" << endl;
								return 0;
							}
							if(exec3 == false) {
								cout << "ERROR syntax not executed in `if.in`" << endl;
								return 0;
							}
							
								    
							#include "../../GLOBAL_COMMAND_LIBS/GLOBAL.cpp"
							
							
							out << ifs1 << " = " << GLOBAL << ";" << '\n'; 
					
							}
					}
				}
			}
		}
	}
	
}
	
	
	
	
	
if(timeint == 0) {	
				if(newer[x] == 'i') {
					if(newer[x+1] == 'n') {
						if(newer[x+2] == 'c') {
							if(newer[x+3] == 'p') {
								if(newer[x+4] == 'o') {
									if(newer[x+5] == 's') {
										if(newer[x+6] == 't') {
					
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
									string scobe = ");";
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
										cout << "ERROR syntax not executed in `inc`" << endl;
										return 0;
									}
									if(exec2 == false) {
										cout << "ERROR syntax not executed in `inc`" << endl;
										return 0;
									}
										    
									
							
										    
											out << GLOBAL << "++;" << '\n';
						
										}
									}
								}
							}
						}
					}
				}
			}
			
			
			
			if(timeint == 0) {

				if(newer[x] == 'i') {
					if(newer[x+1] == 'n') {
						if(newer[x+2] == 'c') {
							if(newer[x+3] == 'p') {
								if(newer[x+4] == 'r') {
									if(newer[x+5] == 'e') {
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
									string scobe = ");";
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
										cout << "ERROR syntax not executed in `inc`" << endl;
										return 0;
									}
									if(exec2 == false) {
										cout << "ERROR syntax not executed in `inc`" << endl;
										return 0;
									}
										    
									
							
										    
											out << "++" << GLOBAL << ";" << '\n';
						
										}
									}
								}
							}
						}
					}
				}				
				
			}
				
				
			if(timeint == 0) {	
				if(newer[x] == 'd') {
					if(newer[x+1] == 'e') {
						if(newer[x+2] == 'c') {
							if(newer[x+3] == 'p') {
								if(newer[x+4] == 'o') {
									if(newer[x+5] == 's') {
										if(newer[x+6] == 't') {
					
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
									string scobe = ");";
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
										cout << "ERROR syntax not executed in `dic`" << endl;
										return 0;
									}
									if(exec2 == false) {
										cout << "ERROR syntax not executed in `dic`" << endl;
										return 0;
									}
										    
									
							
										    
											out << GLOBAL << "--;" << '\n';
						
										}
									}
								}
							}
						}
					}
				}
				
}



if(timeint == 0) {
				if(newer[x] == 'd') {
					if(newer[x+1] == 'e') {
						if(newer[x+2] == 'c') {
							if(newer[x+3] == 'p') {
								if(newer[x+4] == 'r') {
									if(newer[x+5] == 'e') {
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
									string scobe = ");";
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
										cout << "ERROR syntax not executed in `dic`" << endl;
										return 0;
									}
									if(exec2 == false) {
										cout << "ERROR syntax not executed in `dic`" << endl;
										return 0;
									}
										    
									
							
										    
											out << "--" << GLOBAL << ";" << '\n';
						
										}
									}
								}
							}
						}
					}
				}
				
	}
