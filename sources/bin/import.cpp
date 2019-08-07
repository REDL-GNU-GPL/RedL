if(timeint == 0) {
	if(newer[x] == 'i') {
		if(newer[x+1] == 'm') {
			if(newer[x+2] == 'p') {
				if(newer[x+3] == 'o') {
					if(newer[x+4] == 'r') {
						if(newer[x+5] == 't') {
								bool point = false;
								string imp;
								int y = x+6;
									for(;y<300;y++) {
										if(newer[y] == ';') {
											point = true;
											break;
										}		 
										imp += newer[y];
										x++;
									}
							
								if(point == false) {
								    	cout << "ERROR syntax not executed `import`" << endl;
										return 0;
									}
								    
							
								for(int i = 0; i < imp.length(); i++) {
							    	if(imp[i] == ' ') { 
							            imp.erase(i,1);
							            i--;
							        }
							  	}
	
								
			
								
								#include "importable.cpp"
	
							
						}
					}
				}
			}
		}
 }

}



