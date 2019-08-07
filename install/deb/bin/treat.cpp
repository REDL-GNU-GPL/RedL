		for(int x =0;x<maxsimbhol;x++) {
			bool ignore = false;
			if(codest[x] == '\0') {
				break;
			}
			if(codest[x] == '/') {
				ignore = true;
				if(codest[x+1] == '*') {
					ignore = true;
					
					for(int y = x;y<maxsimbhol-x;y++) {
						if(codest[y] == '*') {
							if(codest[y+1] == '/') {
								break;
							}
						}
						x++;
					}
					
					
				}
			}
			
			
			if(codest[x] == '\t') {
				ignore = true;
			}
			
			if(ignore == false) {
				newer += codest[x];
			}
			
		}
