#pragma once
#include <vector>
#include "Team.h"
#include <iostream>
#include "User.h"
using namespace std;

class Admin : public User
{

public:
	Admin(string, string);
	void addTeam(Team);
	void removeTeam(Team);
	void updateTeam(Team);
	vector<Team> getTeams();
	void print();
private:
	vector<Team>teams;


};

