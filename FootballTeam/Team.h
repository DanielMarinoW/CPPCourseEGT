#pragma once
#include <string>
#include <iostream>
using namespace std;

class Team
{
public:
	 Team(string name, string city, string coach, int gamePlays,int wins, int loses, int ranking);
	 void printTeam();
	 void setName(string name);
	 string getName();
	 void setCiy(string city);
	 string getCity();
	 void setCoach(string coach);
	 string getCoach();
	 void setGamePlays(int gamePlays);
	 int getGamePlays();
	 void setWins(int wins);
	 int getWins();
	 void setLoses(int loses);
	 int getLoses();
	 void setPoint(int point);
	 int getPoint();
	 void setRanking(int ranking);
	 int getRanking();
	 void uppdatePoints(int);
private:
	string name;
	string city;
	string coach;
	int gamePlays;
	int wins;
	int loses;
	int point;
	int ranking;


};

