
//-----------------------------------------------------------------------------|
//                                                                             |
//	When storing or launching redl you accept the license agreement GNU GPL|
//	GNU GENERAL PUBLIC LICENSE v3.0                                        |
//                                                                             |
//-----------------------------------------------------------------------------|

//------------------------------------------|
//                                          |
//   RedL documentation for version 0.02B   |
//                                          |
//------------------------------------------|








!! GUI doc, only for linux !!


						Сompilation instruction
						
1.Create a file with the extension .rlf
2.Open a super user terminal and go to the directory with the .rlf file
3.Write 'redl' and name file .rlf -> 'redl test.rlf'

//------------------------------------------------------------------|

!!	if you want to see other types of compilation write 'redl'	!!

//------------------------------------------------------------------|



//-----------------------------------------------------------------------------|
//                                                                             |
//          If you get a segmentation error, try to recompile the file .rlf    |
//                                                                             |
//-----------------------------------------------------------------------------|




				      Syntax instruction


HELLO WORLD in REDL =>

	voice "Hello, world! \n";
OR
	voice "Hello, world!" << endl;
OR
	voice "Hello, world!" << '\n';
	





MATH PRINT in REDL =>	
	
	voice 100 + 250 << '\n';
OR
	voice 100 + 250 << endl;
	
	
	
	
	
	
	
	
RETURN =>

	return value;
	
	
	




SYSTEM COMMAND (BASH) in REDL =>

	consol "echo Hello, world!";
	
	






C++ Inserts
	
	*cout << "Hello world!" << endl;
OR
	*i++;
OR
	*break;
OR
	*continue
	
AND SO ON






//-------------------------------------------------------|
//							Data types                   |
//-------------------------------------------------------|						
							
					

STRING

	string x = "Hello world!";
	
	
	
INTEGER

	int x = 10;




FLOAT

	float x = 10.5;




BOOLEAN
	
	bool x = false/true OR 0/1;

	
ARRAY

	array x[3][25] = {{"Hello"}, {" world"}};
	
	//	3 - number of lines
	//  25 - string length (symbolically)
	
	
	
	






//--------------------------------------|	
//	Array functions                     |
//--------------------------------------|






GET ARRAY

	array myarray[5][50];
	get_array myarray, 5, 50 "text: ";
	
	
	
	

ASSIGN VALUE TO ARRAY

	array x[5][50];
	past_array x, 3, "text for assign to array";
	
	voice x[3] << endl;
	
	Conclusion:
		text for assign to array



	




	
	
	
	
	
	
//-------------------------------|
//       Checks (if's)           |
//-------------------------------|
	
	
	
Examples:
	
	int x = 5;
	int y = 0;
	
	if x > y :
		voice "YES\n";
	else
		voice "NO\n";
	end
	
	
	
	
	if x > y or x < y or x == y or x != y :
		voice "Hello world\n";
	end
	
	
	if x > y and x < y and x == y and x != y :
		voice "Hello world\n";
	end
	
	
	if x == y :
	
		voice "YES\n";
	
	elseif x > y :
		
		voice "NO\n";
	
	end
	
	
	
	
	
All operators:
	
	1. ==
	2. !=
	3. <=
	4. >=
	5. >
	6. <
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//-------------------------------------|
//                                     |
//	SWITCH CASE DEFAULT                |
//                                     |
//-------------------------------------|
	
	
	
Examples:

	int x = 3;
	
	switch x :
		
		case 1 :
			voice "1\n";
		
		case 2 :
			voice "2\n";
			
		case 3 :
			voice "3\n";
	
		default
			voice "not found\n";
	end
	
	
	
	
	
	
	
	
	
	
	
	
	
	

//-------------------------------------|
//                                     |
//	INPUTS                             |
//                                     |
//-------------------------------------|
	
	
	
	
Examples:

	int x;
	input_cin x, "text: ";
	
OR
	
	string x;
	input_get x, "text: ";
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
//-------------------------------------|
//                                     |
//	Cycles                             |
//                                     |
//-------------------------------------|



FOR
	
	int x = 0;
	for x<10, x++ :
		voice x << endl;
	end
	

WHILE
	
	int x = 0;
	while x < 10 :
		voice x << endl;
		*x++;
	end


	
	
	
	
	
	
	
	
	
//-------------------------------------|
//                                     |
//	FUNCTIONS                          |
//                                     |
//-------------------------------------|

Examples:
	
	function test > int x, int y OR null:
		
		voice x+y << endl;
		
	func_end
	
	use test > 5, 10 OR null;
	
		


	
	
	
	
	
	
	
	
	
	
//---------------------------------------|
//                                       |
//	CONVERT STRING IN INT AND VICE VERSA |
//                                       |
//---------------------------------------|		
		
		
		
Examples:

	STRING IN INT
	
		int x;
		string y = "123hello";
		
		com_int y, x;
		
	INT IN STRING
		
		int x = 123;
		string y;
		
		com_str x, y;	
		
		Extract characters from strings
		
		
		
		
		
		
		
		

//---------------------------------------|
//                                       |
//	EXTRACT CHARACTERS FROM STRINGS      |
//                                       |
//---------------------------------------|	


At the beginning

	string x = "hello";
	start x, 1;
	voice x << endl;
	
	//Conclusion: 'e'
	
In the end

	string x = "test";
	back x, 2;
	voice x << endl;
	
	//Conclusion: 's'
	
	
	
	
	
	
	
	
	
	
	
	
				//----------------------------------------\\
				//					GUI                   \\
				//                                        \\
				//----------------------------------------\\
				

Template:
	
	--------------------------------------------
	|GUI                                       |
	|                                          |
	|	glade "test.glade", "NameWindowID";    |
	|                                          |
	|                                          |
	|------------------------------------------|
	
	!! The first line must contain the text: GUI !!

	glade -> first argument (link to the .glade file) , -> second argument (ID WINDOW IN FILE GLADE);
	












