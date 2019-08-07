if(timeint == 0) {
			
				if(newer[x] == 'r') {
					if(newer[x+1] == 'o') {
						if(newer[x+2] == 'w') {
								bool point = false;
								string row;
								int y = x+3;
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
													 
									row += newer[y];
									x++;
								}
								
								if(point == false) {
								    cout << "ERROR syntax not executed in `row`" << endl;
									return 0;
								}
								
								out << "string " << row << '\n';
								
						}
					}
				}
	}
			
