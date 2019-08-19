#ifndef MENU_H
#define MENU_H

class Menu
{
private:
    int choiceMenuPoint;

    void runWork();
    void enterVariant();
    void mainMenu();
    void backToMenu();

public:
    Menu();

    int variant;

    static void startProgram();
};

#endif // MENU_H
