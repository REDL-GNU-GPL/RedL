


// LEN




bool lene = false;


bool insideQuotes = false;


for(int z = 0;z<GLOBAL.length();z++) {
	if (GLOBAL[z] == '\\')
		if (GLOBAL[z+1] == '\"')
			z+=2;
										
		if (GLOBAL[z] == '\"')
			insideQuotes = !insideQuotes;
								
			if (!insideQuotes)	{
				if(GLOBAL[z] == 'l') {
					if(GLOBAL[z+1] == 'e') {
						if(GLOBAL[z+2] == 'n') {
									
									
									string oldvar;
									int y = z+3;
									for(;y<150;y++) {
										if(GLOBAL[y] == ':') {
											lene = true;
											break;
										}
										z++;		 
										oldvar += GLOBAL[y];
									}
									if(lene == false) {
										cout << "ERROR syntax not executed" << endl;
										return 0;
									}	 
									
									string newoldvar = oldvar + ".length()";	    
									oldvar = "len" + oldvar + ":";
									
									insideQuotes = false;
								
								    for (size_t i = 0; i < GLOBAL.length(); i++) {
								        if (GLOBAL[i] == '\\')
								      		if (GLOBAL[i+1] == '\"')
								            	i+=2;
										
										if (GLOBAL[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (GLOBAL.compare(i, oldvar.length(), oldvar) == 0)
								                GLOBAL.replace(i, oldvar.length(), newoldvar);
								    }
									
									
								}
							}
						}
						
						
							
					
				
					}
									
				}
				

								    
							
								    
									string intgerst = "int";
									string longerst = "long";
									string shorte = "short";
									string stringer = "string";
									string charee = "char";
									
									insideQuotes = false;
								
								    for (size_t i = 0; i < GLOBAL.length(); i++) {
								        if (GLOBAL[i] == '\\')
								      		if (GLOBAL[i+1] == '\"')
								            	i+=2;
										
										if (GLOBAL[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (GLOBAL.compare(i, intgerst.length(), intgerst) == 0) {
								                cout << "ERROR syntax not executed" << endl;
								             	return 0;   
								            }
								    }
								    
								    
								    
								    
								    
								    insideQuotes = false;
								
								    for (size_t i = 0; i < GLOBAL.length(); i++) {
								        if (GLOBAL[i] == '\\')
								      		if (GLOBAL[i+1] == '\"')
								            	i+=2;
										
										if (GLOBAL[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (GLOBAL.compare(i, longerst.length(), longerst) == 0) {
								                cout << "ERROR syntax not executed" << endl;
								             	return 0;   
								            }
								    }
								    
								    
								    insideQuotes = false;
								
								    for (size_t i = 0; i < GLOBAL.length(); i++) {
								        if (GLOBAL[i] == '\\')
								      		if (GLOBAL[i+1] == '\"')
								            	i+=2;
										
										if (GLOBAL[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (GLOBAL.compare(i, shorte.length(), shorte) == 0) {
								                cout << "ERROR syntax not executed" << endl;
								             	return 0;   
								            }
								    }
								    
								    
								    insideQuotes = false;
								
								    for (size_t i = 0; i < GLOBAL.length(); i++) {
								        if (GLOBAL[i] == '\\')
								      		if (GLOBAL[i+1] == '\"')
								            	i+=2;
										
										if (GLOBAL[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (GLOBAL.compare(i, stringer.length(), stringer) == 0) {
								                cout << "ERROR syntax not executed" << endl;
								             	return 0;   
								            }
								    }
								    
								    
								    insideQuotes = false;
								
								    for (size_t i = 0; i < GLOBAL.length(); i++) {
								        if (GLOBAL[i] == '\\')
								      		if (GLOBAL[i+1] == '\"')
								            	i+=2;
										
										if (GLOBAL[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (GLOBAL.compare(i, charee.length(), charee) == 0) {
								                cout << "ERROR syntax not executed" << endl;
								             	return 0;   
								            }
								    }
								    
								    
								    string specify = "specify";
								    string showpos = "showpos <<"; 
								    
								    insideQuotes = false;
								
								    for (size_t i = 0; i < GLOBAL.length(); i++) {
								        if (GLOBAL[i] == '\\')
								      		if (GLOBAL[i+1] == '\"')
								            	i+=2;
										
										if (GLOBAL[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (GLOBAL.compare(i, specify.length(), specify) == 0) {
								                GLOBAL.replace(i, specify.length(), showpos);
								            }
								    }
							
							
							
for(int z = 0;z<GLOBAL.length();z++) {

	if (GLOBAL[z] == '\\')
		if (GLOBAL[z+1] == '\"')
			z+=2;
										
		if (GLOBAL[z] == '\"')
			insideQuotes = !insideQuotes;
								
			if (!insideQuotes)	{						
				if(GLOBAL[z] == 'r') {
					if(GLOBAL[z+1] == 'o') {
						if(GLOBAL[z+2] == 'w') {
									bool execGlobal = false;
										
									string oldvar;
									int y = z+3;
									for(;y<150;y++) {
										if(GLOBAL[y] == ':') {
											execGlobal = true;
											break;
										}
										z++;		 
										oldvar += GLOBAL[y];
									}
									    
									if(execGlobal == false) {
										cout << "ERROR syntax not executed" << endl;
										return 0;
									}	 
									
									string newoldvar = "string" + oldvar;	    
									oldvar = "row" + oldvar + ":";
									
									insideQuotes = false;
								
								    for (size_t i = 0; i < GLOBAL.length(); i++) {
								        if (GLOBAL[i] == '\\')
								      		if (GLOBAL[i+1] == '\"')
								            	i+=2;
										
										if (GLOBAL[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (GLOBAL.compare(i, oldvar.length(), oldvar) == 0)
								                GLOBAL.replace(i, oldvar.length(), newoldvar);
								    }
									
									
								}
							}
						}
						
						
							
					
				
					}
									
				}
				
				
				
				
				
				
				
				
				
				
				for(int z = 0;z<GLOBAL.length();z++) {	
				
				if (GLOBAL[z] == '\\')
					if (GLOBAL[z+1] == '\"')
						z+=2;
													
					if (GLOBAL[z] == '\"')
						insideQuotes = !insideQuotes;
											
						if (!insideQuotes)	{
								
				if(GLOBAL[z] == 'b') {
					if(GLOBAL[z+1] == 'y') {
						if(GLOBAL[z+2] == 't') {
							if(GLOBAL[z+3] == 'e') {
									bool execGlobal = false;
									
									string oldvar;
									int y = z+4;
									for(;y<150;y++) {
										if(GLOBAL[y] == ':') {
											execGlobal = true;
											break;
										}
										z++;		 
										oldvar += GLOBAL[y];
									}
									    
									if(execGlobal == false) {
										cout << "ERROR syntax not executed" << endl;
										return 0;
									}	 
									
									string newoldvar = "int" + oldvar;	    
									oldvar = "byte" + oldvar + ":";
									
									insideQuotes = false;
								
								    for (size_t i = 0; i < GLOBAL.length(); i++) {
								        if (GLOBAL[i] == '\\')
								      		if (GLOBAL[i+1] == '\"')
								            	i+=2;
										
										if (GLOBAL[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (GLOBAL.compare(i, oldvar.length(), oldvar) == 0)
								                GLOBAL.replace(i, oldvar.length(), newoldvar);
								    }
									
									
								}
							}
						}
					}
						
						
							
					}
				
									
									
				}
				
				
				
				
				
				
				
				
				
				for(int z = 0;z<GLOBAL.length();z++) {	
				
				if (GLOBAL[z] == '\\')
					if (GLOBAL[z+1] == '\"')
						z+=2;
													
					if (GLOBAL[z] == '\"')
						insideQuotes = !insideQuotes;
											
						if (!insideQuotes)	{
											
				if(GLOBAL[z] == 'b') {
					if(GLOBAL[z+1] == 'y') {
						if(GLOBAL[z+2] == 't') {
							if(GLOBAL[z+3] == 'y') {
									bool execGlobal = false;
									
									string oldvar;
									int y = z+4;
									for(;y<150;y++) {
										if(GLOBAL[y] == ':') {
											execGlobal = true;
											break;
										}
										z++;		 
										oldvar += GLOBAL[y];
									}
									    
										 
									if(execGlobal == false) {
										cout << "ERROR syntax not executed" << endl;
										return 0;
									}
									
									string newoldvar = "long long" + oldvar;	    
									oldvar = "byty" + oldvar + ":";
									
									insideQuotes = false;
								
								    for (size_t i = 0; i < GLOBAL.length(); i++) {
								        if (GLOBAL[i] == '\\')
								      		if (GLOBAL[i+1] == '\"')
								            	i+=2;
										
										if (GLOBAL[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (GLOBAL.compare(i, oldvar.length(), oldvar) == 0)
								                GLOBAL.replace(i, oldvar.length(), newoldvar);
								    }
									
									
								}
							}
						}
					}
						
						
							
					}
				
									
									
				}
				
				
				
				
				for(int z = 0;z<GLOBAL.length();z++) {		
				
				if (GLOBAL[z] == '\\')
					if (GLOBAL[z+1] == '\"')
						z+=2;
													
					if (GLOBAL[z] == '\"')
						insideQuotes = !insideQuotes;
											
						if (!insideQuotes)	{
						
										
				if(GLOBAL[z] == 'd') {
					if(GLOBAL[z+1] == 'u') {
						if(GLOBAL[z+2] == 'a') {
							if(GLOBAL[z+3] == 'l') {
									bool execGlobal = false;
									
									string oldvar;
									int y = z+4;
									for(;y<150;y++) {
										if(GLOBAL[y] == ':') {
											execGlobal = true;
											break;
										}
										z++;		 
										oldvar += GLOBAL[y];
									}
									    
										 
									if(execGlobal == false) {
										cout << "ERROR syntax not executed" << endl;
										return 0;
									}
									
									string newoldvar = "double" + oldvar;	    
									oldvar = "dual" + oldvar + ":";
									
									insideQuotes = false;
								
								    for (size_t i = 0; i < GLOBAL.length(); i++) {
								        if (GLOBAL[i] == '\\')
								      		if (GLOBAL[i+1] == '\"')
								            	i+=2;
										
										if (GLOBAL[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (GLOBAL.compare(i, oldvar.length(), oldvar) == 0)
								                GLOBAL.replace(i, oldvar.length(), newoldvar);
								    }
									
									
								}
							}
						}
					}
						
						
							
					
					}
									
									
				}
				
				
				
				
				
				
				
				for(int z = 0;z<GLOBAL.length();z++) {		
				
				if (GLOBAL[z] == '\\')
					if (GLOBAL[z+1] == '\"')
						z+=2;
													
					if (GLOBAL[z] == '\"')
						insideQuotes = !insideQuotes;
											
						if (!insideQuotes)	{
						
										
				if(GLOBAL[z] == 'f') {
					if(GLOBAL[z+1] == 'l') {
						if(GLOBAL[z+2] == 'o') {
							if(GLOBAL[z+3] == 'a') {
								if(GLOBAL[z+4] == 't') {
									bool execGlobal = false;
									
									string oldvar;
									int y = z+5;
									for(;y<150;y++) {
										if(GLOBAL[y] == ':') {
											execGlobal = true;
											break;
										}
										z++;		 
										oldvar += GLOBAL[y];
									}
									    
									if(execGlobal == false) {
										cout << "ERROR syntax not executed" << endl;
										return 0;
									}	 
									
									string newoldvar = "float" + oldvar;	    
									oldvar = "float" + oldvar + ":";
									
									insideQuotes = false;
								
								    for (size_t i = 0; i < GLOBAL.length(); i++) {
								        if (GLOBAL[i] == '\\')
								      		if (GLOBAL[i+1] == '\"')
								            	i+=2;
										
										if (GLOBAL[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (GLOBAL.compare(i, oldvar.length(), oldvar) == 0)
								                GLOBAL.replace(i, oldvar.length(), newoldvar);
								    }
									
								}
							}
						}
					}
				}
						
						
							
					}
				
									
									
				}
				
				
				
				
				
				
				
				for(int z = 0;z<GLOBAL.length();z++) {	
				
				if (GLOBAL[z] == '\\')
					if (GLOBAL[z+1] == '\"')
						z+=2;
													
					if (GLOBAL[z] == '\"')
						insideQuotes = !insideQuotes;
											
						if (!insideQuotes)	{
						
											
				if(GLOBAL[z] == 'b') {
					if(GLOBAL[z+1] == 'o') {
						if(GLOBAL[z+2] == 'o') {
							if(GLOBAL[z+3] == 'l') {
									bool execGlobal = false;
									
									string oldvar;
									int y = z+4;
									for(;y<150;y++) {
										if(GLOBAL[y] == ':') {
											execGlobal = true;
											break;
										}
										z++;		 
										oldvar += GLOBAL[y];
									}
									    
										 
									if(execGlobal == false) {
										cout << "ERROR syntax not executed" << endl;
										return 0;
									}
									string newoldvar = "bool" + oldvar;	    
									oldvar = "bool" + oldvar + ":";
									
									insideQuotes = false;
								
								    for (size_t i = 0; i < GLOBAL.length(); i++) {
								        if (GLOBAL[i] == '\\')
								      		if (GLOBAL[i+1] == '\"')
								            	i+=2;
										
										if (GLOBAL[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (GLOBAL.compare(i, oldvar.length(), oldvar) == 0)
								                GLOBAL.replace(i, oldvar.length(), newoldvar);
								    }
									
									
								}
							}
						}
					}
						
						
							
					}
				
									
									
				}
				
				
				
				
				
				
				
				
				
				
				
				for(int z = 0;z<GLOBAL.length();z++) {	
				
				if (GLOBAL[z] == '\\')
					if (GLOBAL[z+1] == '\"')
						z+=2;
													
					if (GLOBAL[z] == '\"')
						insideQuotes = !insideQuotes;
											
						if (!insideQuotes)	{
						
											
				if(GLOBAL[z] == 'a') {
					if(GLOBAL[z+1] == 'r') {
						if(GLOBAL[z+2] == 'r') {
							if(GLOBAL[z+3] == 'a') {
								if(GLOBAL[z+4] == 'y') {
									bool execGlobal = false;
									
									string oldvar;
									int y = z+5;
									for(;y<150;y++) {
										if(GLOBAL[y] == ':') {
											execGlobal = true;
											break;
										}else if(GLOBAL[y] == '=') {
											cout << "ERROR use func `past()`";
											return 0;
										}else if(GLOBAL[y] == '[') {
											cout << "ERROR array cells are already selected `max size array [800]`";
											return 0;
										}
										z++;		 
										oldvar += GLOBAL[y];
									}
									    
									if(execGlobal == false) {
										cout << "ERROR syntax not executed" << endl;
										return 0;
									}	 
									
									string newoldvar = "char" + oldvar + " [800][500]";	    
									oldvar = "array" + oldvar + ":";
									
									insideQuotes = false;
								
								    for (size_t i = 0; i < GLOBAL.length(); i++) {
								        if (GLOBAL[i] == '\\')
								      		if (GLOBAL[i+1] == '\"')
								            	i+=2;
										
										if (GLOBAL[i] == '\"')
								            insideQuotes = !insideQuotes;
								
								        if (!insideQuotes)
								            if (GLOBAL.compare(i, oldvar.length(), oldvar) == 0)
								                GLOBAL.replace(i, oldvar.length(), newoldvar);
								    }
									
								}
							}
						}
					}
				}
						
						
							
					}
				
									
									
				}
				
		
		
	
			
