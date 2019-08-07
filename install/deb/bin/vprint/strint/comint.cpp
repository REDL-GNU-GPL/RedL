if(timeint == 0) {

				if(newer[x] == 'c') {
					if(newer[x+1] == 'i') {
						if(newer[x+2] == 'n') {
							if(newer[x+3] == 'b') {
								if(newer[x+4] == 'y') {
									if(newer[x+5] == 't') {
										if(newer[x+6] == 's') {
											
										bool exec1 = false;
										bool exec2 = false;
										bool exec3 = false;
										string row;
										string byty;
										int y = x+7;
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
											cout << "ERROR syntax not executed in `cinbyts`" << endl;
											return 0;
										}
										if(exec2 == false) {
											cout << "ERROR syntax not executed in `cinbyts`" << endl;
											return 0;
										}
										if(exec3 == false) {
											cout << "ERROR syntax not executed in `cinbyts`" << endl;
											return 0;
										}
											    
										
										out << "string REDLSTRINGTOINTEGERROWINBYTYSPECIAL;" << '\n';
										out << "for(int REDLVARIBALYFORFORCICLESPECIAL = 0;REDLVARIBALYFORFORCICLESPECIAL<1024;REDLVARIBALYFORFORCICLESPECIAL++) {" << '\n';
										out << "if(" << row << "[REDLVARIBALYFORFORCICLESPECIAL] == \'\\0\') {" << '\n';
										out << "break;" << '\n';
										out << "}" << '\n';
										out << "if(" << row << "[REDLVARIBALYFORFORCICLESPECIAL] == \'1\') {" << '\n';
										out << "REDLSTRINGTOINTEGERROWINBYTYSPECIAL += \"1\";" << '\n';
										out << "}" << '\n';
										out << "if(" << row << "[REDLVARIBALYFORFORCICLESPECIAL] == \'2\') {" << '\n';
										out << "REDLSTRINGTOINTEGERROWINBYTYSPECIAL += \"2\";" << '\n';
										out << "}" << '\n';
										out << "if(" << row << "[REDLVARIBALYFORFORCICLESPECIAL] == \'3\') {" << '\n';
										out << "REDLSTRINGTOINTEGERROWINBYTYSPECIAL += \"3\";" << '\n';
										out << "}" << '\n';
										out << "if(" << row << "[REDLVARIBALYFORFORCICLESPECIAL] == \'4\') {" << '\n';
										out << "REDLSTRINGTOINTEGERROWINBYTYSPECIAL += \"4\";" << '\n';
										out << "}" << '\n';
										out << "if(" << row << "[REDLVARIBALYFORFORCICLESPECIAL] == \'5\') {" << '\n';
										out << "REDLSTRINGTOINTEGERROWINBYTYSPECIAL += \"5\";" << '\n';
										out << "}" << '\n';
										out << "if(" << row << "[REDLVARIBALYFORFORCICLESPECIAL] == \'6\') {" << '\n';
										out << "REDLSTRINGTOINTEGERROWINBYTYSPECIAL += \"6\";" << '\n';
										out << "}" << '\n';
										out << "if(" << row << "[REDLVARIBALYFORFORCICLESPECIAL] == \'7\') {" << '\n';
										out << "REDLSTRINGTOINTEGERROWINBYTYSPECIAL += \"7\";" << '\n';
										out << "}" << '\n';
										out << "if(" << row << "[REDLVARIBALYFORFORCICLESPECIAL] == \'8\') {" << '\n';
										out << "REDLSTRINGTOINTEGERROWINBYTYSPECIAL += \"8\";" << '\n';
										out << "}" << '\n';
										out << "if(" << row << "[REDLVARIBALYFORFORCICLESPECIAL] == \'9\') {" << '\n';
										out << "REDLSTRINGTOINTEGERROWINBYTYSPECIAL += \"9\";" << '\n';
										out << "}" << '\n';
										out << "if(" << row << "[REDLVARIBALYFORFORCICLESPECIAL] == \'0\') {" << '\n';
										out << "REDLSTRINGTOINTEGERROWINBYTYSPECIAL += \"0\";" << '\n';
										out << "}" << '\n';
										out << "}" << '\n';
										out << byty << "= atoi(REDLSTRINGTOINTEGERROWINBYTYSPECIAL.c_str());" << '\n';
									
									}
								}
							}
						}
					}
				}
			}


}


