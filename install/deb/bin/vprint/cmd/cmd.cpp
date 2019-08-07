
	if(timeint == 0) {
				if(newer[x] == 'c') {
					if(newer[x+1] == 'o') {
						if(newer[x+2] == 'n') {
							if(newer[x+3] == 's') {
								if(newer[x+4] == 'o') {
									if(newer[x+5] == 'l') {
										if(newer[x+6] == 'e') {
											bool exec1 = false;
											bool exec2 = false;
											string con;
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
															 
												con += newer[y];
												x++;
											}
												    
											if(exec1 == false) {
												cout << "ERROR syntax not executed in `console`" << endl;
												return 0;
											}
											if(exec2 == false) {
												cout << "ERROR syntax not executed in `console`" << endl;
												return 0;
											}
												    
												    
												    
											out << "system(" << con << ");" << '\n';
										}
									}
								}
							}
						}
					}
				}
				
		}
