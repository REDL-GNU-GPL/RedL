if(timeint == 0) {
				if(newer[x] == 'r') {
					if(newer[x+1] == 'e') {
						if(newer[x+2] == 't') {
							if(newer[x+3] == 'u') {
								if(newer[x+4] == 'r') {
									if(newer[x+5] == 'n') {
										bool point = false;
										string ret;
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
									                point = true;
									                break;
									            }
									        }
														 
											ret += newer[y];
											x++;
										}
									    
									    if(point == false) {
									    	cout << "ERROR syntax not executed in `return`" << endl;
											return 0;
										}
									    
	
									    
										out << "return " << ret << '\n';

									}
								}
							}
						}
					}
				}
				
		}
