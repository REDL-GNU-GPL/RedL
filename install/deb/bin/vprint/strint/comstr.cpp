if(timeint == 0) {
							
							
							
							


				if(newer[x] == 'c') {
					if(newer[x+1] == 'i') {
						if(newer[x+2] == 'n') {
							if(newer[x+3] == 'r') {
								if(newer[x+4] == 'o') {
									if(newer[x+5] == 'w') {
											
										bool exec1 = false;
										bool exec2 = false;
										bool exec3 = false;
										string row;
										string byty;
										int y = x+6;
										for(;y<line;y++) {
											if(newer[y] == '(') {
												exec1 = true;
												break;
											}
										}
										y+=1;
										for(;y<300;y++) {
											if(newer[y] == '>') {
												exec2 = true;
												break;
											}		 
											row += newer[y];
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
														 
											byty += newer[y];
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
											    
										
										out << "stringstream REDLCONVERTINTTOSTRINGSPECIAL;" << '\n';
										out << "REDLCONVERTINTTOSTRINGSPECIAL <<" << byty << ";" << '\n';
										out << "REDLCONVERTINTTOSTRINGSPECIAL >>" << row << ";" << '\n';
									
									}
								}
							}
						}
					}
				}
				
				
			}
