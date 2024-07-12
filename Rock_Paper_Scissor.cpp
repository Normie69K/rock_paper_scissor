#include<iostream>
#include<cstdlib>
#include <ctime>  
#include<unistd.h> //--> for set break or sleep/timer
using namespace std;
int main()
{
    int player;
    int computer;
    int choice;
    cout<<"Lets play "<<endl;
    sleep(1);
    cout<<R"(    
    _______               _______                     _______
    ---'   ____)         ---'    ____)____            ---'   ____)____
          (_____)                   ______)                     ______)
          (_____)                  _______)                 __________)
          (____)                  _______)                  (____)
    ---.__(___)           ---.__________)             ---.__(___)
    ROCK                  PAPER                       Scissors)"<<endl;
    sleep(1);
    cout<<R"(   
     _______           _______
---'   ____)         (____   '---
      (_____)       (_____)
      (_____)       (_____)
      (____)         (____)
---.__(___)           (___)__.---
           Rock VS Rock)"<<endl;
    sleep(1);
    cout<<R"(   
     _______                     _______
---'    ____)____           ____(____   '----
           ______)         (______
          _______)         (_______
         _______)           (_______
---.__________)                (_________.---
                Paper VS Paperx)"<<endl;
    sleep(1);
    cout<<R"(  ______                      _______
---'   ____)____            ____(____   '---
          ______)          (______
       __________)        (__________
      (____)                    (____)
---.__(___)                      (___)__.---
     Scissor vs Scissor)"<<endl;
     sleep(1);
    cout<<"Here are the rules"<<endl<<"1.Rock vs Rock --Tie"<<endl;
    sleep(1);
    cout<<"2.Paper vs Paper  --Tie"<<endl;
    sleep(1);
    cout<<"3.Scissor vs Sissor  --Tie"<<endl;
    sleep(1);
    cout<<"4.Rock vs Scissor  --Rock Wins"<<endl;
    sleep(1);
    cout<<"5.Rock vs Paper  --Paper Wins"<<endl;
    sleep(1);
    cout<<"6.Scissor vs Paper  --Scissor Wins"<<endl;
    sleep(1);

    cout<<"Game start in ";
    cout<<"3....."<<endl;
    sleep(1);
    cout<<"2....."<<endl;
    sleep(1);
    cout<<"1....."<<endl;
    sleep(1);


    cout<<"For Rock = 1"<<endl<<"For paper = 2"<<endl<<"For scissor = 3"<<endl;
    cout<<"Choose any one option:";
    cin>>player;
   

   switch (player){
    case 1:cout<<"player choose Rock."<<endl;break;
    case 2:cout<<"player choose Paper."<<endl;break;
    case 3:cout<<"player choose Scissor."<<endl;break;
   default:cout<<"Invalid option"<<endl;break;
   return 1;
 
   }

   srand(static_cast<unsigned int>(time(0)));
    computer = rand() % 3 + 1;

   switch (computer){
    case 1:cout<<"Computer choose Rock."<<endl;break;
    case 2:cout<<"Computer choose Paper."<<endl;break;
    case 3:cout<<"Computer choose Scissor."<<endl;break;
   }



   if(player==2 && computer==1 || player==1 && computer==3 || player==3 && computer==2 ){
    cout<<"Player won the game";
   }else if(computer==2 && player==1 || computer==1 && player==3 || computer==3 && player==2){
    cout<<"I won the game,hahahahahah................."<<endl<<"loser";
   }else{
        cout<<"It's are tie mate.";
    }
    return 0;
}
