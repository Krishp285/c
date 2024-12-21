/*              multiple comment line

		AUTHOR - krish kalpesh patel
		DOC - 1 july 2023
		objective - to create candy game(exam 1)
*/
/* output :-
		  0-->candy

 left wall <-- #     #-->right wall
	       #######
	       lower part of wall
 program :-
 both wall with lower part will move and and candy to fall randomly and
 score and lifeline respectively increases or decreases

*/
//single comment line
#include<stdio.h>
// standard input output header file  (printf and scanf)
#include<conio.h>
//console input output header file  (clrscr and getch)
void main() //main() is function
		{ // start of main function
		int boxX=40,boxY=22,candyX=41,candyY=4,score=0,lifeline=3,k=0;
		// score and lifeline variables are stored in int type
		// coordinates of candy and box are declared
		char choice;
		 //character choice
		textbackground(WHITE); // background colour is white
		start: // start of full game
		clrscr(); // clear of screen
		gotoxy(boxX,boxY); // determines the position of printf (x,y)
		textcolor(BLUE); //textcolour is blue
		cprintf("#");   // colour print #
		gotoxy(boxX,boxY+1);// determines the position of printf (x,y)
		textcolor(BLUE); //textcolour is blue
		cprintf("#######");  //colour print #######
		gotoxy(boxX+6,boxY);// determines the position of printf (x,y)
		textcolor(BLUE); //textcolour is blue
		cprintf("#");    // colour print #
		gotoxy(candyX,candyY);// determines the position of printf (x,y)
		textcolor(GREEN); //textcolour of candy is green
		cprintf("0");   //colour print candy(0)
		gotoxy(65,2);// determines the position of printf (x,y)
		textcolor(BLACK);  //textcolour of candy
		cprintf("score = %d",score);   //colour print candy(0)
		gotoxy(65,3); //  determines the position of printf (x,y)
		textcolor(BLACK); //textcolour of candy
		cprintf("lifeline = %d",lifeline);   //colour print candy(0)
if(kbhit())//function kbhit= if keyboard key is pressed then which operation will take place that is determined
	{ // start of if condition
	      choice=getch();//if choice case is implement then it will hold screen for multiple increments/decrements
	      switch(choice){  //start of switch case

			case'A': if(boxX>1){ //start of if
				// if x coordinate of box is greater than 1
						boxX--;  //decrement on left side from original
				} //end of if
				break; // break seperates the cases
			case'a': if(boxX>1){ // start of if
				  // if x coordinate of box is greater than 1
						boxX--;  //decrement on left side from original
				}//end of if
				break;  // break seperates the cases
			case'S': if(boxX<74){ //start of if
				 // if x coordinate of box is greater than 1
						boxX++;//increment on left side from original
				} //end of if
				break;  // break seperates the cases
			case's': if(boxX<74){ //start of if
						boxX++; //increment on left side from original
				}  //end of if
				break;  // break seperates the cases
			case'x':exit(0); //for exit press x
				break;   // break seperates the cases
			case'X': exit(0); //for exit press X
				break; // break seperates the cases

			    } //end of switch case
	} // end of if condition
	candyY++; //increment of candy in y axis (allow to fall candy)
	if(candyY==22) //value of candy is assign
		{ //start of main  if case
		   k=candyX-boxX; //value of k to calculate score
		   if(k>1 && k<7){    //start of if case for score to calculate
		       score++;  // if condition satisfy then increment of score

		       //to play sound for increment score
		       sound(1000); // to play sound (in hertz)
		       delay(200); //to delay time period of sound
		       nosound(); //to stop sound
				 }  // end of if case for score to calculate
		   else{ //start of else
			lifeline--;
			 //to play sound for reduction of lifeline
		       sound(2000); // to play sound (in hertz)
		       delay(200); //to delay time period of sound
		       nosound(); //to stop sound

			 if(lifeline==0){//start of if case

					clrscr();//clear screen to display (game is over)
					gotoxy(40,10); // coordinate (x,y) to display
					textcolor(RED);  //textcolour of game is over
					cprintf("GAME IS OVER");  // colour print game is over
					//to play sound for reduction of lifeline
					sound(3000); // to play sound (in hertz)
					delay(200); //to delay time period of sound
					nosound(); //to stop sound
					getch(); // to hold screen for(game is over)
					exit(0);

					}//end of if case

		       }//end of else
		       candyY=3;  //y coordinate of candy is 4
		       candyX=rand()%80+1; //random function is used to fall candy
					   //+1 indicates candy not fall out of console
		      } //end of main if case
		      delay(200); //delay the falling of candy
		      goto start; // go to start (where candy falls)
		} //end of main case


