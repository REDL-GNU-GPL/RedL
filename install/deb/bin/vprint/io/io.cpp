
	if(timeint == 0) {
				if(newer[x] == 'g') {
					if(newer[x+1] == 'o') {
						if(newer[x+2] == 'i') {
							if(newer[x+3] == 'n') {
								if(newer[x+4] == 'g') {
									bool exec1 = false;
									bool exec2 = false;
									string going;
									int y = x+5;
									for(;y<300;y++) {
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
															 
										going += newer[y];
										x++;
									}
										    
									if(exec1 == false) {
										cout << "ERROR syntax not executed  in `going`" << endl;
										return 0;
									}
									if(exec2 == false) {
										cout << "ERROR syntax not executed in `going`" << endl;
										return 0;
									}
									
									out << "cout.width(" << going << ");" << '\n';

								}
							}
						}
					}
				}

	}
	
	
if(timeint == 0) {
	
	
	if(newer[x] == 's')	 {
		if(newer[x+1] == 'w') {
			if(newer[x+2] == 'a') {
				if(newer[x+3] == 'p') {
					
							bool exec1 = false;
							bool exec2 = false;
							bool exec3 = false;
							string var1;
							string var2;
							int y = x+4;
							for(;y<300;y++) {
								if(newer[y] == '(') {
									exec1 = true;
									break;
								}
							}
							y+=1;
							for(;y<300;y++) {
								if(newer[y] == ',') {
									exec2 = true;
									break;
								}		 
								var1 += newer[y];
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
															 
								var2 += newer[y];
								x++;
							}
								    
							if(exec1 == false) {
								cout << "ERROR syntax not executed in `swap`" << endl;
								return 0;
							}
							if(exec2 == false) {
								cout << "ERROR syntax not executed in `swap`" << endl;
								return 0;
							}
							if(exec3 == false) {
								cout << "ERROR syntax not executed in `swap`" << endl;
								return 0;
							}
								    
							
							
							out << "swap(" << var1 << "," << var2 << ");" << '\n'; 
					
					
				}
			}
		}
	}

}
