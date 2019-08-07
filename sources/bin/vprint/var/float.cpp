
	if(timeint == 0) {
				if(newer[x] == 'd') {
					if(newer[x+1] == 'u') {
						if(newer[x+2] == 'a') {
							if(newer[x+3] == 'l') {
									bool point = false;
									string byte;
									int y = x+4;
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
														 
										byte += newer[y];
										x++;
									}
								    
								    if(point == false) {
								    	cout << "ERROR syntax not executed in `dual`" << endl;
										return 0;
									}
								    

								    
									out << "double " << byte << '\n';

							}
						}
					}
				}
				
	}
	
	
	
	
	if(timeint == 0) {			
				if(newer[x] == 'f') {
					if(newer[x+1] == 'l') {
						if(newer[x+2] == 'o') {
							if(newer[x+3] == 'a') {
								if(newer[x+4] == 't') {
									bool point = false;
									string byte;
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
														 
										byte += newer[y];
										x++;
									}
								    
								    if(point == false) {
								    	cout << "ERROR syntax not executed in `float`" << endl;
										return 0;
									}
								    

								    
									out << "float " << byte << '\n';
								}
							}
						}
					}
				}
				
	}
