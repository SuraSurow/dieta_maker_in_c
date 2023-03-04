//
// Created by surow on 21/02/2023.
//

#ifndef INC_000000001_FUNCTION_H
#define INC_000000001_FUNCTION_H


#include "header.h"
#include "function.h"
//structy
typedef struct str
{
    int length;
    char array [64];
} string;

//-----------------------------------------------
void getPressEnter();
void getMenu(char* typeMenu);
void get_input( string* text );
int isolate_int(string* text);
void userMenu(char* typeMenu);
void startMenu(char* typeMenu);
void dietMenu(char* typeMenu);
void mealCalMenu(char* typeMenu);
void getChoiceFromContent(int* index,int count_content,char* typeMenu);
void printContentTab(char cont[][128],int count_content);
void userMenuFun();

//------------------------------------------------

//----------------------------------------------
//----------------getPressEnter---------------------
//----------------------------------------------

void getPressEnter()
{
    printf("Press enter to continue (wcisnij enter by kontynuowac):");
    char ent = 0;
    while (ent != '\r' && ent != '\n') { ent = getchar(); }

}//end

//----------------------------------------------
//----------------getMenu---------------------
//----------------------------------------------


void getMenu(char* typeMenu)
{
    switch(*typeMenu)
    {
        case 'u':
        {
            userMenu(typeMenu);
            break;
        }
        case 's':
        {
            startMenu(typeMenu);

            break;
        }
        case 'd':
        {
            dietMenu(typeMenu);
            break;
        }
        case 'm':
        {
            mealCalMenu(typeMenu);
            break;
        }
        default:
        {
            
        }
    }
}//end

//----------------------------------------------
//----------------get_input---------------------
//----------------------------------------------

void get_input( string* text )
{
    printf("\n(input):");
    char *bufor = (char *)malloc ( sizeof (char) * (*text).length);
    fgets( bufor, (*text).length , stdin);
    for (int i = 0; i < (*text).length; i++)
    {
        (*text).array[i] = bufor[i];
    }
    free(bufor);
}//end


//----------------------------------------------
//----------------isolate_int---------------------
//----------------------------------------------

int isolate_int(string* text)
{
    char* bufor = (char *) malloc (sizeof(char) * (*text).length);
    bufor = (*text).array;
    int index_tab [sizeof(char) * (*text).length];
    int sign=1;
    int count = 0;

    for (int i = 0; i < (*text).length; i++) {
        if(bufor[i]==MINUS)
        {
            const int min_one=-1;
            sign*=min_one;
        }
        if (isdigit(bufor[i]) != 0) {
            index_tab[count] = bufor[i];
            count++;
        }
    }

    int number[count];
    for (int i = 0 ; i<count ; i++) {
        switch ( index_tab[i] ) {
            case ZERO: {
                number[i] = 0;
                break;
            }
            case ONE: {
                number[i] = 1;
                break;
            }
            case TWO: {
                number[i] = 2;
                break;
            }
            case THREE: {
                number[i] = 3;
                break;
            }
            case FOR: {
                number[i] = 4;
                break;
            }
            case FIVE: {
                number[i] = 5;
                break;
            }
            case SIX: {
                number[i] = 6;
                break;
            }
            case SEVEN: {
                number[i] = 7;
                break;
            }
            case EIGHT: {
                number[i] = 8;
                break;
            }
            case NINE: {
                number[i] = 9;
                break;
            }
            default: {
                break;
            }
        }
    }
    const int teen = 10;
    int multiplication = 1;
    for (int i = (count-1) ; i>-1 ; i--)
    {
        number[i] *= multiplication;
        multiplication *= teen;
    }
    int result = 0;
    for(int i=0 ; i<count ; i++){
        result += number[i];
    }

    result*=sign;
    return result;
}
//end


//MENU

//----------------------------------------------
//----------------userMenu----------------------
//----------------------------------------------


void userMenu(char* typeMenu) {
    printf("UserMenu (menu uzytkownika)\n");
    char content[][128]={
            {"0.exit (wyjscie)"},
            {"1.see user data (pokaz dane uzytkownika)"},
            {"2.edit user data (edycja danych uzytkownika)"},
            {"3.choice user (wybor uzytkownika)"},
            {"4.add user (dodaj uzytkownika)"},
            {"5.delete user (usun uzytkownika)"},
    };
    int count_content=6;
    printContentTab(content,count_content);
    string input = {32};
    string* ptr = &input;
    get_input( ptr );
    int index_number= isolate_int(ptr);
    int* ptr_index_number= &index_number;
    getChoiceFromContent(ptr_index_number,count_content,typeMenu);
}//end

//--------------------------------------------------
//--------------------------------------------------
//--------------------------------------------------
void userMenuFun()
{

}

//----------------------------------------------
//----------------startMenu---------------------
//----------------------------------------------

void startMenu(char* typeMenu)
{

}

//----------------------------------------------
//----------------dietMenu----------------------
//----------------------------------------------

void dietMenu(char* typeMenu)
{
    printf("DietMenu (Menu Diet)\n"
           "0.exit (wyjscie)\n"
           "1.diet calculator's (kalkulatory dietetyczne)\n"
           "2.meal calculator (kalkulator posilku)\n");

}//end

//----------------------------------------------
//----------------mealCalcMenu------------------
//----------------------------------------------

void mealCalMenu(char* typeMenu)
{
    printf("Meal Calculator (kalkulator posilkow)\n"
           "0.exit (wyjscie)\n"
           "1.List of ready meal (Lista Posilkow)\n"
           "2.Add ready meal (dodaj gotowy posilek)\n"
           "3.Delete ready meal (usun gotowy posilek)\n"
           "4.Create meal from Food Products (tworzenie posilku z gotowych produktow spozywczych)\n ");

}//end

//--------------------------------------------------
void getChoiceFromContent(int* index,int count_content,char* typeMenu)
{
    switch(*typeMenu)
    {
        case 'u':
        {
            if(((*index)>=0)||((*index)==count_content))
            {
                switch(*index)
                {
                    case 0:{
                        *typeMenu='s';
                        break;
                    }
                    case 1:
                }
            }
            break;
        }
        case 's':
        {


            break;
        }
        case 'd':
        {

            break;
        }
        case 'm':
        {

            break;
        }
        default:
        {

        }
    }
}
//--------------------------------------------------
//--------------------------------------------------
//--------------------------------------------------
void printContentTab(char cont[][128],int count_content)
{
    for(int i=0;i<count_content;i++)
    {
    printf("%s\n",cont[i]);
    }
}
//--------------------------------------------------
//--------------------------------------------------
//--------------------------------------------------




#endif //INC_000000001_FUNCTION_H

/*printf("UserMenu (menu uzytkownika)\n"
           "0.exit (wyjscie)\n"
           "1.see user data (pokaz dane uzytkownika)\n"
           "2.edit user data (edycja danych uzytkownika)\n"
           "3.choice user (wybor uzytkownika)"
           "4.add user (dodaj uzytkownika)"
           "5.delete user (usun uzytkownika)");
      */
