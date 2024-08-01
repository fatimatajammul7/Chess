#include "GameData.h"
#include <iostream>
int RWa=0;
int RWb=0;
int RBa=0;
int RBb=0;
int KW=0;
int KB=0;
int PB=0;
int PW=0;
int EnPeasent(GameData& Game, chessMove Move){
	bool AB=false;
	int FR, FC, TR,TC;
    FR = Move.FromRow;
    FC = Move.FromColumn;
    TR = Move.ToRow;
    TC = Move.ToColumn;
    
    if(FR==4 && TR==FR-1 && TC==FC+1 && Game.Board[FR][FC].PieceColor == WHITE){
    	AB=true;
    	
	}
	 if(FR==4 && TR==FR-1 && TC==FC-1 && Game.Board[FR][FC].PieceColor == WHITE){
    	AB=true;
    	
	}
	if(FR==3 && TR==FR+1 && TC==FC+1 && Game.Board[FR][FC].PieceColor == BLACK){
    	AB=true;
    	
	}
	if(FR==4 && TR==FR+1 && TC==FC-1 && Game.Board[FR][FC].PieceColor == BLACK){
    	AB=true;
    	
	}
	return 0;
}
int BCHECKMATE(GameData& Game, Color Player, int BR, int BC){
	int JAA;
	bool JA=false;
	int a= BR-1;
		if(Game.Board[a][BC].Code==QUEEN || Game.Board[a][BC].Code==ROOK)
		{
			if(Game.Board[a][BC].PieceColor==WHITE)
	    	   JA=true;
		}
		for(int i=2; Game.Board[a][BC].Code==NONE; i++)
		{
			a= BR-i;
		}
		if(Game.Board[a][BC].Code==QUEEN || Game.Board[a][BC].Code==ROOK)
		{
			if(Game.Board[a][BC].PieceColor==WHITE)
	    	   JA=true;
		}
		
				
	    int b=BR+1;
	    if(Game.Board[b][BC].Code==QUEEN || Game.Board[b][BC].Code==ROOK)
		{
			if(Game.Board[b][BC].PieceColor==WHITE)
	    	   JA=true;
		}
	    for(int i=2; Game.Board[b][BC].Code==NONE; i++)
	    {
		    b= BR+i;
	    }
	    if(Game.Board[b][BC].Code==QUEEN || Game.Board[b][BC].Code==ROOK)
		{
			if(Game.Board[b][BC].PieceColor==WHITE)
	    	   JA=true;
		}
	    
			    
		int c=BC-1;
		if(Game.Board[BR][c].Code==QUEEN || Game.Board[BR][c].Code==ROOK)
		{
			if(Game.Board[BR][c].PieceColor==WHITE)
	    	   JA=true;
		}
		for(int i=2; Game.Board[BR][c].Code==NONE; i++)
	    {
		    c= BC-i;
	    }
	    if(Game.Board[BR][c].Code==QUEEN || Game.Board[BR][c].Code==ROOK)
		{
			if(Game.Board[BR][c].PieceColor==WHITE)
	    	   JA=true;
		}
		
		int d=BC+1;
		if(Game.Board[BR][d].Code==QUEEN || Game.Board[BR][d].Code==ROOK)
		{
			if(Game.Board[BR][d].PieceColor==WHITE)
	    	   JA=true;
		}
	    for(int i=2; Game.Board[BR][d].Code==NONE; i++)
	    {
		    d=BC+i;
	    }
	    if(Game.Board[BR][d].Code==QUEEN || Game.Board[BR][d].Code==ROOK)
		{
			if(Game.Board[BR][d].PieceColor==WHITE)
	    	   JA=true;
		}
		// BISHOP AND QUEEN
		int A=BR-1;
		int B=BC+1;
		if(Game.Board[A][B].Code==QUEEN || Game.Board[A][B].Code==BISHOP)
		{
			if(Game.Board[A][B].PieceColor==WHITE)
			   JA=true;
		}
		for(int i=2; Game.Board[A][B].Code==NONE; i++)
		{
			A=BR-i;
			B=BC+i;
		} 
		if(Game.Board[A][B].Code==QUEEN || Game.Board[A][B].Code==BISHOP)
		{
			if(Game.Board[A][B].PieceColor==WHITE)
			   JA=true;
		}
			
		int C=BR-1;
		int D=BC-1;
		if(Game.Board[C][D].Code==QUEEN || Game.Board[C][D].Code==BISHOP)
		{
			if(Game.Board[C][D].PieceColor==WHITE)
			   JA=true;
		}
		for(int i=2; Game.Board[C][D].Code==NONE; i++)
		{
			C=BR-i;
			D=BC-i;
		} 
		if(Game.Board[C][D].Code==QUEEN || Game.Board[C][D].Code==BISHOP)
		{
			if(Game.Board[C][D].PieceColor==WHITE)
			   JA=true;
		}
		
			
		int E=BR+1;
		int F=BC+1;
		if(Game.Board[E][F].Code==QUEEN || Game.Board[E][F].Code==BISHOP)
		{
			if(Game.Board[E][F].PieceColor==WHITE)
			   JA=true;
		}
		for(int i=2; Game.Board[E][F].Code==NONE; i++)
		{
			E=BR+i;
			F=BC+i;
		} 
		if(Game.Board[E][F].Code==QUEEN || Game.Board[E][F].Code==BISHOP)
		{
			if(Game.Board[E][F].PieceColor==WHITE)
			   JA=true;
		}
		
		int G=BR+1;
		int H=BC-1;
		if(Game.Board[G][H].Code==QUEEN || Game.Board[G][H].Code==BISHOP)
		{
			if(Game.Board[G][H].PieceColor==WHITE)
			   JA=true;
		}
		for(int i=2; Game.Board[G][H].Code==NONE; i++)
		{
			G=BR+i;
			H=BC-i;
		} 
		if(Game.Board[G][H].Code==QUEEN || Game.Board[G][H].Code==BISHOP)
		{
			if(Game.Board[G][H].PieceColor==WHITE)
			   JA=true;
		} 
		//knight
		if(Game.Board[BR-2][BC-1].Code==KNIGHT && Game.Board[BR-2][BC-1].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR-1][BC-2].Code==KNIGHT && Game.Board[BR-1][BC-2].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR+1][BC-2].Code==KNIGHT && Game.Board[BR+1][BC-2].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR+2][BC-1].Code==KNIGHT && Game.Board[BR+2][BC-1].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR-2][BC+1].Code==KNIGHT && Game.Board[BR-2][BC+1].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR-1][BC+2].Code==KNIGHT && Game.Board[BR-1][BC+2].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR+1][BC+2].Code==KNIGHT && Game.Board[BR+1][BC+2].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR+2][BC+1].Code==KNIGHT && Game.Board[BR+2][BC+1].PieceColor==WHITE)
			JA=true;   
		//PAWN
		if(Game.Board[BR+1][BC-1].Code==PAWN && Game.Board[BR+1][BC-1].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR+1][BC+1].Code==PAWN && Game.Board[BR+1][BC+1].PieceColor==WHITE)
			JA=true;   
			
		if(JA==true)
		{
			JAA=0;
		}	
		else
		{
			JAA=1;
		}
	return JAA;		 
}
int WCHECKMATE(GameData& Game, Color Player, int WR, int WC){
	int JAA;
	bool JA=false;
	int a= WR-1;
		if(Game.Board[a][WC].Code==QUEEN || Game.Board[a][WC].Code==ROOK)
		{
			if(Game.Board[a][WC].PieceColor==BLACK)
	    	   JA=true;
		}
		for(int i=2; Game.Board[a][WC].Code==NONE; i++)
		{
			a= WR-i;
		}
		if(Game.Board[a][WC].Code==QUEEN || Game.Board[a][WC].Code==ROOK)
		{
			if(Game.Board[a][WC].PieceColor==BLACK)
	    	   JA=true;
		}
		
				
	    int b=WR+1;
	    if(Game.Board[b][WC].Code==QUEEN || Game.Board[b][WC].Code==ROOK)
		{
			if(Game.Board[b][WC].PieceColor==BLACK)
	    	   JA=true;
		}
	    for(int i=2; Game.Board[b][WC].Code==NONE; i++)
	    {
		    b= WR+i;
	    }
	    if(Game.Board[b][WC].Code==QUEEN || Game.Board[b][WC].Code==ROOK)
		{
			if(Game.Board[b][WC].PieceColor==BLACK)
	    	   JA=true;
		}
	    
			    
		int c=WC-1;
		if(Game.Board[WR][c].Code==QUEEN || Game.Board[WR][c].Code==ROOK)
		{
			if(Game.Board[WR][c].PieceColor==BLACK)
	    	   JA=true;
		}
		for(int i=2; Game.Board[WR][c].Code==NONE; i++)
	    {
		    c= WC-i;
	    }
	    if(Game.Board[WR][c].Code==QUEEN || Game.Board[WR][c].Code==ROOK)
		{
			if(Game.Board[WR][c].PieceColor==BLACK)
	    	   JA=true;
		}
		
		int d=WC+1;
		if(Game.Board[WR][d].Code==QUEEN || Game.Board[WR][d].Code==ROOK)
		{
			if(Game.Board[WR][d].PieceColor==BLACK)
	    	   JA=true;
		}
	    for(int i=2; Game.Board[WR][d].Code==NONE; i++)
	    {
		    d=WC+i;
	    }
	    if(Game.Board[WR][d].Code==QUEEN || Game.Board[WR][d].Code==ROOK)
		{
			if(Game.Board[WR][d].PieceColor==BLACK)
	    	   JA=true;
		}
		////// BISHOP AND QUEEN
		int A=WR-1;
		int B=WC+1;
		if(Game.Board[A][B].Code==QUEEN || Game.Board[A][B].Code==BISHOP)
		{
			if(Game.Board[A][B].PieceColor==BLACK)
			   JA=true;
		}
		for(int i=2; Game.Board[A][B].Code==NONE; i++)
		{
			A=WR-i;
			B=WC+i;
		} 
		if(Game.Board[A][B].Code==QUEEN || Game.Board[A][B].Code==BISHOP)
		{
			if(Game.Board[A][B].PieceColor==BLACK)
			   JA=true;
		}
			
		int C=WR-1;
		int D=WC-1;
		if(Game.Board[C][D].Code==QUEEN || Game.Board[C][D].Code==BISHOP)
		{
			if(Game.Board[C][D].PieceColor==BLACK)
			   JA=true;
		}
		for(int i=2; Game.Board[C][D].Code==NONE; i++)
		{
			C=WR-i;
			D=WC-i;
		} 
		if(Game.Board[C][D].Code==QUEEN || Game.Board[C][D].Code==BISHOP)
		{
			if(Game.Board[C][D].PieceColor==BLACK)
			   JA=true;
		}
		
			
		int E=WR+1;
		int F=WC+1;
		if(Game.Board[E][F].Code==QUEEN || Game.Board[E][F].Code==BISHOP)
		{
			if(Game.Board[E][F].PieceColor==BLACK)
			   JA=true;
		}
		for(int i=2; Game.Board[E][F].Code==NONE; i++)
		{
			E=WR+i;
			F=WC+i;
		} 
		if(Game.Board[E][F].Code==QUEEN || Game.Board[E][F].Code==BISHOP)
		{
			if(Game.Board[E][F].PieceColor==BLACK)
			   JA=true;
		}
		
		int G=WR+1;
		int H=WC-1;
		if(Game.Board[G][H].Code==QUEEN || Game.Board[G][H].Code==BISHOP)
		{
			if(Game.Board[G][H].PieceColor==BLACK)
			   JA=true;
		}
		for(int i=2; Game.Board[G][H].Code==NONE; i++)
		{
			G=WR+i;
			H=WC-i;
		} 
		if(Game.Board[G][H].Code==QUEEN || Game.Board[G][H].Code==BISHOP)
		{
			if(Game.Board[G][H].PieceColor==BLACK)
			   JA=true;
		}           
		//knight
		if(Game.Board[WR-2][WC-1].Code==KNIGHT && Game.Board[WR-2][WC-1].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR-1][WC-2].Code==KNIGHT && Game.Board[WR-1][WC-2].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR+1][WC-2].Code==KNIGHT && Game.Board[WR+1][WC-2].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR+2][WC-1].Code==KNIGHT && Game.Board[WR+2][WC-1].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR-2][WC+1].Code==KNIGHT && Game.Board[WR-2][WC+1].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR-1][WC+2].Code==KNIGHT && Game.Board[WR-1][WC+2].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR+1][WC+2].Code==KNIGHT && Game.Board[WR+1][WC+2].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR+2][WC+1].Code==KNIGHT && Game.Board[WR+2][WC+1].PieceColor==BLACK)
			JA=true;
			
		//PAWN
		if(Game.Board[WR-1][WC-1].Code==PAWN && Game.Board[WR-1][WC-1].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR-1][WC+1].Code==PAWN && Game.Board[WR-1][WC+1].PieceColor==BLACK)
			JA=true;

        if(JA==true)
		{
			JAA=0;
		}	
		else
		{
			JAA=1;
		}
return JAA;	
}
bool kingvalid(GameData& Game, chessMove Move ){
	bool JA=false;
	int WR, WC, BR, BC, TR, TC, FR, FC;
	TR = Move.ToRow;
    TC = Move.ToColumn;
    FR = Move.FromRow;
    FC = Move.FromColumn;
	
	if(Game.Board[FR][FC].Code==KING && Game.Board[FR][FC].PieceColor== WHITE)  //WHITE
	{
	    WR=TR;
    	WC=TC;
		/////// ROOOK AND QUEEN
		int a= WR-1;
		if(Game.Board[a][WC].Code==QUEEN || Game.Board[a][WC].Code==ROOK)
		{
			if(Game.Board[a][WC].PieceColor==BLACK)
	    	   JA=true;
		}
		for(int i=2; Game.Board[a][WC].Code==NONE; i++)
		{
			a= WR-i;
		}
		if(Game.Board[a][WC].Code==QUEEN || Game.Board[a][WC].Code==ROOK)
		{
			if(Game.Board[a][WC].PieceColor==BLACK)
	    	   JA=true;
		}
		
				
	    int b=WR+1;
	    if(Game.Board[b][WC].Code==QUEEN || Game.Board[b][WC].Code==ROOK)
		{
			if(Game.Board[b][WC].PieceColor==BLACK)
	    	   JA=true;
		}
	    for(int i=2; Game.Board[b][WC].Code==NONE; i++)
	    {
		    b= WR+i;
	    }
	    if(Game.Board[b][WC].Code==QUEEN || Game.Board[b][WC].Code==ROOK)
		{
			if(Game.Board[b][WC].PieceColor==BLACK)
	    	   JA=true;
		}
	    
			    
		int c=WC-1;
		if(Game.Board[WR][c].Code==QUEEN || Game.Board[WR][c].Code==ROOK)
		{
			if(Game.Board[WR][c].PieceColor==BLACK)
	    	   JA=true;
		}
		for(int i=2; Game.Board[WR][c].Code==NONE; i++)
	    {
		    c= WC-i;
	    }
	    if(Game.Board[WR][c].Code==QUEEN || Game.Board[WR][c].Code==ROOK)
		{
			if(Game.Board[WR][c].PieceColor==BLACK)
	    	   JA=true;
		}
		
		int d=WC+1;
		if(Game.Board[WR][d].Code==QUEEN || Game.Board[WR][d].Code==ROOK)
		{
			if(Game.Board[WR][d].PieceColor==BLACK)
	    	   JA=true;
		}
	    for(int i=2; Game.Board[WR][d].Code==NONE; i++)
	    {
		    d=WC+i;
	    }
	    if(Game.Board[WR][d].Code==QUEEN || Game.Board[WR][d].Code==ROOK)
		{
			if(Game.Board[WR][d].PieceColor==BLACK)
	    	   JA=true;
		}
		////// BISHOP AND QUEEN
		int A=WR-1;
		int B=WC+1;
		if(Game.Board[A][B].Code==QUEEN || Game.Board[A][B].Code==BISHOP)
		{
			if(Game.Board[A][B].PieceColor==BLACK)
			   JA=true;
		}
		for(int i=2; Game.Board[A][B].Code==NONE; i++)
		{
			A=WR-i;
			B=WC+i;
		} 
		if(Game.Board[A][B].Code==QUEEN || Game.Board[A][B].Code==BISHOP)
		{
			if(Game.Board[A][B].PieceColor==BLACK)
			   JA=true;
		}
			
		int C=WR-1;
		int D=WC-1;
		if(Game.Board[C][D].Code==QUEEN || Game.Board[C][D].Code==BISHOP)
		{
			if(Game.Board[C][D].PieceColor==BLACK)
			   JA=true;
		}
		for(int i=2; Game.Board[C][D].Code==NONE; i++)
		{
			C=WR-i;
			D=WC-i;
		} 
		if(Game.Board[C][D].Code==QUEEN || Game.Board[C][D].Code==BISHOP)
		{
			if(Game.Board[C][D].PieceColor==BLACK)
			   JA=true;
		}
		
			
		int E=WR+1;
		int F=WC+1;
		if(Game.Board[E][F].Code==QUEEN || Game.Board[E][F].Code==BISHOP)
		{
			if(Game.Board[E][F].PieceColor==BLACK)
			   JA=true;
		}
		for(int i=2; Game.Board[E][F].Code==NONE; i++)
		{
			E=WR+i;
			F=WC+i;
		} 
		if(Game.Board[E][F].Code==QUEEN || Game.Board[E][F].Code==BISHOP)
		{
			if(Game.Board[E][F].PieceColor==BLACK)
			   JA=true;
		}
		
		int G=WR+1;
		int H=WC-1;
		if(Game.Board[G][H].Code==QUEEN || Game.Board[G][H].Code==BISHOP)
		{
			if(Game.Board[G][H].PieceColor==BLACK)
			   JA=true;
		}
		for(int i=2; Game.Board[G][H].Code==NONE; i++)
		{
			G=WR+i;
			H=WC-i;
		} 
		if(Game.Board[G][H].Code==QUEEN || Game.Board[G][H].Code==BISHOP)
		{
			if(Game.Board[G][H].PieceColor==BLACK)
			   JA=true;
		}           
		//knight
		if(Game.Board[WR-2][WC-1].Code==KNIGHT && Game.Board[WR-2][WC-1].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR-1][WC-2].Code==KNIGHT && Game.Board[WR-1][WC-2].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR+1][WC-2].Code==KNIGHT && Game.Board[WR+1][WC-2].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR+2][WC-1].Code==KNIGHT && Game.Board[WR+2][WC-1].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR-2][WC+1].Code==KNIGHT && Game.Board[WR-2][WC+1].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR-1][WC+2].Code==KNIGHT && Game.Board[WR-1][WC+2].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR+1][WC+2].Code==KNIGHT && Game.Board[WR+1][WC+2].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR+2][WC+1].Code==KNIGHT && Game.Board[WR+2][WC+1].PieceColor==BLACK)
			JA=true;
			
		//PAWN
		if(Game.Board[WR-1][WC-1].Code==PAWN && Game.Board[WR-1][WC-1].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR-1][WC+1].Code==PAWN && Game.Board[WR-1][WC+1].PieceColor==BLACK)
			JA=true;
	}
		
		
		    

	
	if(Game.Board[FR][FC].Code==KING && Game.Board[FR][FC].PieceColor== BLACK )  //BLACK
	{
		BR=TR;
    	BC=TC;
		int a= BR-1;
		if(Game.Board[a][BC].Code==QUEEN || Game.Board[a][BC].Code==ROOK)
		{
			if(Game.Board[a][BC].PieceColor==WHITE)
	    	   JA=true;
		}
		for(int i=2; Game.Board[a][BC].Code==NONE; i++)
		{
			a= BR-i;
		}
		if(Game.Board[a][BC].Code==QUEEN || Game.Board[a][BC].Code==ROOK)
		{
			if(Game.Board[a][BC].PieceColor==WHITE)
	    	   JA=true;
		}
		
				
	    int b=BR+1;
	    if(Game.Board[b][BC].Code==QUEEN || Game.Board[b][BC].Code==ROOK)
		{
			if(Game.Board[b][BC].PieceColor==WHITE)
	    	   JA=true;
		}
	    for(int i=2; Game.Board[b][BC].Code==NONE; i++)
	    {
		    b= BR+i;
	    }
	    if(Game.Board[b][BC].Code==QUEEN || Game.Board[b][BC].Code==ROOK)
		{
			if(Game.Board[b][BC].PieceColor==WHITE)
	    	   JA=true;
		}
	    
			    
		int c=BC-1;
		if(Game.Board[BR][c].Code==QUEEN || Game.Board[BR][c].Code==ROOK)
		{
			if(Game.Board[BR][c].PieceColor==WHITE)
	    	   JA=true;
		}
		for(int i=2; Game.Board[BR][c].Code==NONE; i++)
	    {
		    c= BC-i;
	    }
	    if(Game.Board[BR][c].Code==QUEEN || Game.Board[BR][c].Code==ROOK)
		{
			if(Game.Board[BR][c].PieceColor==WHITE)
	    	   JA=true;
		}
		
		int d=BC+1;
		if(Game.Board[BR][d].Code==QUEEN || Game.Board[BR][d].Code==ROOK)
		{
			if(Game.Board[BR][d].PieceColor==WHITE)
	    	   JA=true;
		}
	    for(int i=2; Game.Board[BR][d].Code==NONE; i++)
	    {
		    d=BC+i;
	    }
	    if(Game.Board[BR][d].Code==QUEEN || Game.Board[BR][d].Code==ROOK)
		{
			if(Game.Board[BR][d].PieceColor==WHITE)
	    	   JA=true;
		}
		// BISHOP AND QUEEN
		int A=BR-1;
		int B=BC+1;
		if(Game.Board[A][B].Code==QUEEN || Game.Board[A][B].Code==BISHOP)
		{
			if(Game.Board[A][B].PieceColor==WHITE)
			   JA=true;
		}
		for(int i=2; Game.Board[A][B].Code==NONE; i++)
		{
			A=BR-i;
			B=BC+i;
		} 
		if(Game.Board[A][B].Code==QUEEN || Game.Board[A][B].Code==BISHOP)
		{
			if(Game.Board[A][B].PieceColor==WHITE)
			   JA=true;
		}
			
		int C=BR-1;
		int D=BC-1;
		if(Game.Board[C][D].Code==QUEEN || Game.Board[C][D].Code==BISHOP)
		{
			if(Game.Board[C][D].PieceColor==WHITE)
			   JA=true;
		}
		for(int i=2; Game.Board[C][D].Code==NONE; i++)
		{
			C=BR-i;
			D=BC-i;
		} 
		if(Game.Board[C][D].Code==QUEEN || Game.Board[C][D].Code==BISHOP)
		{
			if(Game.Board[C][D].PieceColor==WHITE)
			   JA=true;
		}
		
			
		int E=BR+1;
		int F=BC+1;
		if(Game.Board[E][F].Code==QUEEN || Game.Board[E][F].Code==BISHOP)
		{
			if(Game.Board[E][F].PieceColor==WHITE)
			   JA=true;
		}
		for(int i=2; Game.Board[E][F].Code==NONE; i++)
		{
			E=BR+i;
			F=BC+i;
		} 
		if(Game.Board[E][F].Code==QUEEN || Game.Board[E][F].Code==BISHOP)
		{
			if(Game.Board[E][F].PieceColor==WHITE)
			   JA=true;
		}
		
		int G=BR+1;
		int H=BC-1;
		if(Game.Board[G][H].Code==QUEEN || Game.Board[G][H].Code==BISHOP)
		{
			if(Game.Board[G][H].PieceColor==WHITE)
			   JA=true;
		}
		for(int i=2; Game.Board[G][H].Code==NONE; i++)
		{
			G=BR+i;
			H=BC-i;
		} 
		if(Game.Board[G][H].Code==QUEEN || Game.Board[G][H].Code==BISHOP)
		{
			if(Game.Board[G][H].PieceColor==WHITE)
			   JA=true;
		} 
		//knight
		if(Game.Board[BR-2][BC-1].Code==KNIGHT && Game.Board[BR-2][BC-1].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR-1][BC-2].Code==KNIGHT && Game.Board[BR-1][BC-2].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR+1][BC-2].Code==KNIGHT && Game.Board[BR+1][BC-2].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR+2][BC-1].Code==KNIGHT && Game.Board[BR+2][BC-1].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR-2][BC+1].Code==KNIGHT && Game.Board[BR-2][BC+1].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR-1][BC+2].Code==KNIGHT && Game.Board[BR-1][BC+2].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR+1][BC+2].Code==KNIGHT && Game.Board[BR+1][BC+2].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR+2][BC+1].Code==KNIGHT && Game.Board[BR+2][BC+1].PieceColor==WHITE)
			JA=true;   
		//PAWN
		if(Game.Board[BR+1][BC-1].Code==PAWN && Game.Board[BR+1][BC-1].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR+1][BC+1].Code==PAWN && Game.Board[BR+1][BC+1].PieceColor==WHITE)
			JA=true;    
	}
	
    return JA;
}
int castling(GameData& Game, chessMove Move){
	bool AJ=false;
	int  TR, TC, FR, FC;
	TR = Move.ToRow;
    TC = Move.ToColumn;
    FR = Move.FromRow;
    FC = Move.FromColumn;
	if(Game.Board[FR][FC].Code==ROOK)  //ROOK
	{
		if(Game.TurningPlayer == WHITE )
		{
			if(TC==FC)
			{
				int a= FR-1;
			    for(int i=2; Game.Board[a][TC].Code==NONE; i++)
			    {
			    	if(a==TR)
					{
						AJ=true;
					}
				    a= FR-i;
			    }
			    if(a==TR && Game.Board[TR][TC].PieceColor==BLACK)
			    {
			    	AJ=true;
				}
				
			    int b=FR+1;
			    for(int i=2; Game.Board[b][TC].Code==NONE; i++)
			    {
			    	if(b==TR)
					{
						AJ=true;
					}
				    b= FR+i;
			    }
			    if(b==TR && Game.Board[TR][TC].PieceColor==BLACK)
			    {
			    	AJ=true;
				}
			    
			}
			else if(TR==FR)
			{
				int a=FC-1;
				for(int i=2; Game.Board[TR][a].Code==NONE; i++)
			    {
			    	if(a==TC)
			    	{
			    		AJ=true;
					}
				    a= FC-i;
			    }
			    if(a==TC && Game.Board[TR][TC].PieceColor==BLACK)
			    {
			    	AJ=true;
				}
				int b=FC+1;
			    for(int i=2; Game.Board[TR][b].Code==NONE; i++)
			    {
			    	if(b==TC)
			    	{
			    		AJ=true;
					}
				    b=FC+i;
			    }
			    if(b==TC && Game.Board[TR][TC].PieceColor==BLACK)
			    {
			    	AJ=true;
				}
		    }
		    if(FR==7 && FC==0 && AJ==true)
		    {
		    	RWa++;
			}
			if(FR==7 && FC==7 && AJ==true)
		    {
		    	RWb++;
			}
		}
		if(Game.TurningPlayer == BLACK )
		{
			if(TC==FC)
			{
				int a= FR-1;
			    for(int i=2; Game.Board[a][TC].Code==NONE; i++)
			    {
			    	if(a==TR)
					{
						AJ=true;
					}
				    a= FR-i;
			    }
			    if(a==TR && Game.Board[TR][TC].PieceColor==WHITE)
			    {
			    	AJ=true;
				}
				
			    int b=FR+1;
			    for(int i=2; Game.Board[b][TC].Code==NONE; i++)
			    {
			    	if(b==TR)
					{
						AJ=true;
					}
				    b= FR+i;
			    }
			    if(b==TR && Game.Board[TR][TC].PieceColor==WHITE)
			    {
			    	AJ=true;
				}
			    
			}
			else if(TR==FR)
			{
				int a=FC-1;
				for(int i=2; Game.Board[TR][a].Code==NONE; i++)
			    {
			    	if(a==TC)
			    	{
			    		AJ=true;
					}
				    a= FC-i;
			    }
			    if(a==TC && Game.Board[TR][TC].PieceColor==WHITE)
			    {
			    	AJ=true;
				}
				int b=FC+1;
			    for(int i=2; Game.Board[TR][b].Code==NONE; i++)
			    {
			    	if(b==TC)
			    	{
			    		AJ=true;
					}
				    b=FC+i;
			    }
			    if(b==TC && Game.Board[TR][TC].PieceColor==WHITE)
			    {
			    	AJ=true;
				}
				
			}
			if(FR==0 && FC==0 && AJ==true)
		    {
		    	RBa++;
			}
			if(FR==0 && FC==7 && AJ==true)
		    {
		    	RBb++;
			}
		}
		
			
	}
	
	if(Game.Board[FR][FC].Code==KING) //KING
	{
		
		if(Game.TurningPlayer == WHITE )
		{
			if(Game.Board[TR][TC].Code==NONE || Game.Board[TR][TC].PieceColor==BLACK){
			
				if(FR-1==TR && TC==FC ){
					AJ= true;
				}
				if(FR+1==TR && TC==FC ){
					AJ= true;
				}
				if(FC-1==TC && TR==FR ){
					AJ= true;
				}
				if(FC+1==TC && TR==FR ){
					AJ= true;
				}
				if(FR-1==TR && FC-1==TC ){
					AJ= true;
				}
				if(FR-1==TR && FC+1==TC ){
					AJ= true;
				}
				if(FR+1==TR && FC-1==TC ){
					AJ= true;
				}
				if(FR+1==TR && FC+1==TC ){
					AJ= true;
				}
			}
			if(AJ==true)
		    {
			   if(!kingvalid(Game, Move))
                  AJ=true;
               else
            	AJ=false;
		    }
		    if(AJ==true)
		    {
		    	KW++;
			}
		}
		
		if(Game.TurningPlayer == BLACK )
		{
			
			if(Game.Board[TR][TC].Code==NONE || Game.Board[TR][TC].PieceColor==WHITE){
			
				if(FR-1==TR && TC==FC ){
					AJ= true;
				}
				if(FR+1==TR && TC==FC ){
					AJ= true;
				}
				if(FC-1==TC && TR==FR ){
					AJ= true;
				}
				if(FC+1==TC && TR==FR ){
					AJ= true;
				}
				if(FR-1==TR && FC-1==TC ){
					AJ= true;
				}
				if(FR-1==TR && FC+1==TC ){
					AJ= true;
				}
				if(FR+1==TR && FC-1==TC ){
					AJ= true;
				}
				if(FR+1==TR && FC+1==TC ){
					AJ= true;
				}
			}
			if(AJ==true)
		    {
			   if(!kingvalid(Game, Move))
                  AJ=true;
               else
            	AJ=false;
		    }
		    if(AJ==true)
		    {
		    	KB++;
			}
		}
		   
		
	}
	if(Game.TurningPlayer == WHITE && Game.Board[FR][FC].Code==KING && Game.Board[FR][FC].PieceColor==WHITE && Game.Board[7][0].Code==ROOK && Game.Board[7][0].PieceColor==WHITE)
	{
		if(FR==7 && FC==4 && TR==7 && TC==2 && RWa==0 && KW==0 )
		{
			if(!kingvalid(Game, Move))
			{
				if(Game.Board[7][3].Code==NONE && Game.Board[7][1].Code==NONE && Game.Board[7][2].Code==NONE)
				{
					Game.Board[TR][TC].Code =Game.Board[FR][FC].Code;
                    Game.Board[TR][TC].PieceColor =Game.Board[FR][FC].PieceColor;
                    Game.Board[FR][FC].Code = NONE;
                    Game.Board[7][3].Code =ROOK;
                    Game.Board[7][3].PieceColor =WHITE;
                    Game.Board[7][0].Code = NONE;
                    
				}
				
			}
		}
	}
	
	if(Game.TurningPlayer == WHITE && Game.Board[FR][FC].Code==KING && Game.Board[FR][FC].PieceColor==WHITE && Game.Board[7][7].Code==ROOK && Game.Board[7][7].PieceColor==WHITE)
	{
		if(FR==7 && FC==4 && TR==7 && TC==6 && RWb==0 && KW==0 )
		{
			if(!kingvalid(Game, Move))
			{
				if(Game.Board[7][5].Code==NONE && Game.Board[7][6].Code==NONE )
				{
					Game.Board[TR][TC].Code =Game.Board[FR][FC].Code;
                    Game.Board[TR][TC].PieceColor =Game.Board[FR][FC].PieceColor;
                    Game.Board[FR][FC].Code = NONE;
                    Game.Board[7][5].Code =ROOK;
                    Game.Board[7][5].PieceColor =WHITE;
                    Game.Board[7][7].Code = NONE;
                    
				}
				
			}
		}
	}
	
	if(Game.TurningPlayer == BLACK && Game.Board[FR][FC].Code==KING && Game.Board[FR][FC].PieceColor==BLACK && Game.Board[0][0].Code==ROOK && Game.Board[0][0].PieceColor==BLACK)
	{
		if(FR==0 && FC==4 && TR==0 && TC==2 && RBa==0 && KB==0 )
		{
			if(!kingvalid(Game, Move))
			{
				if(Game.Board[0][3].Code==NONE && Game.Board[0][1].Code==NONE && Game.Board[0][2].Code==NONE)
				{
					Game.Board[TR][TC].Code =Game.Board[FR][FC].Code;
                    Game.Board[TR][TC].PieceColor =Game.Board[FR][FC].PieceColor;
                    Game.Board[FR][FC].Code = NONE;
                    Game.Board[0][3].Code =ROOK;
                    Game.Board[0][3].PieceColor =BLACK;
                    Game.Board[0][0].Code = NONE;
                    
				}
				
			}
		}
	}
	
	if(Game.TurningPlayer == BLACK && Game.Board[FR][FC].Code==KING && Game.Board[FR][FC].PieceColor==BLACK && Game.Board[0][7].Code==ROOK && Game.Board[0][7].PieceColor==BLACK)
	{
		if(FR==0 && FC==4 && TR==0 && TC==6 && RBb==0 && KB==0 )
		{
			if(!kingvalid(Game, Move))
			{
				if(Game.Board[0][5].Code==NONE && Game.Board[0][6].Code==NONE)
				{
					Game.Board[TR][TC].Code =Game.Board[FR][FC].Code;
                    Game.Board[TR][TC].PieceColor =Game.Board[FR][FC].PieceColor;
                    Game.Board[FR][FC].Code = NONE;
                    Game.Board[0][5].Code =ROOK;
                    Game.Board[0][5].PieceColor =BLACK;
                    Game.Board[0][7].Code = NONE;
                    
				}
				
			}
		}
	}
	
	
	
	
	
return 0;	
}
bool isValidMove(GameData& Game, chessMove Move){
	
	bool AJ=false;
    int FR, FC, TR,TC;
    FR = Move.FromRow;
    FC = Move.FromColumn;
    TR = Move.ToRow;
    TC = Move.ToColumn;
    
	if(Game.Board[FR][FC].Code==PAWN)  //PAWN
	{
		if(Game.TurningPlayer == WHITE)    
		{
			if(FR==6 && FC==TC )
			{
				if(TR==5 && Game.Board[5][TC].Code==NONE)
				{
					AJ=true;
				}
				else if(TR==4 && Game.Board[4][TC].Code==NONE && Game.Board[5][TC].Code==NONE)
				{
					AJ=true;
					if(Game.Board[4][TC-1].Code==PAWN && Game.Board[4][TC-1].PieceColor==BLACK)
						EnPeasent(Game,Move);
					if(Game.Board[4][TC+1].Code==PAWN && Game.Board[4][TC+1].PieceColor==BLACK)
						EnPeasent(Game,Move);
					
				}
			}
			else if(FR==TR+1 && Game.Board[TR][TC].Code==NONE && FC==TC) 
			{
				AJ= true;
			} 
			      
			else if(FR==TR+1 && FC==TC-1 && Game.Board[TR][TC].Code!=NONE && Game.Board[TR][TC].PieceColor==BLACK)
			{
				AJ=true;
			}
			
			else if(FR==TR+1 && FC==TC+1 && Game.Board[TR][TC].Code!=NONE && Game.Board[TR][TC].PieceColor==BLACK)
			{
				AJ=true;
			}
		}
		
		if(Game.TurningPlayer == BLACK )     
		{
			if(FR==1 && FC==TC)
			{
				if(TR==2 && Game.Board[2][TC].Code==NONE)
				{
					AJ=true;
				}
				if(TR==3 && Game.Board[3][TC].Code==NONE && Game.Board[2][TC].Code==NONE)
				{
					
					AJ=true;
					if(Game.Board[3][TC-1].Code==PAWN && Game.Board[3][TC-1].PieceColor==WHITE){
						cout<<"hehe";
						EnPeasent(Game,Move);
						
					}
						
					if(Game.Board[3][TC+1].Code==PAWN && Game.Board[3][TC+1].PieceColor==WHITE)
					{
						cout<<"hehe";
						EnPeasent(Game,Move);
					}
				}
			}
			else if(TR==FR+1 && Game.Board[TR][TC].Code==NONE && FC==TC)
			{
				AJ= true;
			}  
			else if(FR==TR-1 && FC==TC+1 && Game.Board[TR][TC].Code!=NONE && Game.Board[TR][TC].PieceColor==WHITE )
			{
				AJ= true;
			}
			else if(FR==TR-1 && FC==TC-1 && Game.Board[TR][TC].Code!=NONE && Game.Board[TR][TC].PieceColor==WHITE)
			{
				AJ= true;
			}
		}
			
	}
	if(Game.Board[FR][FC].Code==ROOK)  //ROOK
	{
		if(Game.TurningPlayer == WHITE )
		{
			if(TC==FC)
			{
				int a= FR-1;
			    for(int i=2; Game.Board[a][TC].Code==NONE; i++)
			    {
			    	if(a==TR)
					{
						AJ=true;
					}
				    a= FR-i;
			    }
			    if(a==TR && Game.Board[TR][TC].PieceColor==BLACK)
			    {
			    	AJ=true;
				}
				
			    int b=FR+1;
			    for(int i=2; Game.Board[b][TC].Code==NONE; i++)
			    {
			    	if(b==TR)
					{
						AJ=true;
					}
				    b= FR+i;
			    }
			    if(b==TR && Game.Board[TR][TC].PieceColor==BLACK)
			    {
			    	AJ=true;
				}
			    
			}
			else if(TR==FR)
			{
				int a=FC-1;
				for(int i=2; Game.Board[TR][a].Code==NONE; i++)
			    {
			    	if(a==TC)
			    	{
			    		AJ=true;
					}
				    a= FC-i;
			    }
			    if(a==TC && Game.Board[TR][TC].PieceColor==BLACK)
			    {
			    	AJ=true;
				}
				int b=FC+1;
			    for(int i=2; Game.Board[TR][b].Code==NONE; i++)
			    {
			    	if(b==TC)
			    	{
			    		AJ=true;
					}
				    b=FC+i;
			    }
			    if(b==TC && Game.Board[TR][TC].PieceColor==BLACK)
			    {
			    	AJ=true;
				}
		    }
		}
		if(Game.TurningPlayer == BLACK )
		{
			if(TC==FC)
			{
				int a= FR-1;
			    for(int i=2; Game.Board[a][TC].Code==NONE; i++)
			    {
			    	if(a==TR)
					{
						AJ=true;
					}
				    a= FR-i;
			    }
			    if(a==TR && Game.Board[TR][TC].PieceColor==WHITE)
			    {
			    	AJ=true;
				}
				
			    int b=FR+1;
			    for(int i=2; Game.Board[b][TC].Code==NONE; i++)
			    {
			    	if(b==TR)
					{
						AJ=true;
					}
				    b= FR+i;
			    }
			    if(b==TR && Game.Board[TR][TC].PieceColor==WHITE)
			    {
			    	AJ=true;
				}
			    
			}
			else if(TR==FR)
			{
				int a=FC-1;
				for(int i=2; Game.Board[TR][a].Code==NONE; i++)
			    {
			    	if(a==TC)
			    	{
			    		AJ=true;
					}
				    a= FC-i;
			    }
			    if(a==TC && Game.Board[TR][TC].PieceColor==WHITE)
			    {
			    	AJ=true;
				}
				int b=FC+1;
			    for(int i=2; Game.Board[TR][b].Code==NONE; i++)
			    {
			    	if(b==TC)
			    	{
			    		AJ=true;
					}
				    b=FC+i;
			    }
			    if(b==TC && Game.Board[TR][TC].PieceColor==WHITE)
			    {
			    	AJ=true;
				}
				
			}
		}
		
			
	}
	
	if(Game.Board[FR][FC].Code==KING) //KING
	{
		
		if(Game.TurningPlayer == WHITE )
		{
			if(Game.Board[TR][TC].Code==NONE || Game.Board[TR][TC].PieceColor==BLACK){
			
				if(FR-1==TR && TC==FC ){
					AJ= true;
				}
				if(FR+1==TR && TC==FC ){
					AJ= true;
				}
				if(FC-1==TC && TR==FR ){
					AJ= true;
				}
				if(FC+1==TC && TR==FR ){
					AJ= true;
				}
				if(FR-1==TR && FC-1==TC ){
					AJ= true;
				}
				if(FR-1==TR && FC+1==TC ){
					AJ= true;
				}
				if(FR+1==TR && FC-1==TC ){
					AJ= true;
				}
				if(FR+1==TR && FC+1==TC ){
					AJ= true;
				}
			}
		}
		
		if(Game.TurningPlayer == BLACK )
		{
			
			if(Game.Board[TR][TC].Code==NONE || Game.Board[TR][TC].PieceColor==WHITE){
			
				if(FR-1==TR && TC==FC ){
					AJ= true;
				}
				if(FR+1==TR && TC==FC ){
					AJ= true;
				}
				if(FC-1==TC && TR==FR ){
					AJ= true;
				}
				if(FC+1==TC && TR==FR ){
					AJ= true;
				}
				if(FR-1==TR && FC-1==TC ){
					AJ= true;
				}
				if(FR-1==TR && FC+1==TC ){
					AJ= true;
				}
				if(FR+1==TR && FC-1==TC ){
					AJ= true;
				}
				if(FR+1==TR && FC+1==TC ){
					AJ= true;
				}
			}
		}
		if(AJ==true)
		{
			if(!kingvalid(Game, Move))
               AJ=true;
            else
            {
            	AJ=false;
            	cout<<endl;
            	cout<<"THE MOVE WAS INVALID";
            	cout<<endl;
			}
		       
		}
		   
		
	}

	if(Game.Board[FR][FC].Code==KNIGHT)  //KNIGHT
	{
		if(Game.TurningPlayer == WHITE )
		{
			if(Game.Board[TR][TC].Code==NONE || Game.Board[TR][TC].PieceColor==BLACK){
			
				if(FR==TR+2 && FC==TC+1 )
				   AJ=true;
				if(FR==TR+1 && FC==TC+2 )
				   AJ=true;
				if(FR==TR-1 && FC==TC+2 )
				   AJ=true;
				if(FR==TR-2 && FC==TC+1 )
				   AJ=true;
				if(FR==TR-2 && FC==TC-1 )
				   AJ=true;
				if(FR==TR-1 && FC==TC-2 )
				   AJ=true;
				if(FR==TR+1 && FC==TC-2 )
				   AJ=true;
				if(FR==TR+2 && FC==TC-1 )
				   AJ=true; 
			}
			             
		}
		if(Game.TurningPlayer == BLACK )
		{
			if(Game.Board[TR][TC].Code==NONE || Game.Board[TR][TC].PieceColor==WHITE ){
			
				if(FR==TR+2 && FC==TC+1 )
				   AJ=true;
				if(FR==TR+1 && FC==TC+2 )
				   AJ=true;
				if(FR==TR-1 && FC==TC+2 )
				   AJ=true;
				if(FR==TR-2 && FC==TC+1 )
				   AJ=true;
				if(FR==TR-2 && FC==TC-1 )
				   AJ=true;
				if(FR==TR-1 && FC==TC-2 )
				   AJ=true;
				if(FR==TR+1 && FC==TC-2 )
				   AJ=true;
				if(FR==TR+2 && FC==TC-1 )
				   AJ=true; 
			}   
		}		
	}
	if(Game.Board[FR][FC].Code==BISHOP)  //BISHOP
	{
		if(Game.TurningPlayer == WHITE)
		{
			int a=FR-1;
			int b=FC+1;
			for(int i=2; Game.Board[a][b].Code==NONE; i++)
			{
				if(a==TR && b==TC)
				{
					AJ=true;
				}
				a=FR-i;
				b=FC+i;
			} 
			if(a==TR && b==TC && Game.Board[TR][TC].PieceColor==BLACK )
			{
				AJ=true;
			}
			
			int c=FR-1;
			int d=FC-1;
			for(int i=2; Game.Board[c][d].Code==NONE; i++)
			{
				if(c==TR && d==TC)
				{
					AJ=true;
				}
				c=FR-i;
				d=FC-i;
			} 
			if(c==TR && d==TC && Game.Board[TR][TC].PieceColor==BLACK )
			{
				AJ=true;
			}
			
			int e=FR+1;
			int f=FC+1;
			for(int i=2; Game.Board[e][f].Code==NONE; i++)
			{
				if(e==TR && f==TC)
				{
					AJ=true;
				}
				e=FR+i;
				f=FC+i;
			} 
			if(e==TR && f==TC && Game.Board[TR][TC].PieceColor==BLACK )
			{
				AJ=true;
			}
			
			int g=FR+1;
			int h=FC-1;
			for(int i=2; Game.Board[g][h].Code==NONE; i++)
			{
				if(g==TR && h==TC)
				{
					AJ=true;
				}
				g=FR+i;
				h=FC-i;
			} 
			if(g==TR && h==TC && Game.Board[TR][TC].PieceColor==BLACK)
			{
				AJ=true;
			}             
		}
		
		if(Game.TurningPlayer == BLACK)
		{
			int a=FR-1;
			int b=FC+1;
			for(int i=2; Game.Board[a][b].Code==NONE; i++)
			{
				if(a==TR && b==TC)
				{
					AJ=true;
				}
				a=FR-i;
				b=FC+i;
			} 
			if(a==TR && b==TC && Game.Board[TR][TC].PieceColor==WHITE)
			{
				AJ=true;
			}
			
			int c=FR-1;
			int d=FC-1;
			for(int i=2; Game.Board[c][d].Code==NONE; i++)
			{
				if(c==TR && d==TC)
				{
					AJ=true;
				}
				c=FR-i;
				d=FC-i;
			} 
			if(c==TR && d==TC && Game.Board[TR][TC].PieceColor==WHITE )
			{
				AJ=true;
			}
			
			int e=FR+1;
			int f=FC+1;
			for(int i=2; Game.Board[e][f].Code==NONE; i++)
			{
				if(e==TR && f==TC)
				{
					AJ=true;
				}
				e=FR+i;
				f=FC+i;
			} 
			if(e==TR && f==TC && Game.Board[TR][TC].PieceColor==WHITE )
			{
				AJ=true;
			}
			
			int g=FR+1;
			int h=FC-1;
			for(int i=2; Game.Board[g][h].Code==NONE; i++)
			{
				if(g==TR && h==TC)
				{
					AJ=true;
				}
				g=FR+i;
				h=FC-i;
			} 
			if(g==TR && h==TC && Game.Board[TR][TC].PieceColor==WHITE )
			{
				AJ=true;
			}
		}		
	}
	
	if(Game.Board[FR][FC].Code==QUEEN)  //QUEEN
	{
		if(Game.TurningPlayer == WHITE)
		{
			if(TC==FC)
			{
				int a= FR-1;
			    for(int i=2; Game.Board[a][TC].Code==NONE; i++)
			    {
			    	if(a==TR)
					{
						AJ=true;
					}
				    a= FR-i;
			    }
			    if(a==TR && Game.Board[TR][TC].PieceColor==BLACK)
			    {
			    	AJ=true;
				}
				
			    int b=FR+1;
			    for(int i=2; Game.Board[b][TC].Code==NONE; i++)
			    {
			    	if(b==TR)
					{
						AJ=true;
					}
				    b= FR+i;
			    }
			    if(b==TR && Game.Board[TR][TC].PieceColor==BLACK)
			    {
			    	AJ=true;
				}
			    
			}
			else if(TR==FR)
			{
				int a=FC-1;
				for(int i=2; Game.Board[TR][a].Code==NONE; i++)
			    {
			    	if(a==TC)
			    	{
			    		AJ=true;
					}
				    a= FC-i;
			    }
			    if(a==TC && Game.Board[TR][TC].PieceColor==BLACK)
			    {
			    	AJ=true;
				}
				int b=FC+1;
			    for(int i=2; Game.Board[TR][b].Code==NONE; i++)
			    {
			    	if(b==TC)
			    	{
			    		AJ=true;
					}
				    b=FC+i;
			    }
			    if(b==TC && Game.Board[TR][TC].PieceColor==BLACK)
			    {
			    	AJ=true;
				}
				
			}
			else if(TC!=FC && FR!=TR)
			{
				int a=FR-1;
				int b=FC+1;
				for(int i=2; Game.Board[a][b].Code==NONE; i++)
				{
					if(a==TR && b==TC)
					{
						AJ=true;
					}
					a=FR-i;
					b=FC+i;
				} 
				if(a==TR && b==TC && Game.Board[TR][TC].PieceColor==BLACK )
				{
					AJ=true;
				}
				
				int c=FR-1;
				int d=FC-1;
				for(int i=2; Game.Board[c][d].Code==NONE; i++)
				{
					if(c==TR && d==TC)
					{
						AJ=true;
					}
					c=FR-i;
					d=FC-i;
				} 
				if(c==TR && d==TC && Game.Board[TR][TC].PieceColor==BLACK )
				{
					AJ=true;
				}
				
				int e=FR+1;
				int f=FC+1;
				for(int i=2; Game.Board[e][f].Code==NONE; i++)
				{
					if(e==TR && f==TC)
					{
						AJ=true;
					}
					e=FR+i;
					f=FC+i;
				} 
				if(e==TR && f==TC && Game.Board[TR][TC].PieceColor==BLACK )
				{
					AJ=true;
				}
				
				int g=FR+1;
				int h=FC-1;
				for(int i=2; Game.Board[g][h].Code==NONE; i++)
				{
					if(g==TR && h==TC)
					{
						AJ=true;
					}
					g=FR+i;
					h=FC-i;
				} 
				if(g==TR && h==TC && Game.Board[TR][TC].PieceColor==BLACK)
				{
					AJ=true;
				}             
			}
		}
		
		if(Game.TurningPlayer == BLACK)
		{
			if(TC==FC)
			{
				int a= FR-1;
			    for(int i=2; Game.Board[a][TC].Code==NONE; i++)
			    {
			    	if(a==TR)
					{
						AJ=true;
					}
				    a= FR-i;
			    }
			    if(a==TR && Game.Board[TR][TC].PieceColor==WHITE)
			    {
			    	AJ=true;
				}
				
			    int b=FR+1;
			    for(int i=2; Game.Board[b][TC].Code==NONE; i++)
			    {
			    	if(b==TR)
					{
						AJ=true;
					}
				    b= FR+i;
			    }
			    if(b==TR && Game.Board[TR][TC].PieceColor==WHITE)
			    {
			    	AJ=true;
				}
			    
			}
			else if(TR==FR)
			{
				int a=FC-1;
				for(int i=2; Game.Board[TR][a].Code==NONE; i++)
			    {
			    	if(a==TC)
			    	{
			    		AJ=true;
					}
				    a= FC-i;
			    }
			    if(a==TC && Game.Board[TR][TC].PieceColor==WHITE)
			    {
			    	AJ=true;
				}
				int b=FC+1;
			    for(int i=2; Game.Board[TR][b].Code==NONE; i++)
			    {
			    	if(b==TC)
			    	{
			    		AJ=true;
					}
				    b=FC+i;
			    }
			    if(b==TC && Game.Board[TR][TC].PieceColor==WHITE)
			    {
			    	AJ=true;
				}
				
			}
			else if(TC!=FC && FR!=TR)
			{
				int a=FR-1;
				int b=FC+1;
				for(int i=2; Game.Board[a][b].Code==NONE; i++)
				{
					if(a==TR && b==TC)
					{
						AJ=true;
					}
					a=FR-i;
					b=FC+i;
				} 
				if(a==TR && b==TC && Game.Board[TR][TC].PieceColor==WHITE )
				{
					AJ=true;
				}
				
				int c=FR-1;
				int d=FC-1;
				for(int i=2; Game.Board[c][d].Code==NONE; i++)
				{
					if(c==TR && d==TC)
					{
						AJ=true;
					}
					c=FR-i;
					d=FC-i;
				} 
				if(c==TR && d==TC && Game.Board[TR][TC].PieceColor==WHITE )
				{
					AJ=true;
				}
				
				int e=FR+1;
				int f=FC+1;
				for(int i=2; Game.Board[e][f].Code==NONE; i++)
				{
					if(e==TR && f==TC)
					{
						AJ=true;
					}
					e=FR+i;
					f=FC+i;
				} 
				if(e==TR && f==TC && Game.Board[TR][TC].PieceColor==WHITE )
				{
					AJ=true;
				}
				
				int g=FR+1;
				int h=FC-1;
				for(int i=2; Game.Board[g][h].Code==NONE; i++)
				{
					if(g==TR && h==TC)
					{
						AJ=true;
					}
					g=FR+i;
					h=FC-i;
				} 
				if(g==TR && h==TC && Game.Board[TR][TC].PieceColor==WHITE)
				{
					AJ=true;
				}             
			}
		}
			
	}
	castling( Game, Move);
	return AJ;
	
}
int MakeMove(GameData& Game, chessMove Move){
    //Function to make a move on the board
    // It will return 0 if the move is valid and a code of error to specify why the move is not valid otherwise

	// Follwoing is a very simple move example. Your code will support all types of moves including pawn promotion, castling and En Passant etc. Furthermore i must also add the move in the vector of moves used for keeping history.

	if(!isValidMove(Game, Move))
        return 1;
	
    int FR, FC, TR,TC;
    FR = Move.FromRow;
    FC = Move.FromColumn;
    TR = Move.ToRow;
    TC = Move.ToColumn;
	
    Game.Board[TR][TC].Code =
         Game.Board[FR][FC].Code;
    Game.Board[TR][TC].PieceColor =
         Game.Board[FR][FC].PieceColor;
    Game.Board[FR][FC].Code = NONE;
	
    if(Game.TurningPlayer == BLACK)
        Game.TurningPlayer = WHITE;
    else
        Game.TurningPlayer = BLACK;
        
	if(Game.Board[0][TC].Code==PAWN && Game.Board[0][TC].PieceColor==WHITE){
		cout<<"PAWN PROMOTED TO:\n1.BISHOP\n2.KNIGHT\n3.ROOK\n4.QUEEN"<<endl;
		int A;
		cin>>A;
		if(A==1){
			Game.Board[TR][TC].Code=BISHOP;
			Game.Board[TR][TC].PieceColor=WHITE;
		}	
		if(A==2){
			Game.Board[TR][TC].Code=KNIGHT;
			Game.Board[TR][TC].PieceColor=WHITE;
		}	
		if(A==3){
			Game.Board[TR][TC].Code=ROOK;
			Game.Board[TR][TC].PieceColor=WHITE;
		}	
		if(A==4){
			Game.Board[TR][TC].Code=QUEEN;
			Game.Board[TR][TC].PieceColor=WHITE;
		}
	}
	if(Game.Board[7][TC].Code==PAWN && Game.Board[7][TC].PieceColor==BLACK){
		cout<<"PAWN PROMOTED TO:\n1.BISHOP\n2.KNIGHT\n3.ROOK\n4.QUEEN"<<endl;
		int A;
		cin>>A;
		
		if(A==1){
			Game.Board[7][TC].Code=BISHOP;
			Game.Board[7][TC].PieceColor=WHITE;
		}	
		if(A==2){
			Game.Board[7][TC].Code=KNIGHT;
			Game.Board[7][TC].PieceColor=WHITE;
		}	
		if(A==3){
			Game.Board[7][TC].Code=ROOK;
			Game.Board[7][TC].PieceColor=WHITE;
		}	
		if(A==4){
			Game.Board[7][TC].Code=QUEEN;
			Game.Board[7][TC].PieceColor=WHITE;
		}
	}

	return 0;

}

void initGame(GameData& Game){

    for(int r = 0; r < 2; r++)
        for(int c= 0; c < 8; c++ )
            Game.Board[r][c].PieceColor = BLACK;

    for(int r = 2; r < 6; r++)
        for(int c= 0; c < 8; c++ )
            Game.Board[r][c].Code = NONE;

    for(int r = 6; r < 8; r++)
        for(int c= 0; c < 8; c++ )
            Game.Board[r][c].PieceColor = WHITE;


    Game.Board[0][0].Code = Game.Board[0][7].Code = ROOK;
    Game.Board[7][0].Code = Game.Board[7][7].Code = ROOK;

    Game.Board[0][1].Code = Game.Board[0][6].Code = KNIGHT;
    Game.Board[7][1].Code = Game.Board[7][6].Code = KNIGHT;

    Game.Board[0][2].Code = Game.Board[0][5].Code = BISHOP;
    Game.Board[7][2].Code = Game.Board[7][5].Code = BISHOP;

    Game.Board[0][3].Code = Game.Board[7][3].Code = QUEEN;
    Game.Board[0][4].Code = Game.Board[7][4].Code = KING;

    for(int c= 0; c < 8; c++ )
        Game.Board[1][c].Code = Game.Board[6][c].Code = PAWN;

    Game.TurningPlayer = WHITE;

    Game.MoveHistory = vector<chessMove>(1);
    return;
}

bool isfacingCheck(GameData& Game, Color Player){
	bool JA=false;
	int WR, WC, BR, BC;
    for(int i=0; i<8; i++)
    {
    	for(int j=0; j<8; j++)
    	{
    		if(Game.Board[i][j].Code==KING && Game.Board[i][j].PieceColor== WHITE)
    		{
    			 WR= i;
    			 WC= j;
			}
			if(Game.Board[i][j].Code==KING && Game.Board[i][j].PieceColor== BLACK)
    		{
    			BR= i;
    			BC= j;
			}
			
		}
	}
	if(Game.Board[WR][WC].Code==KING && Game.Board[WR][WC].PieceColor== WHITE)  //WHITE
	{
		/////// ROOOK AND QUEEN
		int a= WR-1;
		if(Game.Board[a][WC].Code==QUEEN || Game.Board[a][WC].Code==ROOK)
		{
			if(Game.Board[a][WC].PieceColor==BLACK)
	    	   JA=true;
		}
		for(int i=2; Game.Board[a][WC].Code==NONE; i++)
		{
			a= WR-i;
		}
		if(Game.Board[a][WC].Code==QUEEN || Game.Board[a][WC].Code==ROOK)
		{
			if(Game.Board[a][WC].PieceColor==BLACK)
	    	   JA=true;
		}
		
				
	    int b=WR+1;
	    if(Game.Board[b][WC].Code==QUEEN || Game.Board[b][WC].Code==ROOK)
		{
			if(Game.Board[b][WC].PieceColor==BLACK)
	    	   JA=true;
		}
	    for(int i=2; Game.Board[b][WC].Code==NONE; i++)
	    {
		    b= WR+i;
	    }
	    if(Game.Board[b][WC].Code==QUEEN || Game.Board[b][WC].Code==ROOK)
		{
			if(Game.Board[b][WC].PieceColor==BLACK)
	    	   JA=true;
		}
	    
			    
		int c=WC-1;
		if(Game.Board[WR][c].Code==QUEEN || Game.Board[WR][c].Code==ROOK)
		{
			if(Game.Board[WR][c].PieceColor==BLACK)
	    	   JA=true;
		}
		for(int i=2; Game.Board[WR][c].Code==NONE; i++)
	    {
		    c= WC-i;
	    }
	    if(Game.Board[WR][c].Code==QUEEN || Game.Board[WR][c].Code==ROOK)
		{
			if(Game.Board[WR][c].PieceColor==BLACK)
	    	   JA=true;
		}
		
		int d=WC+1;
		if(Game.Board[WR][d].Code==QUEEN || Game.Board[WR][d].Code==ROOK)
		{
			if(Game.Board[WR][d].PieceColor==BLACK)
	    	   JA=true;
		}
	    for(int i=2; Game.Board[WR][d].Code==NONE; i++)
	    {
		    d=WC+i;
	    }
	    if(Game.Board[WR][d].Code==QUEEN || Game.Board[WR][d].Code==ROOK)
		{
			if(Game.Board[WR][d].PieceColor==BLACK)
	    	   JA=true;
		}
		////// BISHOP AND QUEEN
		int A=WR-1;
		int B=WC+1;
		if(Game.Board[A][B].Code==QUEEN || Game.Board[A][B].Code==BISHOP)
		{
			if(Game.Board[A][B].PieceColor==BLACK)
			   JA=true;
		}
		for(int i=2; Game.Board[A][B].Code==NONE; i++)
		{
			A=WR-i;
			B=WC+i;
		} 
		if(Game.Board[A][B].Code==QUEEN || Game.Board[A][B].Code==BISHOP)
		{
			if(Game.Board[A][B].PieceColor==BLACK)
			   JA=true;
		}
			
		int C=WR-1;
		int D=WC-1;
		if(Game.Board[C][D].Code==QUEEN || Game.Board[C][D].Code==BISHOP)
		{
			if(Game.Board[C][D].PieceColor==BLACK)
			   JA=true;
		}
		for(int i=2; Game.Board[C][D].Code==NONE; i++)
		{
			C=WR-i;
			D=WC-i;
		} 
		if(Game.Board[C][D].Code==QUEEN || Game.Board[C][D].Code==BISHOP)
		{
			if(Game.Board[C][D].PieceColor==BLACK)
			   JA=true;
		}
		
			
		int E=WR+1;
		int F=WC+1;
		if(Game.Board[E][F].Code==QUEEN || Game.Board[E][F].Code==BISHOP)
		{
			if(Game.Board[E][F].PieceColor==BLACK)
			   JA=true;
		}
		for(int i=2; Game.Board[E][F].Code==NONE; i++)
		{
			E=WR+i;
			F=WC+i;
		} 
		if(Game.Board[E][F].Code==QUEEN || Game.Board[E][F].Code==BISHOP)
		{
			if(Game.Board[E][F].PieceColor==BLACK)
			   JA=true;
		}
		
		int G=WR+1;
		int H=WC-1;
		if(Game.Board[G][H].Code==QUEEN || Game.Board[G][H].Code==BISHOP)
		{
			if(Game.Board[G][H].PieceColor==BLACK)
			   JA=true;
		}
		for(int i=2; Game.Board[G][H].Code==NONE; i++)
		{
			G=WR+i;
			H=WC-i;
		} 
		if(Game.Board[G][H].Code==QUEEN || Game.Board[G][H].Code==BISHOP)
		{
			if(Game.Board[G][H].PieceColor==BLACK)
			   JA=true;
		}           
		//knight
		if(Game.Board[WR-2][WC-1].Code==KNIGHT && Game.Board[WR-2][WC-1].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR-1][WC-2].Code==KNIGHT && Game.Board[WR-1][WC-2].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR+1][WC-2].Code==KNIGHT && Game.Board[WR+1][WC-2].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR+2][WC-1].Code==KNIGHT && Game.Board[WR+2][WC-1].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR-2][WC+1].Code==KNIGHT && Game.Board[WR-2][WC+1].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR-1][WC+2].Code==KNIGHT && Game.Board[WR-1][WC+2].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR+1][WC+2].Code==KNIGHT && Game.Board[WR+1][WC+2].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR+2][WC+1].Code==KNIGHT && Game.Board[WR+2][WC+1].PieceColor==BLACK)
			JA=true;
			
		//PAWN
		if(Game.Board[WR-1][WC-1].Code==PAWN && Game.Board[WR-1][WC-1].PieceColor==BLACK)
			JA=true;
		if(Game.Board[WR-1][WC+1].Code==PAWN && Game.Board[WR-1][WC+1].PieceColor==BLACK)
			JA=true;
	}
		
		
		    

	
	if(Game.Board[BR][BC].Code==KING && Game.Board[BR][BC].PieceColor== BLACK)  //BLACK
	{
		int a= BR-1;
		if(Game.Board[a][BC].Code==QUEEN || Game.Board[a][BC].Code==ROOK)
		{
			if(Game.Board[a][BC].PieceColor==WHITE)
	    	   JA=true;
		}
		for(int i=2; Game.Board[a][BC].Code==NONE; i++)
		{
			a= BR-i;
		}
		if(Game.Board[a][BC].Code==QUEEN || Game.Board[a][BC].Code==ROOK)
		{
			if(Game.Board[a][BC].PieceColor==WHITE)
	    	   JA=true;
		}
		
				
	    int b=BR+1;
	    if(Game.Board[b][BC].Code==QUEEN || Game.Board[b][BC].Code==ROOK)
		{
			if(Game.Board[b][BC].PieceColor==WHITE)
	    	   JA=true;
		}
	    for(int i=2; Game.Board[b][BC].Code==NONE; i++)
	    {
		    b= BR+i;
	    }
	    if(Game.Board[b][BC].Code==QUEEN || Game.Board[b][BC].Code==ROOK)
		{
			if(Game.Board[b][BC].PieceColor==WHITE)
	    	   JA=true;
		}
	    
			    
		int c=BC-1;
		if(Game.Board[BR][c].Code==QUEEN || Game.Board[BR][c].Code==ROOK)
		{
			if(Game.Board[BR][c].PieceColor==WHITE)
	    	   JA=true;
		}
		for(int i=2; Game.Board[BR][c].Code==NONE; i++)
	    {
		    c= BC-i;
	    }
	    if(Game.Board[BR][c].Code==QUEEN || Game.Board[BR][c].Code==ROOK)
		{
			if(Game.Board[BR][c].PieceColor==WHITE)
	    	   JA=true;
		}
		
		int d=BC+1;
		if(Game.Board[BR][d].Code==QUEEN || Game.Board[BR][d].Code==ROOK)
		{
			if(Game.Board[BR][d].PieceColor==WHITE)
	    	   JA=true;
		}
	    for(int i=2; Game.Board[BR][d].Code==NONE; i++)
	    {
		    d=BC+i;
	    }
	    if(Game.Board[BR][d].Code==QUEEN || Game.Board[BR][d].Code==ROOK)
		{
			if(Game.Board[BR][d].PieceColor==WHITE)
	    	   JA=true;
		}
		// BISHOP AND QUEEN
		int A=BR-1;
		int B=BC+1;
		if(Game.Board[A][B].Code==QUEEN || Game.Board[A][B].Code==BISHOP)
		{
			if(Game.Board[A][B].PieceColor==WHITE)
			   JA=true;
		}
		for(int i=2; Game.Board[A][B].Code==NONE; i++)
		{
			A=BR-i;
			B=BC+i;
		} 
		if(Game.Board[A][B].Code==QUEEN || Game.Board[A][B].Code==BISHOP)
		{
			if(Game.Board[A][B].PieceColor==WHITE)
			   JA=true;
		}
			
		int C=BR-1;
		int D=BC-1;
		if(Game.Board[C][D].Code==QUEEN || Game.Board[C][D].Code==BISHOP)
		{
			if(Game.Board[C][D].PieceColor==WHITE)
			   JA=true;
		}
		for(int i=2; Game.Board[C][D].Code==NONE; i++)
		{
			C=BR-i;
			D=BC-i;
		} 
		if(Game.Board[C][D].Code==QUEEN || Game.Board[C][D].Code==BISHOP)
		{
			if(Game.Board[C][D].PieceColor==WHITE)
			   JA=true;
		}
		
			
		int E=BR+1;
		int F=BC+1;
		if(Game.Board[E][F].Code==QUEEN || Game.Board[E][F].Code==BISHOP)
		{
			if(Game.Board[E][F].PieceColor==WHITE)
			   JA=true;
		}
		for(int i=2; Game.Board[E][F].Code==NONE; i++)
		{
			E=BR+i;
			F=BC+i;
		} 
		if(Game.Board[E][F].Code==QUEEN || Game.Board[E][F].Code==BISHOP)
		{
			if(Game.Board[E][F].PieceColor==WHITE)
			   JA=true;
		}
		
		int G=BR+1;
		int H=BC-1;
		if(Game.Board[G][H].Code==QUEEN || Game.Board[G][H].Code==BISHOP)
		{
			if(Game.Board[G][H].PieceColor==WHITE)
			   JA=true;
		}
		for(int i=2; Game.Board[G][H].Code==NONE; i++)
		{
			G=BR+i;
			H=BC-i;
		} 
		if(Game.Board[G][H].Code==QUEEN || Game.Board[G][H].Code==BISHOP)
		{
			if(Game.Board[G][H].PieceColor==WHITE)
			   JA=true;
		} 
		//knight
		if(Game.Board[BR-2][BC-1].Code==KNIGHT && Game.Board[BR-2][BC-1].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR-1][BC-2].Code==KNIGHT && Game.Board[BR-1][BC-2].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR+1][BC-2].Code==KNIGHT && Game.Board[BR+1][BC-2].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR+2][BC-1].Code==KNIGHT && Game.Board[BR+2][BC-1].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR-2][BC+1].Code==KNIGHT && Game.Board[BR-2][BC+1].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR-1][BC+2].Code==KNIGHT && Game.Board[BR-1][BC+2].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR+1][BC+2].Code==KNIGHT && Game.Board[BR+1][BC+2].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR+2][BC+1].Code==KNIGHT && Game.Board[BR+2][BC+1].PieceColor==WHITE)
			JA=true;   
		//PAWN
		if(Game.Board[BR+1][BC-1].Code==PAWN && Game.Board[BR+1][BC-1].PieceColor==WHITE)
			JA=true;
		if(Game.Board[BR+1][BC+1].Code==PAWN && Game.Board[BR+1][BC+1].PieceColor==WHITE)
			JA=true;    
	}
	
    return JA;
}

bool isCheckmate(GameData& Game, Color Player){

    bool CK=false;
	int WR, WC, BR, BC;
    for(int i=0; i<8; i++)
    {
    	for(int j=0; j<8; j++)
    	{
    		if(Game.Board[i][j].Code==KING && Game.Board[i][j].PieceColor== WHITE)
    		{
    			 WR= i;
    			 WC= j;
			}
			if(Game.Board[i][j].Code==KING && Game.Board[i][j].PieceColor== BLACK)
    		{
    			BR= i;
    			BC= j;
			}
			
		}
	}
	if(Game.Board[BR][BC].Code==KING && Game.TurningPlayer==BLACK && BCHECKMATE(Game, Player,BR,BC)==0)
	{
		int a=0;
		int b=0;
		int c=0;
		int d=0;
		int e=0;
		int f=0;
		int g=0;
		int h=0;
		
		if(Game.Board[BR-1][BC].Code==NONE || Game.Board[BR-1][BC].Code==WHITE)
		{
			a=a+1;
			if(BCHECKMATE(Game, Player, BR-1, BC)==0)
			    a=a+1;
		}
		if(Game.Board[BR+1][BC].Code==NONE || Game.Board[BR+1][BC].PieceColor==WHITE)
		{
			b=b+1;
			if(BCHECKMATE(Game, Player,BR+1,BC)==0)
			    b=b+1;
		}
		if(Game.Board[BR][BC+1].Code==NONE || Game.Board[BR][BC+1].PieceColor==WHITE)
		{
			c=c+1;
			if(BCHECKMATE(Game, Player,BR,BC+1)==0)
			    c=c+1;
		}
		if(Game.Board[BR][BC-1].Code==NONE || Game.Board[BR][BC-1].PieceColor==WHITE)
		{
			d=d+1;
			if(BCHECKMATE(Game, Player,BR,BC-1)==0)
			     d=d+1;
		}
		if(Game.Board[BR-1][BC+1].Code==NONE || Game.Board[BR-1][BC+1].PieceColor==WHITE)
		{
			e=e+1;
			if(BCHECKMATE(Game, Player,BR-1,BC+1)==0)
			     e=e+1;
		}
		if(Game.Board[BR-1][BC-1].Code==NONE || Game.Board[BR-1][BC-1].PieceColor==WHITE)
		{
			f=f+1;
			if(BCHECKMATE(Game, Player,BR-1,BC-1)==0)
			     f=f+1;
		}
		if(Game.Board[BR+1][BC-1].Code==NONE || Game.Board[BR+1][BC-1].PieceColor==WHITE)
		{
			g=g+1;
			if(BCHECKMATE(Game, Player,BR+1,BC-1)==0)
			     g=g+1;
		}
		if(Game.Board[BR+1][BC+1].Code==NONE || Game.Board[BR+1][BC+1].PieceColor==WHITE)
		{
			h=h+1;
			if(BCHECKMATE(Game, Player,BR+1,BC+1)==0)
			     h=h+1;
		}
		
		if(a!=1 && b!=1 && c!=1 && d!=1 && e!=1 && f!=1 && g!=1 && h!=1 )
	    {
	    	CK=true;
		}
		
	
	}
	
	
	if( Game.Board[WR][WC].Code==KING && Game.TurningPlayer==WHITE && WCHECKMATE(Game, Player,WR,WC)==0){
		    int a=0;
			int b=0;
			int c=0;
			int d=0;
			int e=0;
			int f=0;
			int g=0;
			int h=0;
			
			if(Game.Board[WR-1][WC].Code==NONE || Game.Board[WR-1][WC].Code==BLACK)
			{
				a=a+1;
				if(WCHECKMATE(Game, Player, WR-1, WC)==0)
				    a=a+1;
			}
			if(Game.Board[WR+1][WC].Code==NONE || Game.Board[WR+1][WC].PieceColor==BLACK)
			{
				b=b+1;
				if(WCHECKMATE(Game, Player,WR+1,WC)==0)
				    b=b+1;
			}
			if(Game.Board[WR][WC+1].Code==NONE || Game.Board[WR][WC+1].PieceColor==BLACK)
			{
				c=c+1;
				if(WCHECKMATE(Game, Player,WR,WC+1)==0)
				    c=c+1;
			}
			if(Game.Board[WR][WC-1].Code==NONE || Game.Board[WR][WC-1].PieceColor==BLACK)
			{
				d=d+1;
				if(WCHECKMATE(Game, Player,WR,WC-1)==0)
				     d=d+1;
			}
			if(Game.Board[WR-1][WC+1].Code==NONE || Game.Board[WR-1][WC+1].PieceColor==BLACK)
			{
				e=e+1;
				if(WCHECKMATE(Game, Player,WR-1,WC+1)==0)
				     e=e+1;
			}
			if(Game.Board[WR-1][WC-1].Code==NONE || Game.Board[WR-1][WC-1].PieceColor==BLACK)
			{
				f=f+1;
				if(WCHECKMATE(Game, Player,WR-1,WC-1)==0)
				     f=f+1;
			}
			if(Game.Board[WR+1][WC-1].Code==NONE || Game.Board[WR+1][WC-1].PieceColor==BLACK)
			{
				g=g+1;
				if(WCHECKMATE(Game, Player,WR+1,WC-1)==0)
				     g=g+1;
			}
			if(Game.Board[WR+1][WC+1].Code==NONE || Game.Board[WR+1][WC+1].PieceColor==BLACK)
			{
				h=h+1;
				if(WCHECKMATE(Game, Player,WR+1,WC+1)==0)
				     h=h+1;
			}
			
		if(a!=1 && b!=1 && c!=1 && d!=1 && e!=1 && f!=1 && g!=1 && h!=1 )
	    {
	    	CK=true;
		}
		
		   
    }
	return CK;
}



int SaveGame(string FileName){
    //Function to save a game data into a file.


}

int LoadGame (string FileName){
    // function to load games data from a file
}

