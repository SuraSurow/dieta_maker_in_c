//
// Created by surow on 21/02/2023.
//
#include "header.h"
#include "function.h"
#include "menuFun.h"


char typeMenu='s';

/* type menu parametr:
 * s = start
 * d = diet
 * m = meal


*/

int main ()
{
    printf("Welcome to dieta maker (Witaj w Dieta Makerze)\n");
    getPressEnter();

    while(1)
    {
        string input = {32};
        string* ptr = &input;
        get_input( ptr );
        int index_number= isolate_int(ptr);
        char* typeMenu_ptr=&typeMenu;
        getMenu(typeMenu_ptr);

    }
    return 0;
}
