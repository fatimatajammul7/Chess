#include<iostream>
#include<string>
#include<conio.h>

#include "GameData.cpp"
//#include "Player.cpp"

using namespace std;

struct Chess{
    GameData GameState;
    string PlayerNames[2];
    bool GameActive = false;
} Game;

string getPlayerinfo(){
    string Name="";
    cout<< "\nEnter Player Name\n";
    do{
        cin.clear();
        fflush(stdin);
        getline(cin, Name);
    }while(Name.length() == 0);
    return Name;
}

int SaveGame(){
    // If we have an active game then save it for future along with player names
    // The function will ask the user to specify a file name and save the entire game into it
    return 0;
}

int LoadGame(){
    // The function will ask the user to specify a file name and save the entire game into it
    return 0;
}

void ShowGame(){

    cout<< Game.PlayerNames[1]<<"\tvs\t"<<Game.PlayerNames[0]<<endl;
    cout<<"PRESENTED BY TURBO DYNAMITE";
	cout<<endl;
	cout<<"--------------------------------------------------------------------";
    for(int r = 0; r < 8; r++ ){
        cout<<endl<<r<<" |";
        
        for(int c = 0; c < 8; c++){
            switch(Game.GameState.Board[r][c].Code){
                case NONE:
                    cout<<"\t.. |";
                break;
                default:
                    cout<<"\t";
                    if(Game.GameState.Board[r][c].PieceColor == BLACK)
                        cout<<"B";
                    else
                        cout<<"W";

                    switch(Game.GameState.Board[r][c].Code){
                    case PAWN:
                        cout<<"P |";
                    break;

                    case ROOK:
                        cout<<"R |";
                    break;

                    case KNIGHT:
                        cout<<"kN |";
                    break;

                    case BISHOP:
                        cout<<"B |";
                    break;

                    case QUEEN:
                        cout<<"Q |";
                    break;

                    case KING:
                        cout<<"K |";
                    break;
                    }
                break;
            
            }
        }
        cout<<endl;
        cout<<"--------------------------------------------------------------------";
    }
    cout<<endl;
   
    for(int c = 0; c< 8; c++)
        cout<<"\t"<<c<<"  |";
    cout<<"\n";
    cout<<"--------------------------------------------------------------------";
    cout<<endl;
}

void initNewGame(){
    cout<<"Enter First(WHITE) Player's Info"<<endl;
    Game.PlayerNames[1] = getPlayerinfo();
    cout<<"\n\nEnter Second(BLACK) Player's Info"<<endl;
    Game.PlayerNames[0] = getPlayerinfo();
    initGame(Game.GameState);
}

int PlayGame(){
    chessMove Move;
    ShowGame();

    while(!isCheckmate(Game.GameState, Game.GameState.TurningPlayer) ){
        cout<<Game.PlayerNames[Game.GameState.TurningPlayer];
        if(Game.GameState.TurningPlayer == WHITE)
            cout<<" (WHITE) To Move";
        else
            cout<<" (BLACK) To Move";
        cout<<"\n{Negative Value to move to the main menu}"<<endl;
		cout<<"ENTER YOUR MOVE : \n";
		
		cout<<"FROM ROW : ";
		cin >> Move.FromRow;
		cout<<"FROM COLUMN : ";
		cin>>Move.FromColumn;
		cout<<"TO ROW : ";
		cin>>Move.ToRow;
		cout<<"TO COULUMN : ";
		cin>>Move.ToColumn;
        cout<<"\n{Negative Value to move to the main menu}"<<endl;


        if(Move.FromRow < 0 || Move.FromColumn < 0 || Move.ToColumn < 0 || Move.ToRow < 0){
            cout<< "Moving to main menu \n";
            return 0;
        }

        MakeMove(Game.GameState, Move);
        
        ShowGame();
        if(isfacingCheck(Game.GameState, Game.GameState.TurningPlayer)){
        	if(Game.PlayerNames==0){
        		cout<<endl<<Game.PlayerNames[0]<<"KING IS FACING CHECK"<<endl;
			}
			else
				cout<<endl<<Game.PlayerNames[1]<<"KING IS FACING CHECK"<<endl;
		}
			
		
		
		
    }
    
	if(Game.GameState.TurningPlayer==WHITE){
		cout<<endl;
		cout<<"HURRAH! "<<Game.PlayerNames[0]<<"(WHITE) wins";
		cout<<endl;
	}
	else{
		if(Game.GameState.TurningPlayer==BLACK){
		cout<<endl;
		cout<<"HURRAH! "<<Game.PlayerNames[1]<<"(BLACK) wins";
		cout<<endl;
	}
		
    	
    	
	}

    return 0;

}


int main(){
    int choice = 0;
    do{
        do{
            cout<<"1. New Game\n2. Restart Game\n3. Save Game\n4. Load Game\n5. Exit\n\n Enter Your Choice(1-5) ";
            cin>>choice;
        }while(choice< 1 || choice > 5);

        switch(choice){
        case 1:
            initNewGame();
            PlayGame();
        break;
        case 2:
            PlayGame();
        break;
        case 3:
            SaveGame();
        break;
        case 4:
            LoadGame();
        break;
        case 5:
            return 0;
        break;
        }
    }while(1);

    return 0;
}
