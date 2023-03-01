//
// Created by surow on 01/03/2023.
//

#ifndef INC_000000001_MENUFUN_H
#define INC_000000001_MENUFUN_H

#include "header.h"
#include "function.h"

//----------------------------------------------
//----------------userMenu----------------------
//----------------------------------------------


void userMenu(char* typeMenu) {
    printf("UserMenu (menu uzytkownika)\n"
           "0.exit (wyjscie)\n"
           "1.see user data (pokaz dane uzytkownika)\n"
           "2.edit user data (edycja danych uzytkownika)\n"
           "3.choice user (wybor uzytkownika)"
           "4.add user (dodaj uzytkownika)"
           "5.delete user (usun uzytkownika)");

}//end

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





#endif //INC_000000001_MENUFUN_H
