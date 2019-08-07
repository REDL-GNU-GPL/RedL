
if(timeint == 0) {
	if(newer[x] == 'c')	 {
		if(newer[x+1] == 'i') {
			if(newer[x+2] == 'n') {
				if(newer[x+3] == 'r') {
					if(newer[x+4] == 'o') {
						if(newer[x+5] == 'w') {
						
											bool exec1 = false;
											bool exec2 = false;
											bool exec3 = false;
											string gets;
											string texts;
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
												gets += newer[y];
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
															 
												texts += newer[y];
												x++;
											}	    
											if(exec1 == false) {
												cout << "ERROR syntax not executed in `cinrow`" << endl;
												return 0;
											}
											if(exec2 == false) {
												cout << "ERROR syntax not executed in `cinrow`" << endl;
												return 0;
											}
											if(exec3 == false) {
												cout << "ERROR syntax not executed in `cinrow`" << endl;
												return 0;
											}
												    
												    
												    
											out << "cout << " << texts << ";" << '\n';
											out << "getline(std::cin," << gets << ");" << '\n';
											
						}
					}
				}
			}
		}
	}
	
	
}


if(timeint == 0) {
	if(newer[x] == 'i')	 {
		if(newer[x+1] == 'n') {
			if(newer[x+2] == 'p') {
				if(newer[x+3] == 'u') {
					if(newer[x+4] == 't') {
											bool exec1 = false;
											bool exec2 = false;
											bool exec3 = false;
											string gets;
											string texts;
											int y = x+5;
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
												gets += newer[y];
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
															 
												texts += newer[y];
												x++;
											}	    
											if(exec1 == false) {
												cout << "ERROR syntax not executed in `input`" << endl;
												return 0;
											}
											if(exec2 == false) {
												cout << "ERROR syntax not executed in `input`" << endl;
												return 0;
											}
											if(exec3 == false) {
												cout << "ERROR syntax not executed in `input`" << endl;
												return 0;
											}
											
											
											out << "cout <<" << texts << ";" << '\n';
											out << "cin >>" << gets << ";" << '\n';
					}
				}
			}
		}
	}
				
}


if(timeint == 0) {
	
	
	if(newer[x] == 'c')	 {
		if(newer[x+1] == 'i') {
			if(newer[x+2] == 'n') {
				if(newer[x+3] == 'a') {
					if(newer[x+4] == 'r') {
						if(newer[x+5] == 'r') {
							if(newer[x+6] == 'a') {
								if(newer[x+7] == 'y') {
						
											bool exec1 = false;
											bool exec2 = false;
											bool exec3 = false;
											bool exec4 = false;
											bool exec5 = false;
											string gets;
											string texts;
											string nummer;
											int y = x+8;
											for(;y<line;y++) {
												if(newer[y] == '(') {
													exec1 = true;
													break;
												}
											}
											y+=1;
											for(;y<line;y++) {
												if(newer[y] == '[') {
													exec2 = true;
													break;
												}		 
												gets += newer[y];
												x++;
											}
											y+=1;
											for(;y<line;y++) {
												if(newer[y] == ']') {
													exec3 = true;
													break;
												}		 
												nummer += newer[y];
												x++;
											}
											y+=1;
											for(;y<line;y++) {
												if(newer[y] == ',') {
													exec4 = true;
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
										                exec5 = true;
										                break;
										            }
										        }
															 
												texts += newer[y];
												x++;
											}
											
												    
											if(exec1 == false) {
												cout << "ERROR syntax not executed in `cinarray`" << endl;
												return 0;
											}
											if(exec2 == false) {
												cout << "ERROR syntax not executed in `cinarray`" << endl;
												return 0;
											}
											if(exec3 == false) {
												cout << "ERROR syntax not executed in `cinarray`" << endl;
												return 0;
											}
											if(exec4 == false) {
												cout << "ERROR syntax not executed in `cinarray`" << endl;
												return 0;
											}
											if(exec5 == false) {
												cout << "ERROR syntax not executed in `cinarray`" << endl;
												return 0;
											}
											int errors = atoi(nummer.c_str());

											if(errors >= 800) {
												cout << "ERROR array is overloaded" << endl;
												return 0;
											}
  
												    
											out << "cout << " << texts << ";" << '\n';
											out << "cin.getline(" << gets << "[" << nummer << "]," << " 500);" << '\n';
											
										
									}
								}
							}
					}
				}
			}
		}
	}
}
