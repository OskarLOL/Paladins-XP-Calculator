// C++ Code by IzyGam1ng: https://github.com/IzyGam1ng

#include <iostream>
#include <cstdlib>

int first(int startxp, int endlvl,int leftxp){
    int currentlvl=0, needxp=0;
    std::cout << "Please enter your current level: ";
    std::cin >> currentlvl;

    for(int i = currentlvl; i <= endlvl; i++)
        needxp = startxp * i + needxp;
    std::cout << "You need: " << needxp-leftxp << "XP.";
    return needxp;
}

void second(int startxp, int endlvl, int leftxp){
    int needxp=0;
    float avrgrlen = 0, rtaken=0, ttaken = 0;
    std::cout << "Please enter your average round length: ";
    std::cin >> avrgrlen;
    
    int avrgxp=0;
    std::cout << "Please enter the average XP you get per round: ";
    std::cin >> avrgxp;

    needxp = first(startxp, endlvl, 0)-leftxp;

    rtaken = needxp / avrgxp;
    int rneeded = (int) rtaken + 1;
    ttaken = avrgrlen * rneeded;
    
    std::cout << "You need " << rneeded << " rounds which takes about " << (int) ttaken/60 << " hours and " << (ttaken/60 - (int) ttaken/60) * 60 << " minutes.\n You gained " << needxp << " XP.";
    return;
}

int main(){
    int usage=0, startxp=0, endlvl=0, leftxp = 0;
    
    std::cout << "###_MENU_###:\n"
            << "1) Determine the ammount of xp needet for a specific lvl\n"
            << "2) The xp and the rounds you need to get from a starting lvl to another lvl\n"
            << "3) You manualy give the calculator your stating xp and tell him the end lvl\n"
            << "###_INPUT_### (1,2,3): ";
    std::cin >> usage;

    std::cout << "\nPlease enter the XP needed for the first level (usually 20.000): ";
    std::cin >> startxp;

    std::cout << "Please enter the the level you desire: ";
    std::cin >> endlvl;

    if(usage == 1)
        first(startxp,endlvl,0);
    else if(usage == 2)
        second(startxp,endlvl,0);
    else if(usage == 3){
        std::cout << "Please enter the XP you have leftover: ";
        std::cin >> leftxp;
        second(startxp,endlvl,leftxp);
    }

    system("Pause");

}