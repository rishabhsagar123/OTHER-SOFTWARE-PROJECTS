#include<stdio.h>   //preproccer
#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<constrea.h>
#include<dos.h>
int main()
{
clrscr();
constream cout;
textcolor(GREEN);
textbackground(BLACK);
char newuser[50];
char newpasswd[50];
char signup[]="Sign";
char wishes[50];        //Intisillisation
char commands[]="Game";
char gamer[]="snake";
char username[50];
char calc[]="Calc";
char user[]="rishabh";
char pass[]="rishabh";
char server[]="2";
char smd[]="1";
float addnumi;
float addnumii;
int  flob;
char password[50];
time_t now;
time(&now);
epic:

cout<<"__________________________________\n";
cout<<setclr(14);


cout<<"*******             *******    ********\n";
cout<<"/**////**           **/////**  **//////\n";
cout<<"/**   /**   ****** **     //**/**\n";
cout<<"/*******   **//// /**      /**/*********\n";
cout<<"/**///**  //***** /**      /**////////**\n";
cout<<"/**  //**  /////**//**     **        /**\n";
cout<<"/**   //** ******  //*******   ********\n";
cout<<"//     // //////    ///////   ////////\n";
delay(2000);
cout<<"\n";
cout<<"\n";
textcolor(GREEN);
cprintf("%s", ctime(&now));
textcolor(YELLOW);

cout<<"__________________________________\n";
cprintf("    RsOS beta OS v.1.0\n   ");
delay(2000);
cout<<"\n";
cout<<"__________________________________\n";
textcolor(RED);
textbackground(BLACK);
cprintf("Created and developed by The GamEvolution.This program may have some minor bugs");
delay(2000);
cout<<"\n";
textcolor(BLUE);
textbackground(BLACK);
cprintf("Please report any bugs found to The GamEvolution.");

cout<<"\n\n\n";
cout<<"_______________\n";
textcolor(YELLOW);
textbackground(BLACK);
cprintf("Authentication");
delay(2000);
cout<<"\n";
cout<<"________________\n";
cout<<"Username: \n";
cin>>username ;
cin.ignore();
cout<<"Password: \n";
delay(2000);
cin>>password;
cin.ignore();
if(strcmp(username,user)==0&&strcmp(password,pass)==0)
{ back:
cout<<"Loged in as superuser\n";
cout<<"Welcome to RsOs OS\nCommand: ";
cin>>wishes;
if(strcmp(wishes,calc)==0)
{
textcolor(YELLOW);
textbackground(BLACK);
cprintf("Welcome to simple calculator");
cout<<"\n";
cout<<"1.Addition\n";
cout<<"2.Substraction\n";
cout<<"3.Multiplication\n";
cout<<"4.Division\n";
cout<<"5.About calculator\n";
cin>>flob;
switch(flob)
{
	     case 1 :
		  cout<<"Enter 1st number : ";
		  cin>>addnumi;
		  cout<<"Enter 2nd Number:";
		  cin>>addnumii;
		  cout<<"You're answer is "<<addnumi+addnumii<<endl;
		  cin.get();
		  goto back;

	     case 2 :
		  cout<<"Enter 1st number: ";
		  cin>>addnumi;
		  cout<<"Enter 2nd number: ";
		  cin>>addnumii;
		  cout<<"You're answer is: "<<addnumi-addnumii<<endl;
		  cin.get();
		  goto back;

	     case 3 :
		  cout<<"Enter 1st number: \n";
		  cin>>addnumi;
		  cout<<"Enter 2nd number: \n";
		  cin>>addnumii;
		  cout<<"You're answer is "<<addnumi*addnumii<<endl;
		  cin.get();
		  goto back;

		  case 4 :  cout<<"Enter 1st number: \n";
		  cin>>addnumi;
		  cout<<"Enter 2nd number: \n";
		  cin>>addnumii;
		  cout<<"You're answer is "<<addnumi/addnumii<<endl;
		  cin.get();
		  goto back;

		  case 5 : cout<<"The creator and developer of this calculator is The GamEvolution.\nThe GamEvolution is an";
		  delay(2000);
		  cout<<"is a Software Company that builds intresting products"<<endl;
		  delay(2000);
		  cout<<"Rishabh Sagar was the developer of the Simple OS\n\n\n";
		  delay(2000);
		  cout<<"The program may be redistrubuted and used \nin other programs no copyright acts will be violanted\n\n";
		  delay(2000);
		  cout<<"\n\n\n\n\n";

		  }

		  cin.get();
		  goto epic;
		}


if(strcmp(wishes,commands)==0)
{

{
int menu;
int choser;
int maner;
int score=0;
char fixit[100];
char epic[100];
int  start;
char command[50];
char deface[]="3";
char closing[]="1";
char server[]="2";
char frk[]="2";
char trj[]="3";
char hyd[]="4";
char keyl[]="5";
char twocommand[50];
leg:
cout<<"_______________________________________________\n";
cout<<"       ***Welcome to RsOs Game***           \n";
cout<<"      ~(By The GamEvolution)~                        \n";
cout<<"_______________________________________________\n";

cout<<"\nPlease enter you're name:  " ;
cin>>epic;
cin.ignore();
cout<<"Welcome  "<<epic<<"\n";
cout<<"Please select enter the number: \n";
cout<<"1.Start\n";
cout<<"2.Credits\n";
cin>>menu;
switch(menu)
{
case 1:
monster:
cout<<"         RsOs vista OS    \n";
time_t now;
time(&now);
printf("%s", ctime(&now));
cout<<"If you want an hint press cheat \n";
cout<<"  Enter password: ";
cin>>start;
cin.ignore ();
switch(start)
{
case 1: cout<<" The password is conecutive number from 1 to 3.  ";
cin.get();
goto monster;
break;
case 123: cout<<"You successfully logged on as Superuser\n";
cout<<"\n";
server:
cout<<"Welcome To The Learning Os Here You Can Learn About Ethical Hacking Tricks and Hacks By through Games\n";
cout<<"1.What is The Use of Ethical Hacking?\n";
cout<<"2.How You Can Protect Your Computer from that?\n";
cout<<"3.Ready to Play-CyberWar Game type for Yes (yes) and for No (no)\n";
cout<<"Enter Command: \n";
cin>>command;
if(strcmp(command,smd)==0)
{
textcolor(BLUE);
cout<<"Ethical Hacking is the study where it describes how you can protect your system against hackers and viruses..\n";


cout<<"\n";
cout<<"\n";

cin.get();
goto server;
}
if(strcmp(command,server)==0)
{
textcolor(RED);
cout<<"You Can Protect Your System from Hacking by Various Antiviruses, Firewalls \n";


cout<<"\n";
cout<<"\n";

cin.get();
goto server;
}
if(strcmp(command,deface)==0)
{
	play:
textcolor(RED);
cout<<"This Game is About Some Attacks and Hacks That You Face in a Game Your Aim To Stop Them\n";
cout<<"See This Game Is Not Hacking Your System or Software its not realistic\n";
cout<<"This Game Gives you Brief About How You Can Stop Any Attack and Viruses\n";
textcolor(GREEN);
cout<<"-----------------------Let's Start!!!-----------------------\n";
textcolor(BLUE);
cout<<"1.About Company\n";
cout<<"2.Face Fork Bomb Attack\n";
cout<<"3.Face Trojan Attack\n";
cout<<"4.Face Hydra Attack\n";
cout<<"5.Face KeyLogger Attack\n";
cin>>twocommand;
if(strcmp(twocommand,closing)==0)
{
			cout<<"Deface page uploaded\n";
			cout<<"Welcome to the new homepage: \n";
			cout<<"___________________________________________________________________________\n";
			cout<<"The GamEvolution RsOs operating system.                                 \n";
			cout<<"___________________________________________________________________________\n";
			cout<<"www.gamevolution.in \n";
			cout<<"___________________________________________________________________________\n";
			cout<<"#\n";
			cout<<"#\n";
			cout<<"#\n";
			cout<<"#####\n";
			cout<<"#   # Creators of RsOs Please improve you're security\n";
			cout<<"       This website is safe all the information is gathered\n";
			cout<<"      Notice to the Signup information: Add Email/Add Password\n";
			cout<<" # The GamEvolution is a Software Company Builds Intresting Products\n";
			cout<<" The website network servers are online(You can log in)\n.........";
			cout<<"_____________________________________________________________________________\n";
		     cin.get();
		     goto play;


		     }
if(strcmp(twocommand,frk)==0){
	misr:
	cout<<"\n";
	textcolor(BLACK);
	textbackground(WHITE);
	  cout<<"So Fork Bomb is Active, Now You Need To Stop It Which Action You Choose is best one:-\n";
	  cout<<"1.Use taskkill /f /im cmd.exe in command prompt.\n";
	  cout<<"2.Use Just Closing Your Computer.\n";
	  cout<<"3.Want To Know What is Fork Bomb.?\n";
	  cin>>choser;
	  switch(choser)
	  {
	    case 1 :
	       cout<<"Bravo Right Answer You Get Full Points\n";
	      score+=5;
	      cout<<"Your Score:"<<score;
	      goto troka;
	      break;

	    case 2 :
	     cout<<"This is Also Correct But Not That Much\n";
	     score+=3;
	     cout<<"Your Score:"<<score;
	     goto troka;
	     break;

	     case 3 :
	     cout<<"Fork Bomb is a Virus That Majorly Hangs Your System, its like a infinite loop program that damages Your Computer Completely..\n";
	     cout<<"Lets Win this Virus.Go Back To Game type:- y(For Yes) and n(For No)\n";
	     cin>>fixit;
	    if(strcmp(fixit,"y")==0){
		goto misr;

	    }else{
		score-=1;
		goto play;
		

	    }



	     default :
	     cout<<"Please Choose Right Option :- Start Again\n";
	      goto misr;

	  }

     }
   if(strcmp(twocommand,trj)==0){
    troka:
    cout<<"\n";
	 textcolor(RED);
	 textbackground(BLACK);
 	 cout<<"So Trojan is Active, Now You Need To Stop It Which Action You Choose is best one:-\n";
	  cout<<"1.Use taskkill /f /im cmd.exe in command prompt.\n";
	  cout<<"2.Use Just Closing Your Computer.\n";
	  cout<<"3.First Know Which Service is running by using Command tasklist then Choose First Option\n";
	  cout<<"4.Want To Know What is Trojan Virus?\n";
	  cin>>choser;
	  switch(choser)
	  {
	  case 1:
	   cout<<"Bravo This Command Works Really Good But not Completely\n";
	   score+=2;
	   cout<<"Score:"<<score;
           goto hydraos;
	   
	   break;

	  case 2:
	  cout<<"This is One is Not Right Option\n";
	  score+=0;
	  cout<<"Score:"<<score;
          goto hydraos;
	  
	  break;

	  case 3:
	  cout<<"Exact Right Answer\n";
	  cout<<"Tasklist Used in Command Prompt To Get the Services that is Currently Running in Your System.\n";
	  cout<<"Taskkill Is Used to Kill that Service\n";
	  score+=5;
	  cout<<"Score:"<<score;
          goto hydraos;
	  
	  break;

	  case 4:
	  cout<<"Trojan is a Virus That Deletes Your Important Files On Your System.\n";
	  cout<<"1.Lets Win this Virus\n";
	  cout<<"2.Want To Lose\n";
	  cin>>maner;
	  switch(maner){
	  	case 1 :
	  	  goto troka;
	  	  break;
	  
	   case 2 :
	  score-=1;
	  goto play;
	  break;

	  default:
	  cout<<"Choose Correct Option\n";
	  goto misr;
	}

	  break;

	  default:
	  cout<<"Choose Correct One\n";
	  goto troka;

	}

	}


if(strcmp(twocommand,hyd)==0){
    hydraos:
    cout<<"\n";
	 textcolor(GREEN);
	 textbackground(BLACK);
 	 cout<<"So Hydra Virus Made In VBs is Active, Now You Need To Stop It Which Action You Choose is best one:-\n";
	  cout<<"1.Use taskkill /f /im wscript.exe in command prompt.\n";
	  cout<<"2.Use Just Closing Your Computer.\n";
	  cout<<"3.First Know Which Service is running by using Command tasklist then Choose First Option\n";
	  cout<<"4.Want To Know What is Hydra Virus?\n";
	  cin>>choser;
	  switch(choser)
	  {
	  case 1:
	   cout<<"Bravo This Command Works Really Good But not Completely\n";
	   score+=2;
	   cout<<"Score:"<<score;
	   goto keylos;
	   break;

	  case 2:
	  cout<<"This is One is Not Right Option\n";
	  score+=0;
	  cout<<"Score:"<<score;
	  goto keylos;
	  break;

	  case 3:
	  cout<<"Exact Right Answer\n";
	  cout<<"Tasklist Used in Command Prompt To Get the Services that is Currently Running in Your System.\n";
	  cout<<"Taskkill Is Used to Kill that Service\n";
	  score+=5;
	  cout<<"Score:"<<score;
	  goto keylos;
	  break;

	  case 4:
	  cout<<"Hydra Virus Made In VBs Is Infinite Loop Program That Hangs The Computer.\n";
	  cout<<"1.Lets Win this Virus\n";
	  cout<<"2.Want To Lose\n";
	  cin>>maner;
	  switch(maner){
	  	case 1 :
	  	  goto hydraos;
	  	  break;
	  
	   case 2 :
	  score-=1;
	  goto play;
	  break;

	  default:
	  cout<<"Choose Correct Option\n";
	  goto misr;
	}

	  break;

	  default:
	  cout<<"Choose Correct One\n";
	  goto hydraos;

	}

	}



if(strcmp(twocommand,keyl)==0){
    keylos:
    cout<<"\n";
	 textcolor(RED);
	 textbackground(BLACK);
 	 cout<<"Hey Keylogger Attack Made In Python Language Is Active, Now You Need To Stop It Which Action You Choose is best one:-\n";
	  cout<<"1.Use taskkill /f /im servicename.exe(Like Here the service name is python) in command prompt.\n";
	  cout<<"2.Use Just Closing Your Computer.\n";
	  cout<<"3.First Know Which Service is running by using Command tasklist then Choose First Option\n";
	  cout<<"4.Want To Know What is Keylogger Attack?\n";
	  cin>>choser;
	  switch(choser)
	  {
	  case 1:
	   cout<<"Bravo This Command Works Really Good But not Completely\n";
	   score+=2;
	   cout<<"Score:"<<score;
	   goto scoreboard;
	   break;

	  case 2:
	  cout<<"This is One is Not Right Option\n";
	  score+=0;
	  cout<<"Score:"<<score;
	  goto scoreboard;
	  break;

	  case 3:
	  cout<<"Exact Right Answer\n";
	  cout<<"Tasklist Used in Command Prompt To Get the Services that is Currently Running in Your System.\n";
	  cout<<"Taskkill Is Used to Kill that Service\n";
	  score+=5;
	  cout<<"Score:"<<score;
	  goto scoreboard;
	  break;

	  case 4:
	  cout<<"Keylogger Attack Is An Attack Is The Scanning Tool That Captures Keystorkes In Keyboard.\n";
	  cout<<"1.Lets Win this Virus\n";
	  cout<<"2.Want To Lose\n";
	  cin>>maner;
	  switch(maner){
	  	case 1 :
	  	  goto keylos;
	  	  break;
	  
	   case 2 :
	  score-=1;
	  goto play;
	  break;

	  default:
	  cout<<"Choose Correct Option\n";
	  goto misr;
	}

	  break;

	  default:
	  cout<<"Choose Correct One\n";
	  goto keylos;

	}

	}

}
scoreboard:
cout<<"\n";
textcolor(YELLOW);
textbackground(BLACK);
cout<<"Your Total Scores Are:"<<score;




  

 

		     
cin.get();
break;
default: cout<<"Choose Right One..";
cin.get();
}
cin.get();
break;
case 2: cout<<"Credits\n";
cout<<"Developer: Rishabh Sagar\n";
cout<<"beta tester:Rishabh Sagar\n";
cout<<"ASCII artist :Rishabh Sagar\n";
cout<<"Bug reporter:Rishabh Sagar\n";
cout<<"_________________________________________________________________________\n";
cout<<"This game is under developement please report any bug to the creator";
cout<< "             \nThe GamEvolution-RsOS games present : Cyberwar\n             \n";
cout<< "              ______________________________________                    \n";
goto leg;
cin.get();
break;
default: cout<<"Fatal System error RsOs Game servers renconnecting....\nConnection failure System Virus detected swiping hard drive ";
cin.get();
break;
}


cin.get();
}

			     cin.get();
			     goto back;

}

cin.get();
}
}
