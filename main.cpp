#include <iostream>
#include <ctime>
#include<bits/stdc++.h>
using namespace std ;

bool checkwin1(char arr[],bool stat){

  char player[2] ={'0','X'};
   
  // Horizantally winning combination
  if ( ( ( ( (arr [0] == arr[1]) && (arr[0]== arr[2]) && (arr[1] == arr[2]) )) && (( (arr [0] == player[0]) && (arr[1]== player[0]) && (arr[1] == player[0]) ) ) )
  || ( ( ( (arr [3] == arr[4]) && (arr[3]== arr[5]) && (arr[4] == arr[5]) )) && (( (arr [3] == player[0]) && (arr[4]== player[0]) && (arr[5] == player[0]) ) ) ) || ((( (arr [6] == arr[7]) && (arr[6]== arr[8]) && (arr[7] == arr[8]) )) && (( (arr [6] == player[0]) && (arr[7]== player[0]) && (arr[8] == player[0]) ) ) ) )
  {

  return true ;

  } 
     // Vertically winning combination
  else if  ( ( ( ( (arr [0] == arr[3]) && (arr[0]== arr[6]) && (arr[3] == arr[6]) )) && (( (arr [0] == player[0]) && (arr[3]== player[0]) && (arr[6] == player[0]) ) ) )
  || ((( (arr [1] == arr[4]) && (arr[1]== arr[7]) && (arr[4] == arr[7]) )) && (( (arr [1] == player[0]) && (arr[4]== player[0]) && (arr[7] == player[0]) )) ) || ((( (arr [2] == arr[5]) && (arr[2]== arr[8]) && (arr[5] == arr[8]) )) && (( (arr [2] == player[0]) && (arr[5]== player[0]) && (arr[8] == player[0]) ) ) ) )
  {

  return true ;  
     
  }
       // Diagonally winning combination
 else if ( ( ( ( (arr [0] == arr[4]) && (arr[0]== arr[8]) && (arr[4] == arr[8]) )) && (( (arr [0] == player[0]) && (arr[4]== player[0]) && (arr[8] == player[0]) )) )
  || ((( (arr [2] == arr[4]) && (arr[2]== arr[6]) && (arr[4] == arr[6]) )) && (( (arr [2] == player[0]) && (arr[4]== player[0]) && (arr[6] == player[0]) ) ) ) )
  {
    
  return true ; 
  
  }

  else {
   
   return false ;

  }
   
  } ;

 
  bool checkwin2(char arr[], bool stat){

  char player[2] ={'0','X'};
    
    // Horizantally winning combination
  if ( ( ( ( (arr [0] == arr[1]) && (arr[0]== arr[2]) && (arr[1] == arr[2]) )) && (( (arr [0] == player[1]) && (arr[1]== player[1]) && (arr[1] == player[1]) )) )
  || ((( (arr [3] == arr[4]) && (arr[3]== arr[5]) && (arr[4] == arr[5]) )) && (( (arr [3] == player[1]) && (arr[4]== player[1]) && (arr[5] == player[1]) )) ) || ((( (arr [6] == arr[7]) && (arr[6]== arr[8]) && (arr[7] == arr[8]) )) && (( (arr [6] == player[1]) && (arr[7]== player[1]) && (arr[8] == player[1]) ) ) ) )
  {

  return true ;
    
  } 
     // Vertically winning combination
  else if  ( ( ( ( (arr [0] == arr[3]) && (arr[0]== arr[6]) && (arr[3] == arr[6]) )) && (( (arr [0] == player[1]) && (arr[3]== player[1]) && (arr[6] == player[1]) )) )
  || ((( (arr [1] == arr[4]) && (arr[1]== arr[7]) && (arr[4] == arr[7]) )) && (( (arr [1] == player[1]) && (arr[4]== player[1]) && (arr[7] == player[1]) )) ) || ((( (arr [2] == arr[5]) && (arr[2]== arr[8]) && (arr[5] == arr[8]) )) && (( (arr [2] == player[1]) && (arr[5]== player[1]) && (arr[8] == player[1]) ) ) ) )
  {
  
  return true ;
  
  }
    
   // Diagonally winning combination
 else if ( ( ( ( (arr [0] == arr[4]) && (arr[0]== arr[8]) && (arr[4] == arr[8]) )) && (( (arr [0] == player[1]) && (arr[4]== player[1]) && (arr[8] == player[1]) )) )
  || ((( (arr [2] == arr[4]) && (arr[2]== arr[6]) && (arr[4] == arr[6]) )) && (( (arr [2] == player[1]) && (arr[4]== player[1]) && (arr[6] == player[1]) ) ) ) )
  {
    
  return true ; 
  
  }

  else {
  
  return false  ;

  }

  } ;

int main() {

  int choice ;

  do {

    cout<<endl;
    cout<<"Enter 1 to PLAY the game "<<endl;
    cout<<"Enter 2 to QUIT the game "<<endl;

    cout<<endl;

    cin >> choice;
    
    switch(choice){

      case 1 :
      cout<<endl;
      cout<<"Yey ! we are playing"<<endl;

      cout<<endl;

      break;

      case 2 :
      cout<<endl;
      cout<<"Thanks for playing"<<endl;
      return 0;

      default: 
      cout<<endl;
      cout << "Invalid input!" << endl;
      return 0;

      } 

  

  srand(time(0));

  bool stat ;

  char player[2] ={'0','X'};
    
  char myarr[9] = { '_','_','_','_','_','_','_','_','_' };
  
  cout << "TIC-TAC-TOE"<<endl;

  cout <<endl; cout<<endl;

  cout<<" How to play :- "<<endl;
  cout << "1. The game is  played between two players player1 and player2."<<endl;
  cout <<"2. You just have to enter the position number where you want place your '0' or 'X' . "<<endl;

  cout <<endl;

  cout<<"\t\t\t  1 | 2  | 3  \n";
  cout<<"\t\t\t--------------\n";
  cout<<"\t\t\t  4 | 5  | 6  \n";
  cout<<"\t\t\t--------------\n";
  cout<<"\t\t\t  7 | 8  | 9  \n"; 

  cout<<endl;cout<<endl;
 
  cout<<"Enter Players names : "<<endl;
  cout<<endl;

  string player1 , player2;
  cout<< "Player1: ";
  cin >> player1 ;
  cout<<"Player2: ";
  cin >> player2 ;

  cout<<endl;

  string first;
  string second ;

  if (((rand()%2 )+ 1) == 1 ){
    cout<<player1<<" will play first as '0' "<<endl;
    first = player1;
    second = player2 ;

  } else if ( ((rand()%2 )+ 1 )== 2){
    cout<<player2<<" will play first '0' "<<endl ;
    first = player2;
    second = player1 ;
  }

  cout<<endl;

  cout << myarr[0]<<"  "<<myarr[1]<<"  "<<myarr[2]<<endl;
  cout << myarr[3]<<"  "<<myarr[4]<<"  "<<myarr[5]<<endl;
  cout << myarr[6]<<"  "<<myarr[7]<<"  "<<myarr[8]<<endl;

  cout<<endl;

  cout<<first<<" enter your move : " ;
   
  int player1first ;
  cin >> player1first;


  if ( player1first > 9 ){
    cout<<"Invalid Input"<<endl;
  }
  else {

  if ( player1first == 1 || player1first == 2 || player1first == 3 || player1first == 4 || player1first == 5 || player1first == 6 || player1first == 7 || player1first == 8 || player1first == 9  )
  {
    myarr[player1first-1] = player[0] ;
  }

  cout << myarr[0]<<"  "<<myarr[1]<<"  "<<myarr[2]<<endl;
  cout << myarr[3]<<"  "<<myarr[4]<<"  "<<myarr[5]<<endl;
  cout << myarr[6]<<"  "<<myarr[7]<<"  "<<myarr[8]<<endl;

  cout <<endl ;

  cout<<second<<" enter your move : " ;

  int player2first;
  cin >> player2first;

  if ( player1first == player2first  )
  {
    cout<<"Invalid Input"<<endl;
  } 

  else { 

  if ( player2first == 1 || player2first == 2 || player2first == 3 || player2first == 4 || player2first == 5 || player2first == 6 || player2first == 7 || player2first == 8 || player2first == 9  ) 
  {
    myarr[player2first-1] = player[1] ;
  }

  cout <<endl;

  cout << myarr[0]<<"  "<<myarr[1]<<"  "<<myarr[2]<<endl;
  cout << myarr[3]<<"  "<<myarr[4]<<"  "<<myarr[5]<<endl;
  cout << myarr[6]<<"  "<<myarr[7]<<"  "<<myarr[8]<<endl;

  cout<<endl;

  cout<<first<<" enter your next move : ";

  int player1second;
  cin >> player1second;

  if (  (player1second == player2first) || (player1second == player1first)  )
  {
    cout<<"Invalid Input "<<endl;
  } 

  else {

  if ( player1second == 1 || player1second == 2 || player1second == 3 || player1second == 4 || player1second == 5 || player1second == 6 || player1second == 7 || player1second == 8 || player1second == 9  )
  {
    myarr[player1second-1] = player[0] ;
  }

  cout <<endl;

  cout << myarr[0]<<"  "<<myarr[1]<<"  "<<myarr[2]<<endl;
  cout << myarr[3]<<"  "<<myarr[4]<<"  "<<myarr[5]<<endl;
  cout << myarr[6]<<"  "<<myarr[7]<<"  "<<myarr[8]<<endl;

  cout<<endl;

  cout<<second<<" enter your next move : ";

  int player2second;
  cin >> player2second;

  if ( (player2second == player2first) || (player2second == player1first) || (player2second == player1second) )
  {
    cout<<"Invalid input"<<endl;
  } 
  else {

  if ( player2second == 1 || player2second == 2 || player2second == 3 || player2second == 4 || player2second == 5 || player2second == 6 || player2second == 7 || player2second == 8 || player2second == 9  ) 
  {
  myarr[player2second-1] = player[1] ;
  }

  cout <<endl;

  cout << myarr[0]<<"  "<<myarr[1]<<"  "<<myarr[2]<<endl;
  cout << myarr[3]<<"  "<<myarr[4]<<"  "<<myarr[5]<<endl;
  cout << myarr[6]<<"  "<<myarr[7]<<"  "<<myarr[8]<<endl;

  cout<<endl;

  cout<<first<<" enter your next move : ";

  int player1third;
  cin >> player1third;

  if ( ((player1third == player2first) || (player1third == player1first) || (player1third == player1second) || ( player1third == player2second) ) )
  {
    cout<<"Invalid Input"<<endl;
  }
  else {

  if ( player1third == 1 || player1third == 2 || player1third == 3 || player1third == 4 || player1third == 5 || player1third == 6 || player1third == 7 || player1third == 8 || player1third == 9  )
  {
    myarr[player1third-1] = player[0] ;
  }

  cout <<endl;

  cout << myarr[0]<<"  "<<myarr[1]<<"  "<<myarr[2]<<endl;
  cout << myarr[3]<<"  "<<myarr[4]<<"  "<<myarr[5]<<endl;
  cout << myarr[6]<<"  "<<myarr[7]<<"  "<<myarr[8]<<endl;
 
  checkwin1(myarr,stat);
 
  if ( checkwin1(myarr,stat) == true)
  {
    cout<<"Congrats!!! "<<first<<" have won the game ."<<endl;
  } 
  else {

  cout<<endl;

  cout<<second<<" enter your next move : ";

  int player2third;
  cin >> player2third;

  if ((player2third == player2first) || (player2third == player1first) || (player2third == player1second) || ( player2third == player2second) || ( player2third == player1third ) )
  {
    cout<<"Invalid Input"<<endl;
  }
  else {

  if ( player2third == 1 || player2third == 2 || player2third == 3 || player2third == 4 || player2third == 5 || player2third == 6 || player2third == 7 || player2third == 8 || player2third == 9  )
  {
    myarr[player2third-1] = player[1] ;
  }

  cout <<endl;

  cout << myarr[0]<<"  "<<myarr[1]<<"  "<<myarr[2]<<endl;
  cout << myarr[3]<<"  "<<myarr[4]<<"  "<<myarr[5]<<endl;
  cout << myarr[6]<<"  "<<myarr[7]<<"  "<<myarr[8]<<endl;

  checkwin2(myarr,stat);

  if ( checkwin2(myarr,stat) == true )
  {
   cout<<"Congrats!!! "<<second<<" have won the game ."<<endl;
  } 
  else {

    cout<<endl;

   cout<<first<<" enter your next move : ";

  int player1fourth;
  cin >> player1fourth;

  if ( (player1fourth == player2first) || (player1fourth == player1first) || (player1fourth == player1second) || ( player1fourth == player2second) || ( player1fourth == player1third ) || (player1fourth == player2third) )
  {
    cout<<"Invalid Input"<<endl;
  }
  else {

  if ( player1fourth == 1 || player1fourth == 2 || player1fourth == 3 || player1fourth == 4 || player1fourth == 5 || player1fourth == 6 || player1fourth == 7 || player1fourth == 8 || player1fourth == 9  )
  {
    myarr[player1fourth-1] = player[0] ;
  }

  cout <<endl;

  cout << myarr[0]<<"  "<<myarr[1]<<"  "<<myarr[2]<<endl;
  cout << myarr[3]<<"  "<<myarr[4]<<"  "<<myarr[5]<<endl;
  cout << myarr[6]<<"  "<<myarr[7]<<"  "<<myarr[8]<<endl;

  checkwin1(myarr,stat);

  if ( checkwin1(myarr,stat) == true )
  {
    cout<<"Congrats!!! "<<first<<" have won the game ."<<endl;
  }
  else {

  cout<<endl;

  cout<<second<<" enter your next move : ";

  int player2fourth;
  cin >> player2fourth;

  if ( (player2fourth == player2first) || (player2fourth == player1first) || (player2fourth == player1second) || ( player2fourth == player2second) || ( player2fourth == player1third ) || (player2fourth == player2third) )
  {
    cout<<"Invalid Input"<<endl;
  }
  else {

  if ( player2fourth == 1 || player2fourth == 2 || player2fourth == 3 || player2fourth == 4 || player2fourth == 5 || player2fourth == 6 || player2fourth == 7 || player2fourth == 8 || player2fourth == 9  ) 
  {
    myarr[player2fourth-1] = player[1] ;
  }

  cout <<endl;

  cout << myarr[0]<<"  "<<myarr[1]<<"  "<<myarr[2]<<endl;
  cout << myarr[3]<<"  "<<myarr[4]<<"  "<<myarr[5]<<endl;
  cout << myarr[6]<<"  "<<myarr[7]<<"  "<<myarr[8]<<endl;

  checkwin2(myarr,stat);

  if ( checkwin2(myarr,stat) == true)
  {
    cout<<"Congrats!!! "<<second<<" have won the game ."<<endl;
  } 
  else {

  cout<<endl;

  cout<<first<<" enter your next move : ";

  int player1fifth;
  cin >> player1fifth;

  if ( (player1fifth == player2first) || (player1fifth == player1first) || (player1fifth == player1second) || ( player1fifth == player2second) || ( player1fifth == player1third ) || (player1fifth == player2third) || ( player1fifth == player2fourth) )
  {
    cout<<"Invalid Input"<<endl;
  } 
  else {

  if ( player1fifth == 1 || player1fifth == 2 || player1fifth == 3 || player1fifth == 4 || player1fifth == 5 || player1fifth == 6 || player1fifth == 7 || player1fifth == 8 || player1fifth == 9  ) 
  {
    myarr[player1fifth-1] = player[0] ;
  }

  cout <<endl;

  cout << myarr[0]<<" "<<myarr[1]<<" "<<myarr[2]<<endl;
  cout << myarr[3]<<" "<<myarr[4]<<" "<<myarr[5]<<endl;
  cout << myarr[6]<<" "<<myarr[7]<<" "<<myarr[8]<<endl;

  checkwin1(myarr,stat);

  if ( checkwin1(myarr,stat) == true)
  {
   cout<<"Congrats!!! "<<first<<" have won the game ."<<endl;
  }
   else 
  {
    for ( int i = 0 ; i < 9 ; i++)
    {
      if ( myarr[i] != '_')
      {
  
      bool draw = true ;

      }
  }
  
  if ( bool draw = true)
  {
    cout<<" oops ! it's a Draw";
  }
    
  }
    
  }

  }

  }

  }

  }

  }

  }

  }

  }

  }

  }

  }

  }

  }while( choice != 2 );

}











