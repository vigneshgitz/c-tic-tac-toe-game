 #include <iostream>

using namespace std;

char board[10] = {'0','1','2','3','4','5','6','7','8','9'};

void printboard()
{
    system("cls");
    cout << " *===============================*  TIC TAC TOE  *===================================*" <<endl;
    cout <<endl <<endl <<endl <<endl;
    cout <<"    |       |       " <<endl;
    cout <<"   " <<board[1] <<"|    " <<board[2] <<"  |     " <<board[3] <<endl;
    cout <<"____|_______|_______" <<endl;
    cout <<"    |       |       " <<endl;
    cout <<"    |       |       " <<endl;
    cout <<"   " <<board[4] <<"|    " <<board[5] <<"  |     " <<board[6] <<endl;
    cout <<"____|_______|_______" <<endl;
    cout <<"    |       |       " <<endl;
    cout <<"    |       |       " <<endl;
    cout <<"   " <<board[7] <<"|    " <<board[8] <<"  |      " <<board[9] <<endl;
    cout <<"____|_______|_______" <<endl;
    cout <<"    |       |       " <<endl;


}

int checkwin()
{
    if(board[1]==board[2] && board[2]== board[3])
        return 1;
    if(board[1]==board[4] && board[4]== board[7])
        return 1;
    if(board[1]==board[5] && board[5]== board[9])
        return 1;
    if(board[2]==board[5] && board[5]== board[8])
        return 1;
    if(board[3]==board[6] && board[6]== board[9])
        return 1;
    if(board[3]==board[5] && board[5]== board[7])
        return 1;
    if(board[7]==board[8] && board[8]== board[9])
        return 1;
    if(board[4]==board[5] && board[5]== board[6])
        return 1;

    int counter1 = 0;
    for(int i=1;i<=9;i++)
    {
        if( board[i]=='X' || board[i]=='O')
        {
            counter1++;
        }
    }

    if(counter1 == 9)
    {
        return 0;
    }

    return -1;

}

int main()
{

    printboard();
    int player=1,input ,stutes=-1;
    while(stutes == -1)
    {
        player = (player%2==0) ? 2: 1;
        char mark=(player ==1)? 'X' :'O';
        cout <<"please enter a player" <<player <<" number in game " <<endl;
        cin >>input ;
        if(input <1 || input >9)
            cout <<"please enter a valid number  " << endl;

        board[input] = mark;
        printboard();
        int result=checkwin();

        if(result==1)
        {
            cout <<" player  " <<player <<"  is winning " <<endl;
            return 0;
        }

        if(result==0)
        {
            cout <<"match is drow" <<endl;
            return 0;
        }

        player++;

    }


    return 0;
}
