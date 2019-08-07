
	if(timeint == 0) {
				if(newer[x] == 'b') {
					if(newer[x+1] == 'o') {
						if(newer[x+2] == 'o') {
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
								    	cout << "ERROR syntax not executed in `bool`" << endl;
										return 0;
									}
								    

								    
									out << "bool " << byte << '\n';

							}
						}
					}
				}
				
		}
