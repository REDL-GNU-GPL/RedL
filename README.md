# RedL
# http://www.red-lang.ru/
RedL programming language 

Last version: 0.05B


# Official Video Documentation - https://www.youtube.com/channel/UCvp-MnTxoqh06u7CviDBijA?view_as=subscriber 

# Email - dmitrykeof@gmail.com


# EN
RedL - C-like programming language.

Purpose: Simplify c ++ and make it stable.

Why choose RedL? ->

1. Probably every young programmer thought about
what language to learn and the look fell mainly on python and
c ++, but couldn’t decide, RedL
middle ground between Python and C ++.

2.Very convenient language code architecture allows developers
bring my contribution to this language, thereby helping him
in development, one of them is to write your own library.

3.Just write code in this language is a pleasure :)


Scope: Multitasking.




# RU
RedL - Си подобный язык программирования .

Цель: синтаксически упростить c++ и сделать его стабильным.

Почему стоит выбрать именно RedL ? ->

1.Наверно каждый молодой программист думал над тем
какой язык ему учить и взгляд падал в основном на python и
c++ ,но никак не мог определиться ,вот именно RedL
золотая середина между Python и C++.

2.Очень удобная архитектура кода языка позволяет разработчикам
привнести в данный язык свою лепту ,тем самым и помогаю ему
в развитии,одно из таких - написать свою библиотеку.

3.Просто писать код на данном языке одно удовольствие :)


Область применения: Мультизадачность.



# Deutch

RedL - C-ähnliche Programmiersprache.

Zweck: Vereinfachen Sie c ++ und machen Sie es stabil.

Warum wählen Kirsche? ->

1. Wahrscheinlich hat jeder junge Programmierer darüber nachgedacht
Welche Sprache zu lernen und das Aussehen fiel vor allem auf Python und
c ++, konnte mich aber nicht entscheiden, RedL
Mittelweg zwischen Python und C ++.

2.Sehr komfortable Sprachcodearchitektur ermöglicht Entwicklern
Bringe meinen Beitrag zu dieser Sprache und hilf ihm dabei
In der Entwicklung besteht eine davon darin, eine eigene Bibliothek zu schreiben.

3. Schreiben Sie einfach Code in dieser Sprache ist ein Vergnügen :)


Geltungsbereich: Multitasking.





# Official Video Documentation - https://www.youtube.com/channel/UCvp-MnTxoqh06u7CviDBijA?view_as=subscriber 

# Email - dmitrykeof@gmail.com



# RedL
RedL programming language 



# EN DOC


/////////////////////////////////////////////

//                                         //

//       Official RedL documentation       //

//   Official site - http://red-lang.ru/   //

//                                         //

/////////////////////////////////////////////

https://github.com/REDL-GNU-GPL/RedL/blob/master/license.md

https://www.gnu.org/licenses/gpl-3.0


                    
					
	//-------------------------------------------------------------//	
  
	//					Library Creation                                   //
  
	//-------------------------------------------------------------//	


Attention, before reading further read the license - LIBRARY ADDITION LICENSE <LAL>
  
https://github.com/REDL-GNU-GPL/RedL/blob/master/license%20library.md


The creation of libraries takes place in the catalog - redl/libs/

Also, if you need to connect the C ++ library, go to the libsadd.cpp in the catalog - redl/libs/


Example:


if((libs.find("nameyourlib", 0) + 1)) {

	out << "#include <iostream>" << '\n';
  
}

Recommendation: take the code (its excerpts from) the library - vprint

if((libs.find("nameyourlib", 0) + 1)) {

	Write a command detection check here

}

Library Code Example:

	if((libs.find("temp", 0) + 1)) {
		if(timeint == 0) {
			if (newer[x] == 't') {
				if (newer[x+1] == 'e') {
					if (newer[x+2] == 's') {
						if (newer[x+3] == 't') {
							out << "cout << \"Hello, world!\" << endl;" << '\n';
						}
					}
				}
			}
		}

	}

now in the main file - redl/redl.cpp write in the loop for on the line - 106 #include "libs/namelib"


Now if we write the following code:

	Code redl:
  
		libs vprint;
    
		libs temp; /* its this is the library we just created, by the way this is a safe comment */

		main {
		
			test
		
			exit
		}

And we get: Hello, world!




			
			
			
			
			
			GLOBAL COMMAND

A global command is a command that works inside others

for example: len (length)

	libs vprint;
	
	main {
	
		row x = "hello";
		voice len x: ;
	
		exit
	}
			
			
The directory with global commands is located in: redl/bin/GLOBAL_COMMAND_LIBS/

If you want global command in your (regular) command, then write - 	#include "GLOBAL_COMMAND_LIBS/GLOBAL.cpp"


Command example:




----------------------------------------------------------------------------------------------------------------------

	if(timeint == 0) {
				if(newer[x] == 'v') {
					if(newer[x+1] == 'o') {
						if(newer[x+2] == 'i') {
							if(newer[x+3] == 'c') {
								if(newer[x+4] == 'e') {
									bool exec1 = false;
									bool exec2 = false;
									string GLOBAL;        // The line where there may be a global command should be called GLOBAL
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
								                exec2 = true;
								                break;
								            }
								        }
													 
										GLOBAL += newer[y];
										x++;
									}
									if(exec2 == false) {
										cout << "ERROR syntax not executed in `voice`" << endl;
										return 0;
									}
										    
									#include "../../GLOBAL_COMMAND_LIBS/GLOBAL.cpp"	    
									out << "cout << " << GLOBAL << "<< endl;" << '\n';
						
								}
							}
						}
					}
				}	
		}
    
----------------------------------------------------------------------------------------------------------------------






	//-------------------------------------------------------------//				
	//					        RedL                                       //
	//-------------------------------------------------------------//	


In the programming language redl there are libraries at the time

of the creation of this documentation there are only two of them - vprint,math

More on vprint:

	Functions:
  
		1.Information output and input
    
		2.Data Types and Their Operations
    
			1.byte 
      
			2.byty 
      
			3.row 
      
			4.float
      
			5.dual
      
			6.array
      
			7.bool
      
		3.Checks - if, else, else if, if.in ...
    
		4.Relay(switch), case, default
    
		5.Cycles - while, for, do while ...
    
		6.String and array's functions
		











Code Template:

	libs any_library; /* vprint or math */

	main {
	
		/* its comment use on one line only */
	
		exit     /* only for main */
	}


1.Information output:

	voice "Hello world!" << " :) ";
	
		Answer: Hello world! :) 
		


2.Data Types and Their Operations

	Data Types(VAR): 
  
		byte - Integers can be stored from −2.147.483.648 to 2.147.483.647
    
		byty - Integers can be stored two times more than byte
    
	    float - Floating point number
      
		dual - Floating point number ,but twice as much as the float
    
		row - text "hello world!";
    
		bool - true/false or 1/0
    
		array - array maximum value 800 to 500 ([800][500])
		
	
	Their Operations(VAR):
  
		To change a variable, you can enter the following:
			
			replay(nameVAR,5 + 5);
		
		increment decrement:
		
			incpost(nameVAR); /* nameVAR++ */ only for num
      
			incpref(nameVAR); /* ++nameVAR */ only for num
			
			decpost(nameVAR); /* nameVAR-- */ only for num
      
			decpref(nameVAR); /* --nameVAR */ only for num
	
	CPP LINE:
  
		`x++;
    
		`cout << "hello world!" << endl;
    
		...
	
	
3.Inputs
	
	cinrow(namevar, "text: "); /* only for row's */
	
	Clarification - if you meet `);` know that this is a separate token that cannot be separated by spaces
	
	input(x,"text: "); /* For all data types but does not take a value after a space */
	
	cinarray(x[0],"text: "); /* only for array */
	
4.System command (cmd/terminal)
	
	console("echo hello world!");
	
	/* If you need to insert a variable in this command -> */
	
	console(("echo " + namevar).c_str());
	

5.If, else, else if, if.in 

	test example (in main):
		
		row x = "hello";
		
		if(x == "hello") {
			voice "yes";
		}else {
			voice "no";
		}

		------------------
		
		row x = "test";
		
		if(x == "hello") {
			voice "yes";
		}else if(x == "test") {
			voice "no";
		}
		
		------------------
		
		row x = "text text hello text text";
		
		if.in("hello" > x) { /* Check for text in a variable */
			voice "yes";
		}
		
		------------------
		
		Verification Operators
		
		== (Equally)
		!= (Not equal)
		< (Less)
		> (Better)
		<= (Less or equal)
		>= (Better or equal)
			

6.Relay, box, default : switch, case, default
	test example (in main):
		
		byte x;
		input(x, "write any one num: ");
		
		relay(x) {
			box 1:
				voice "its num 1, i know!";
				break
			box 2:
				voice "its num 2, i know!";
				break;
			
			default
				voice "i dont know this num - " << x;
		
		}

7.Cycles
	
	1.Cycle for(example):
		
		byte x = 0;
		for(x<=10;x++) {
			voice x;
		}
	
	2.Cycle while(example):
		byte x = 0;
		while(x<=10) {
			voice x;
			incpost(x); /* or `x++; */
		}
	
	3.Cycle do while(example):
		byte x = 0;
		do {
			voice x;
			incpost(x); /* or `x++; */
		}while(x<=10);
	
	---------------------------------
	Micro command for cycles:
		1.break
		2.skip

8.Function for commands
	
	1.going(25); /* Translate the beginning of the line by 25 pixels */
	2.swap(var1,var2); /* Change the values of two variables */
	
	---------- for array ------------
	delar namearray; /* delete array (If you need to clear memory) */
	past(x,10 > "hello"); /* Insert value into array */
	---------------------------------
	
	Convert a string to a number and vice versa:
		Convert from string to number:
			cinbyts(string > number);
			
		Convert from string to number:
			cinrow(number > string);
			
			
!! IMPORTANT WARNING WHEN YOU USE GLOBAL COMMANDS (COMMANDS INSIDE ANOTHER) IT SHOULD END `:` !!

Functions (not related to the library vprint)
!!The function should be above the main function!!
	example:
		libs vprint;
		
		fun test /* <- name function */ (byte x:,byte y: /* <- argument function */) {
			voice "hello world";
		}
		
		main {
			
			use test -> (10,5);
			
			exit
		}

                    
					
					
					LIBRARY 'MATH'
					
for using this lib, write - libs math;
example:
	libs math;
	
	main {
	
		exit
	}
	
1.Command(only global command)
	1.The absolute value of the number:
		voice abs -10.5: ;
	
	2.Number root
		voice redix 1024: ;
	
	3.Rounding
		voice roundc 10.3: ;
		voice roundf 10.3: ;
	
	4.exponent value
		voice exp 5.0: ;
	
	5.Sine cosine
		voice sin 30.0: ;
		voice cos 60.0: ;
	
	6.Natural logarithm
		voice log 5.5: ;
	
	7.Decimal logarithm
		voice log10 1000.0: ;
		
	8.Arcsine values
		voice asin 0.5: ;
