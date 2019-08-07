bool insideQuotes = false;
for(int z = 0;z<GLOBAL.length();z++) {

	if (GLOBAL[z] == '\\')
		if (GLOBAL[z+1] == '\"')
			z+=2;
													
		if (GLOBAL[z] == '\"')
			insideQuotes = !insideQuotes;
											
			if (!insideQuotes)	{
												
				if(GLOBAL[z] == 'a') {
					if(GLOBAL[z+1] == 'b') {
						if(GLOBAL[z+2] == 's') {
							
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
									
									string newoldvar = "abs(" + oldvar + ")";	    
									oldvar = "abs" + oldvar + ":";
									
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
			
								
				if(GLOBAL[z] == 'r') {
					if(GLOBAL[z+1] == 'e') {
						if(GLOBAL[z+2] == 'd') {
							if(GLOBAL[z+3] == 'i') {
								if(GLOBAL[z+4] == 'x') {
							
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
									
									string newoldvar = "sqrt(" + oldvar + ")";	    
									oldvar = "redix" + oldvar + ":";
									
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
								
				if(GLOBAL[z] == 'r') {
					if(GLOBAL[z+1] == 'o') {
						if(GLOBAL[z+2] == 'u') {
							if(GLOBAL[z+3] == 'n') {
								if(GLOBAL[z+4] == 'd') {
									if(GLOBAL[z+5] == 'c') {
							
									bool execGlobal = false;
										
									string oldvar;
									int y = z+6;
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
									
									string newoldvar = "ceil(" + oldvar + ")";	    
									oldvar = "roundc" + oldvar + ":";
									
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
						if(GLOBAL[z+2] == 'u') {
							if(GLOBAL[z+3] == 'n') {
								if(GLOBAL[z+4] == 'd') {
									if(GLOBAL[z+5] == 'f') {
							
									bool execGlobal = false;
										
									string oldvar;
									int y = z+6;
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
									
									string newoldvar = "floor(" + oldvar + ")";	    
									oldvar = "roundf" + oldvar + ":";
									
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
}

for(int z = 0;z<GLOBAL.length();z++) {	

	if (GLOBAL[z] == '\\')
		if (GLOBAL[z+1] == '\"')
			z+=2;
													
		if (GLOBAL[z] == '\"')
			insideQuotes = !insideQuotes;
											
			if (!insideQuotes)	{
								
				if(GLOBAL[z] == 'r') {
					if(GLOBAL[z+1] == 'e') {
						if(GLOBAL[z+2] == 'i') {
							
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
									
									string newoldvar = "fmod(" + oldvar + ")";	    
									oldvar = "rei" + oldvar + ":";
									
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
									
				if(GLOBAL[z] == 'e') {
					if(GLOBAL[z+1] == 'x') {
						if(GLOBAL[z+2] == 'p') {
							
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
									
									string newoldvar = "exp(" + oldvar + ")";	    
									oldvar = "exp" + oldvar + ":";
									
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
								
				if(GLOBAL[z] == 's') {
					if(GLOBAL[z+1] == 'i') {
						if(GLOBAL[z+2] == 'n') {
							
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
									
									string newoldvar = "sin(" + oldvar + ")";	    
									oldvar = "sin" + oldvar + ":";
									
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
			
									
				if(GLOBAL[z] == 'c') {
					if(GLOBAL[z+1] == 'o') {
						if(GLOBAL[z+2] == 's') {
							
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
									
									string newoldvar = "cos(" + oldvar + ")";	    
									oldvar = "cos" + oldvar + ":";
									
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
								
				if(GLOBAL[z] == 'l') {
					if(GLOBAL[z+1] == 'o') {
						if(GLOBAL[z+2] == 'g') {
							
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
									
									string newoldvar = "log(" + oldvar + ")";	    
									oldvar = "log" + oldvar + ":";
									
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
								
				if(GLOBAL[z] == 'l') {
					if(GLOBAL[z+1] == 'o') {
						if(GLOBAL[z+2] == 'g') {
							if(GLOBAL[z+3] == '1') {
								if(GLOBAL[z+4] == '0') {
							
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
									
									string newoldvar = "log10(" + oldvar + ")";	    
									oldvar = "log10" + oldvar + ":";
									
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
								
				if(GLOBAL[z] == 'a') {
					if(GLOBAL[z+1] == 's') {
						if(GLOBAL[z+2] == 'i') {
							if(GLOBAL[z+3] == 'n') {
							
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
									
									string newoldvar = "asin(" + oldvar + ")";	    
									oldvar = "asin" + oldvar + ":";
									
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
