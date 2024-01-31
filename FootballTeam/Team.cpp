
#include "Team.h"

Team::Team(string name, string city, string coach, int gamePlays, int wins, int loses, int ranking)
{
    setName(name);
    setCiy(city);
    setCoach(coach);
    setGamePlays(gamePlays);
    setWins(wins);
    setLoses(loses);
   // setPoint(point);
    setRanking(ranking);
    this->point = 0;

}

void Team::printTeam()
{
    cout << "Team name is: " << name << endl << "Team is from: " << city << endl <<
        "Team coach is: " << coach << endl << "Team game play is " << gamePlays << endl <<
        "Tem have: " << wins << " wins " << endl << "Team have " << loses << " loses" << endl
        << "Team rnking is " << ranking << endl << "Point is: " << getPoint() << endl;
    cout << endl;
}

void Team::setName(string name)
{
    this->name = name;
}

string Team::getName()
{
    return this->name;
}

void Team::setCiy(string city)
{
    this->city = city;
}

string Team::getCity()
{
    return this->city;
}

void Team::setCoach(string coach)
{
    this->coach = coach;
}

string Team::getCoach()
{
    return this->coach;
}

void Team::setGamePlays(int gamePlays)
{
    this->gamePlays = gamePlays;
}

int Team::getGamePlays()
{
    return this->gamePlays;
}

void Team::setWins(int wins)
{
    this->wins = wins;
}

int Team::getWins()
{
    return this->wins;
}

void Team::setLoses(int loses)
{
    this->loses = loses;
}

int Team::getLoses()
{
    return this->loses;
}

void Team::setPoint(int point)
{
    this->point = point;
}

int Team::getPoint()
{
    return  this->point;
}

void Team::setRanking(int ranking)
{
    this->ranking = ranking;
}

int Team::getRanking()
{
    return this->ranking;
}

void Team::uppdatePoints(int newPoints)
{
    this->point = this->point + newPoints;
}
