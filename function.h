//
// Created by surow on 21/02/2023.
//

#ifndef INC_000000001_FUNCTION_H
#define INC_000000001_FUNCTION_H


#include "header.h"
#include "menuFun.h"
//structy
typedef struct str
{
    int length;
    char array [64];
} string;

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
    int count_pow = count;
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





#endif //INC_000000001_FUNCTION_H
