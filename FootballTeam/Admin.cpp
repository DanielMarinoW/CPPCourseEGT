#include "Admin.h"

Admin::Admin(string name, string password) : User(name,password)
{
}

void Admin::addTeam(Team t)
{
	this->teams.push_back(t);
}

vector<Team>Admin::getTeams() {
	return this->teams = teams;
}


void Admin::removeTeam(Team t)
{
	string teamName = t.getName();

	for (int i = 0; i < teams.size(); i++) {
		if (teams.at(i).getName() == teamName) {
			teams.erase(teams.begin() + i);
			break;
		}
	}
}

void Admin::updateTeam(Team t)
{
	string teamName = t.getName();

	for (int i = 0; i < teams.size(); i++) {
		if (teams.at(i).getName() == teamName) {
			teams.at(i) = t;
			break;
		}
	}
}
