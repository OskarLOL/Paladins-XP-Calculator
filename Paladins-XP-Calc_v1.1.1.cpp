// C++ Code by IzyGam1ng: https://github.com/IzyGam1ng
// edited by da_ossi

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <Windows.h>

int first(int startxp, int endlvl, int leftxp)
{
    int currentlvl = 0, needxp = 0;
    std::cout << "Please enter your current level: ";
    std::cin >> currentlvl;

    for (int i = currentlvl; i <= endlvl; i++)
        needxp = startxp * i + needxp;

    system("cls");

    std::cout << "You need: " << needxp - leftxp << "XP.\n";
    return needxp;
}

void second(int startxp, int endlvl, int leftxp)
{
    int needxp = 0, avrgxp = 0;
    float avrgrlen = 0, rtaken = 0, ttaken = 0;

    char choice = ' ';
    std::cout << "Do you want to choose a default game length yourself?\n(Default is 17.5mins)\n(N)o or (Y)es?: ";
    std::cin >> choice;

    if (choice == 'Y' || choice == 'y')
    {
        std::cout << "Please enter your average round length: ";
        std::cin >> avrgrlen;
    }
    else if (choice == 'N' || choice == 'n')
    {
        std::cout << "Ok";
        avrgrlen = 17.5;
    }
    else
    {
        std::cout << "Nah man";
        system("exit");
    }

    char choice2 = ' ';
    std::cout << "Do you want to choose the default xp per round yourself?\n(Default is 85.000)\n(N)o or (Y)es?: ";
    std::cin >> choice2;

    if (choice2 == 'Y' || choice2 == 'y')
    {
        std::cout << "Please enter the average XP you get per round: ";
        std::cin >> avrgxp;
    }
    else if (choice2 == 'N' || choice2 == 'n')
    {
        std::cout << "Ok! Let's move on\n";
        avrgxp = 85000;
    }
    else
    {
        std::cout << "Nah man only Y or N, try again";
        system("exit");
    }

    needxp = first(startxp, endlvl, 0) - leftxp;

    rtaken = needxp / avrgxp;
    int rneeded = (int)rtaken + 1;
    ttaken = avrgrlen * rneeded;

    system("cls");

    std::cout << "You need " << rneeded << " rounds which takes about " << (int)ttaken / 60 << " hours and " << (ttaken / 60 - (int)ttaken / 60) * 60 << " minutes.\nIn this time you have gained " << needxp << "XP.\n";
    return;
}

int main()
{
    int usage = 0, startxp = 0, endlvl = 0, leftxp = 0;
    char defxp = ' ';

    std::cout << "###_MENU_###:\n"
        << "1) Determine the ammount of xp needet for a specific lvl\n"
        << "2) The xp and the rounds you need to get from a starting lvl to another lvl\n"
        << "3) You manualy give the calculator your stating xp and tell him the end lvl\n"
        << "###_INPUT_### (1,2,3): ";
    std::cin >> usage;

    std::cout << "\n__Program_Start__\n";

    // if (usage == 4)
    // {
    // std::cout << "You wanna do it yourself? OK HTEN DO IT!!!1!";

    // int calcs = 0;

    // std::cout << "Ok how much Calculators do you need?: ";
    // std::cin >> calcs;
    // (calcs + 1) * 100;

    // for (int o = 0; o <= calcs; o++) {
    //     system("calc");
    // }

    // std::cout << "Do u have enought?"
    //     << "Because yeah goodnight!";
    // system("pause");
    // system("shutdown -s -t 0");
    // }

    std::cout << ("Do you want to choose the Xp needet for the first lvl yourself?\n(Default is 20.000)\n(Y)es or (N)o: ");
    std::cin >> defxp;
    if (defxp == 'Y' || defxp == 'y')
    {
        std::cout << "Please enter the XP needed for the first level: ";
        std::cin >> startxp;
    }
    else if (defxp == 'N' || defxp == 'n')
    {
        std::cout << "Ok! Lets move on\n";
        startxp = 20000;
    }
    else
    {
        std::cout << "Nah man only Y or N, try again";
        system("exit");
    }

    std::cout << "Please enter the the level you desire: ";
    std::cin >> endlvl;

    if (usage == 1)
        first(startxp, endlvl, 0);
    else if (usage == 2)
        second(startxp, endlvl, 0);
    else if (usage == 3)
    {
        std::cout << "Please enter the exact XP you have(just the xp in your current lvl): ";
        std::cin >> leftxp;
        second(startxp, endlvl, leftxp);
    }
    else
    {
        std::cout << "Nah man only Y or N, try again";
        system("exit");
    }

    system("Pause");
}