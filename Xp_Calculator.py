# Ka python hod mi ongschrian
a = " Rounds"

b = "You need: "

c = "Enter the Level you desire: "

d = "The number you need for the first lvl (usually 20000): "

Fuckupy = "Press Enter to continue..."

# Onfong vu dem Programm i hu koa main() gmocht weil irgendwia de gloabal variablen koan bock kob hobn
print("What do you want to do?\n(1).Determine the ammount of xp needet for a specific lvl\nor\n(2).The xp and the rounds you need to get from a starting lvl to another lvl\nor\n(3).You manualy give the calculator your stating xp and tell him the end lvl \nYou Choose by pressing either (1) for the first or (2) for the second and so on...")
var1 = input("Now choose: ")

multi = float(input(d))

lvl2 = float(input(c))

# So wia ma si denkn ko des is des Programm wenn ma 1 auswölt
def first():

    num2 = 0
    
    lvl = float(input("Enter your Level: "))

    while lvl <= lvl2:
            num2 = ((multi * lvl) + num2)
            lvl = lvl + 1 
    
    print(b + str(num2) + "XP")
    input(Fuckupy)
    exit()


# Des is wia schwa zum erkennan zwoa
def second():

    var2 = input("Do you wanna decide the avarage round length yourself?\n(Y)es\nor\n(N)o\n(Default is 17.5 mins): ")

    if var2 == "Y" or var2 == "y":
        lifetimeloss = float(input("Please put in your length in minutes(You can write a komma with a dott): "))
    elif var2 == "N" or var2 == "n":
        print("Ok lets move on!")
        lifetimeloss = float(17.5)
    else:
        print("Nah man not like that")
        input(Fuckupy)
        exit()

    num2 = 0

    i = 1

    endxp = float(0)

    startxp = float(0)

    lvl = float(input("Enter your Level: "))

    avaragexpperround = float(input("Enter the average number of xp per match: "))

    while i <= lvl2:
        endxp = ((multi * i) + endxp)
        i = i +1
        
    i = 1

    while i <= lvl:
        startxp = ((multi * i) + startxp)
        i = i + 1

    num2 = endxp - startxp

    avaragerounds = num2 / avaragexpperround

    lifetimeloss = (lifetimeloss * avaragerounds) / 60
        
    print(b + str(num2) + "XP")
    print("and " + str(round(avaragerounds, 2)) + a)
    print("You would lose about: " + str(lifetimeloss) + "hours")
    input(Fuckupy)
    exit()

# Und des de 3te
def third():

    var2 = input("Do you wanna decide the avarage round length yourself?\n(Y)es\nor\n(N)o\n(Default is 17.5 mins): ")

    if var2 == "Y" or var2 == "y":
        lifetimeloss = float(input("Please put in your length in minutes(You can write a komma with a dott): "))
    elif var2 == "N" or var2 == "n":
        print("Ok lets move on!")
        lifetimeloss = float(17.5)
    else:
        print("Nah man not like that")
        input(Fuckupy)
        exit()

    num2 = 0

    i = 1

    endxp = float(0)

    startxp = float(0)

    yourxp = float(input("The xp you have right now: "))

    lvl = float(input("And your Level please: "))

    avaragexpperround = float(input("Enter the average number of xp per match: "))
    
    while i <= lvl2:
        endxp = ((multi * i) + endxp)
        i = i + 1 

    i = 0
        
    while i < lvl:
        startxp = ((multi * i) + startxp)
        i = i + 1 

    num2 = (endxp - (yourxp + startxp))

    avaragerounds = num2 / avaragexpperround

    lifetimeloss = (lifetimeloss * avaragerounds) / 60

    print(b + str(num2) + "XP")
    print("and " + str(round(avaragerounds, 2)) + a)
    print("You would lose about: " + str(lifetimeloss) + "hours")
    input(Fuckupy)
    exit()


#  Do schaug i wos jz ausgwöt woadn is
if var1 == "1":

    first()

if var1 == "2":

    second()
elif var1 == "3":

    third()
else:
    
    print("nah man thats no number")
    print("Try again")
    input(Fuckupy)
    exit()

# Do woa fuahea de main wo des erste drinnan woa donn hu i ma docht des is doch vü bessa wenn i do mehrere Funktionen moch 
# jo na eig nid rlly

# def main():


# if __name__ == "__main__":
#     main()
