if(timeint == 0) {
				if(newer[x] == 'b') {
					if(newer[x+1] == 'y') {
						if(newer[x+2] == 't') {
							if(newer[x+3] == 'e') {
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
								    	cout << "ERROR syntax not executed in `byte`" << endl;
										return 0;
									}
								    

								    
									out << "int " << byte << '\n';

							}
						}
					}
				}
				
				
}
				
if(timeint == 0) {				
				if(newer[x] == 'b') {
					if(newer[x+1] == 'y') {
						if(newer[x+2] == 't') {
							if(newer[x+3] == 'y') {
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
								    	cout << "ERROR syntax not executed in `byty`" << endl;
										return 0;
									}
								    

								    
									out << "long long " << byte << '\n';

							}
						}
					}
				}
				
				
	}
