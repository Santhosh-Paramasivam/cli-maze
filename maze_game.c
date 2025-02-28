#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <strings.h>

int cord(void);
void visual(int x, int y);
int wallcord(int n,int xory);
int sr,sc;
int totnofplus(void);
int nm;
void victory(void);
void timer(void);
void text(char input[]);


int main()
{
    visual(4,0);
    cord();

    return 0;
}

 int cord(void)
{
    char input;
    int xc = 4, oldxc = 0;
    int yc = 0, oldyc = 0;
    int nm = 0; //number of moves

    while(1<3)
    {
        input = getch();
        nm++;
        oldxc = xc;
        oldyc = yc;
        if(input == 'd' && xc < 25)
        {
            xc++;
            //printf("xc = %d",xc);
        }
        if(input == 'a' && xc > 0)
        {
            xc--;
            //printf("xc = %d",xc);
        }
        if(input == 's' && yc < 25)
        {
            yc++;
           //printf("yc = %d",yc);
        }
        if(input == 'w' && yc > 0)
        {
            yc--;
           //printf("yc = %d",yc);
        }

        int loop=0;

        while(loop < (totnofplus()-1))
        {
            if(xc == wallcord(loop,1) && yc == wallcord(loop,0))
            {
                xc = oldxc;
                yc = oldyc;
            }
        loop++;
        }

        system("cls");
        visual(xc,yc);
        //printf("%d,%d",xc,yc);
        timer();


        if(xc == 9 && yc == 10)                                //Gives winning message
        {
            victory();
            text("\n You won!\n\n Hit anything to play again!");
            getch();
            system("cls");
            main();
        }
    }
}

void visual(int x, int y)
{
     char B[100][100]={
                    "    B     O  O",
                    " OOOOOO   OO O",
                    "   O   OOO  OO",
                    "             O",
                    " OOOOO  OOOO O",
                    " O       O   O",
                    " O       O   O",
                    "OOOO  O    O O",
                    "    O OOOOOO O",
                    " O  O        O",
                    "OOOOOOOO A OOO"
                                };
    int r,c;
    B[y][x]='A';
    for(r=0;r<11;r++)                                    //This prints the map after adding 'A' according to the coords it received
    {
        for(c=0;c<14;c++)
        {
            printf("%c",B[r][c]);
        }
        printf("\n");
    }

    if(nm == 0)
    {
    text("\nThis is a small maze game where you can use\nwasd keys to guide 'A' from 'B' to 'A'");
    nm = 1;
    }
    // printf("%d, %d",x,y);                               //prints live coords
}




int wallcord(int n,int xory)
{
    int wallcordstorage[300][2],wcsI=0;                  //declaration and definition of the map
    char B[100][100]={
                    "    B     O  O",
                    " OOOOOO   OO O",
                    "   O   OOO  OO",
                    "             O",
                    " OOOOO  OOOO O",
                    " O       O   O",
                    " O       O   O",
                    "OOOO  O    O O",
                    "    O OOOOOO O",
                    " O  O        O",
                    "OOOOOOOO A OOO"
                                };
     for(sr=0;sr<11;sr++)                                //This finds coords of + characters and stores them in wallcordstorage
    {
        for(sc=0;sc<14;sc++)
        {
            if(B[sr][sc]=='O')
            {
                wallcordstorage[wcsI][0] = sr;
                wallcordstorage[wcsI][1] = sc;
                wcsI++;
            }
        }
    }



    return wallcordstorage[n][xory];
}

int totnofplus(void)                            //entire purpose is to find the number of pluses and send it back to cord
{
    int wallcordstorage[300][2],wcsI=0;
     char B[100][100]={
                    "    B     O  O",
                    " OOOOOO   OO O",
                    "   O   OOO  OO",
                    "             O",
                    " OOOOO  OOOO O",
                    " O       O   O",
                    " O       O   O",
                    "OOOO  O    O O",
                    "    O OOOOOO O",
                    " O  O        O",
                    "OOOOOOOO A OOO"
                                };


     for(sr=0;sr<11;sr++)
    {
        for(sc=0;sc<14;sc++)
        {
            if(B[sr][sc]=='O')
            {
                wallcordstorage[wcsI][0] = sr;
                wallcordstorage[wcsI][1] = sc;
                wcsI++;
            }
        }
    }

    return wcsI;
}

/*

 char B[100][100]={
                    "    B     O  O",
                    " OOOOOO   OO O",
                    "   O   OOO  OO",
                    "             O",
                    " OOOOO  OOOO O",
                    " O       O   O",
                    " O       O   O",
                    "OOOO  O    O O",
                    "    O OOOOOO O",
                    " O  O        O",
                    "OOOOOOOO A OOO"
                                };

*/

void timer(void)
{
    long int X=0;
    while(X<10000000)
    {
        X = X + 1;
    }

}

void text(char input[])
{
    int i=0;
    while(input[i]!= '\0')
    {
        printf("%c",input[i]);
        i++;
        timer();
    }
    timer();
    timer();
}

/*

    "OO    OO    OOOO     OO    OO",
    " OO  OO   OOO  OOO   OO    OO",
    "  OOOO    OO    OO   OO    OO",
    "   OO     OO    OO   OO    OO",
    "   OO     OOO  OOO   OO    OO",
    "   OO       OOOO       OOOO  "
*/

/*
       OOOO
     OOO  OOO
     OO    OO
     OO    OO
     OOO  OOO
       OOOO
*/






/*
    " O              O     OOOOO     OO    OO   OO  OO",
    " OO            OO   OOO   OOO   OOO   OO   OO  OO",
    "  OO          OO    OO     OO   OO O  OO   OO  OO",
    "   OO   OO   OO     OO     OO   OO  O OO   OO  OO",
    "    OO O  O OO      OOO   OOO   OO   OOO         ",
    "     OO    OO         OOOOO     OO    OO   OO  OO"
*/
void victory(void)
{
    char victorycard[100][100]={
                     "OO    OO    OOOO     OO    OO                    ",
                     " OO  OO   OOO  OOO   OO    OO                    ",
                     "  OOOO    OO    OO   OO    OO                    ",
                     "   OO     OO    OO   OO    OO                    ",
                     "   OO     OOO  OOO   OO    OO                    ",
                     "   OO       OOOO       OOOO                      ",
                     "                                                 ",
                     " O              O     OOOOO     OO    OO   ||  ||",
                     " OO            OO   OOO   OOO   OOO   OO   ||  ||",
                     "  OO          OO    OO     OO   OO O  OO   ||  ||",
                     "   OO   OO   OO     OO     OO   OO  O OO   ||  ||",
                     "    OO O  O OO      OOO   OOO   OO   OOO         ",
                     "     OO    OO         OOOOO     OO    OO   OO  OO",
                     "                                                 "
                    };



    int r,c;

    for(r=0;r<13;r++)                                    //Prints victory card
    {
        for(c=0;c<49;c++)
        {
            printf("%c",victorycard[r][c]);
        }
        printf("\n");
        timer();
    }
}
