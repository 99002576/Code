#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include"tic.h"
struct myDataType{
    int b;
    char charc;
}inputValue();
int check2(char sym[9],char charc,int count){
    int a;
    for(a = 0;a<=6; a+=3)
        if(sym[a] == charc && sym[a+1]==charc&&sym[a+2]==charc){
            printf("the Winner is : %c",charc);return 1;
        }
    for(a = 0;a<3; a++)//it's for column
        if(sym[a]==charc && sym[a+3]==charc&&sym[a+6]==charc){
            printf("the Winner is : %c",charc);return 1;
        }
    if(sym[0]==charc && sym[4]==charc&&sym[8]==charc){
            printf("the Winner is : %c",charc);return 1;
        }
    else if(sym[2]==charc && sym[4]==charc && sym[6]==charc){
            printf("the Winner is : %c",charc);return 1;
        }
    else if(count==8){
        printf("the Game is DRAW");
        return 1;
    }else return 0;
}
void run();
int check(char sym[9],char ch,int count);
struct myDataType inputValue(char sym[9],int count);
void Display(char sym[9]);


//My contribution
int check1(char sym[9],char ch,int count){
    int a;
    for(a = 0;a<=6; a+=3)//it's for row
        if(sym[a] == ch && sym[a+1]==ch&&sym[a+2]==ch){
            printf("the Winner is : %c",ch);return 1;
        }
    for(a = 0;a<3; a++)//it's for column
        if(sym[a]==ch && sym[a+3]==ch&&sym[a+6]==ch){
            printf("the Winner is : %c",ch);return 1;
        }
    if(sym[0]==ch && sym[4]==ch&&sym[8]==ch){
            printf("the Winner is : %c",ch);return 1;
        }
    else if(sym[2]==ch && sym[4]==ch && sym[6]==ch){
            printf("the Winner is : %c",ch);return 1;
        }
    else if(count==8){
        printf("the Game is DRAW");
        return 1;
    }else return 0;
}

void run(){
    int count = 0;
    struct myDataType info;
    char symbol[9] = {'1','2','3','4','5','6','7','8','9'};
    Disp(symbol);
    again:
    info = inputValue(symbol,count);
    symbol[info.b] = info.charc;
    system("cls");
    Disp(symbol);
    if(check(symbol,info.charc,count)==1);
    else{
        count++;
        goto again;
    }
}
void main(){
    char reStart;
    again:
	run();
	printf("\nTo Play another match please Press 1: \nElse Any:");
	scanf("%s",&reStart);
	if(reStart == '1')
        {
            system("cls");
            goto again;
        }
    else
        exit(0);
}
int check(char sym[9],char ch,int count){
    int i;
    for(i = 0;i<=6; i+=3)//it's for row
        if(sym[i] == ch && sym[i+1]==ch&&sym[i+2]==ch){
            printf("the Winner is : %c",ch);return 1;
        }
    for(i = 0;i<3; i++)//it's for column
        if(sym[i]==ch && sym[i+3]==ch&&sym[i+6]==ch){
            printf("the Winner is : %c",ch);return 1;
        }
    if(sym[0]==ch && sym[4]==ch&&sym[8]==ch){
            printf("the Winner is : %c",ch);return 1;
        }
    else if(sym[2]==ch && sym[4]==ch && sym[6]==ch){
            printf("the Winner is : %c",ch);return 1;
        }
    else if(count==8){
        printf("the Game is DRAW");
        return 1;
    }else return 0;
}
struct myDataType inputValue(char sym[9],int count){
    char value;
    int i;
    struct myDataType info;
    inputAgain:
    if(count%2 == 0){
        printf("\nEnter Your Choice X:");
    }else{
        printf("\nEnter Your Choice O:");
    }
    scanf("%s",&value);
    for(i=0;i<9;i++){

        if(value == sym[i]){
            info.b = i;
            if(count%2 == 0)
                info.charc = 'X';
            else
                info.charc = 'O';
            break;
        }else{
            info.b = -1;
            info.charc = ' ';
        }
    }
    if(info.b == -1){
        printf("\nInput is not Valid");
        goto inputAgain;
    }
    return info;
}
//My contribution
int checks1(char sym[9],char ch,int count){
    int i;
    for(i = 0;i<=6; i+=3)//it's for row
        if(sym[i] == ch && sym[i+1]==ch&&sym[i+2]==ch){
            printf("the Winner is : %c",ch);return 1;
        }
    for(i = 0;i<3; i++)//it's for column
        if(sym[i]==ch && sym[i+3]==ch&&sym[i+6]==ch){
            printf("the Winner is : %c",ch);return 1;
        }
    if(sym[0]==ch && sym[4]==ch&&sym[8]==ch){
            printf("the Winner is : %c",ch);return 1;
        }
    else if(sym[2]==ch && sym[4]==ch && sym[6]==ch){
            printf("the Winner is : %c",ch);return 1;
        }
    else if(count==8){
        printf("the Game is DRAW");
        return 1;
    }else return 0;
}
int checks3(char sym[9],char ch,int count){
    int i;
    for(i = 0;i<=6; i+=3)//it's for row
        if(sym[i] == ch && sym[i+1]==ch&&sym[i+2]==ch){
            printf("the Winner is : %c",ch);return 1;
        }
    for(i = 0;i<3; i++)//it's for column
        if(sym[i]==ch && sym[i+3]==ch&&sym[i+6]==ch){
            printf("the Winner is : %c",ch);return 1;
        }
    if(sym[0]==ch && sym[4]==ch&&sym[8]==ch){
            printf("the Winner is : %c",ch);return 1;
        }
    else if(sym[2]==ch && sym[4]==ch && sym[6]==ch){
            printf("the Winner is : %c",ch);return 1;
        }
    else if(count==8){
        printf("the Game is DRAW");
        return 1;
    }else return 0;
}
struct myDataType inputValues1(char sym[9],int count){
    char value;
    int i;
    struct myDataType info;
    inputAgain:
    if(count%2 == 0){
        printf("\nEnter Your Choice X:");
    }else{
        printf("\nEnter Your Choice O:");
    }
    scanf("%s",&value);
    for(i=0;i<9;i++){

        if(value == sym[i]){
            info.b = i;
            if(count%2 == 0)
                info.charc = 'X';
            else
                info.charc = 'O';
            break;
        }else{
            info.b = -1;
            info.charc = ' ';
        }
    }
    if(info.b == -1){
        printf("\nInput is not Valid");
        goto inputAgain;
    }
    return info;
}struct myDataType inputValues2(char sym[9],int count){
    char value;
    int i;
    struct myDataType info;
    inputAgain:
    if(count%2 == 0){
        printf("\nEnter Your Choice X:");
    }else{
        printf("\nEnter Your Choice O:");
    }
    scanf("%s",&value);
    for(i=0;i<9;i++){

        if(value == sym[i]){
            info.b = i;
            if(count%2 == 0)
                info.charc = 'X';
            else
                info.charc = 'O';
            break;
        }else{
            info.b = -1;
            info.charc = ' ';
        }
    }
    if(info.b == -1){
        printf("\nInput is not Valid");
        goto inputAgain;
    }
    return info;
}
void run1(){
    int count = 0;
    struct myDataType info;
    char symbol[9] = {'1','2','3','4','5','6','7','8','9'};
    Disp(symbol);
    again:
    info = inputValue(symbol,count);
    symbol[info.b] = info.charc;
    system("cls");
    Disp(symbol);
    if(check(symbol,info.charc,count)==1);
    else{
        count++;
        goto again;
    }
}

void Disp(char symbol[9]){
	printf("\t\t\t\tT i c	t a c	t o e");
	printf("\nPlayers 1 Symbol: X");
	printf("\nPlayers 2 Symbol: O");
	printf("\n\t\t\t       |       |       ");
	printf("\n\t\t\t   %c   |   %c   |   %c   ",symbol[0],symbol[1],symbol[2]);
	printf("\n\t\t\t-------|-------|-------");
	printf("\n\t\t\t   %c   |   %c   |   %c   ",symbol[3],symbol[4],symbol[5]);
	printf("\n\t\t\t-------|-------|-------");
	printf("\n\t\t\t   %c   |   %c   |   %c   ",symbol[6],symbol[7],symbol[8]);
	printf("\n\t\t\t       |       |       ");
}
