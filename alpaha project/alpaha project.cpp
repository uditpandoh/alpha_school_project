///////////////////////////////////////////////////////////////////////////////////////////////////////
#include "stdafx.h"
#include <conio.h>
#include <string>
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////
void main()
{
start:
cout <<" To play the game type short phrases into the line below. For example "            <<endl;
cout <<" if you input the word 'look' the game gives you a description of your"            <<endl;
cout <<" surroundings. Typing commands gives you a list of all the possible commands "     <<endl;
cout <<" take,look at (object),examine, helps you to interact with objects around you "    <<endl;                              
cout <<" Its a part of the game to figure out different commands and seeing the outcome "  <<endl;
cout <<" You have the freedom to be as creative and imaginaive as you can"                 <<endl <<endl;
cout <<" would you like more instructions"                                                 <<endl;
cout <<">";
string welcome;
getline(cin, welcome);
if (welcome == "no")
{
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//}0
//void main()
//{
cout <<endl <<endl;
cout <<" Date - October 22nd "                                                             <<endl;
cout <<" Its been a three days since your best frined had died,a champioin swimmer"        <<endl;
cout <<" Drowning in the swimming pool was the last thing you could have imagined"         <<endl;
cout <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl<<" ";
system ("pause");
system ("cls.");
cout <<" You know  deep down inside it couldnt have been a accident " <<endl;
cout <<" All that remains is his memory and firm decison to seek for the truth";
cout <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl <<endl<<" ";
system ("pause");
system ("cls.");
system   ("color 02");
cout     <<" You are standing in the corridor of the 11th block  "                         <<endl;
cout     <<" Air thinks around you, you could here various sounds everywhere"              <<endl <<endl;
//cout     <<" ";
//system   ("pause") ;
//system   ("cls.")  ;
cout     <<" In front of you is the basketball court Classes are in progress"               <<endl;
cout     <<" at the end of corridor there is the cordinators room and staff room"           <<endl;
cout     <<" you can also go to your classroom";
cout <<endl <<endl <<">";
string first;
first:
getline (cin , first) ;
//////////////////////////////////////////////////////////////////////////////////////////////////////
if  (first == "go classroom" )
{
cout <<endl <<endl  <<" You enter the classroom " ;
cout <<endl <<" Since its a free period everyone is engaged in small talks";
cout <<endl <<" Varun is cracking some jokes but you are too far to listen them "       <<endl <<endl;
cout <<">";
string classroom;
getline(cin ,classroom);
if (classroom == "go near varun")
{
cout   <<" enter joke here";
goto first;
}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
else if (first == "go office")
{
cout <<" You are stnading outside the cordinatiors office"                              <<endl;
cout <<" Are you sure you want to enter ?"                                              <<endl; 
string coffice;
getline (cin ,coffice);
if (coffice == "no")
{
goto first;
}
//else if (coffice == " You enter the office sir asks you as soon as he spots you");
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
else if (first == "go staff room")
{
cout <<" You enter the staff room " <<endl;
cout <<" You hear teachers talking about the strange death of udit" <<endl;
cout <<" You cant stand the topic on udit death so you exit to the corridor" <<endl;
goto first;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
else
{
cout <<endl<<" further programming going on";
}
}
else 
{
cout <<" to be added soon";
goto start;
}
}