#include <string>
#include <iostream>
#include "Team.h"
#include "User.h"
#include "Admin.h"
using namespace std;


int main()
{
    Team team("Cherno more", "Varna", "guardiola", 8, 4, 4, 3);
    Team team1("Man City ", "Manchester", "Guardiola ", 7 , 5, 2, 1);
    Team team2("Real Madrid", "Madrit ", "Guardiola ", 7, 5, 2, 1);
    Team team3("Levski", "Sofia", "Nikolai Kostov", 20, 0, 20, 16);
    Team team4("CSKA-Sofia", "Sofia", "Nestor El Maestro ", 20, 19, 1, 1);
    Team team5("Ludogorec", "Ragrad", "Georgi Demerdzhiev", 20, 19, 1, 2);
    Team team6("Botev Plovdi", "Plovdiv", "Stanislav Genchev", 20, 14, 6, 5);
    Team team7("Lokomotiv Plovdi", "Plovdiv", "Aleksandar Tomash", 20, 12, 8, 7);
    //cout << "point is: " << manCity.getPoint() << endl;
   
   

    Admin a1("Daniel", "asdasd");
   // cout << a1.getName().size() << endl;
    a1.addTeam(team);
    a1.addTeam(team1);
    a1.addTeam(team2);
    a1.addTeam(team3);
    a1.addTeam(team4);
    a1.addTeam(team5);
    a1.addTeam(team6);
    a1.addTeam(team7);
    //a1.removeTeam(team1);

   cout << a1.getTeams().size() << endl;

    for (Team t : a1.getTeams()) {
        cout << t.getName() << " " << endl;
    }
    a1.updateTeam(team2);

  //  User user1("Daniel", "1as123");
    //cout << user1.getPassword() << endl;
    //user1.printUser();

    cout << endl;
    cout << endl;

    team.printTeam();
    team1.printTeam();
    team2.printTeam();
    team3.printTeam();
    team4.printTeam();
    team5.printTeam();
    team6.printTeam();
    team7.printTeam();

}


