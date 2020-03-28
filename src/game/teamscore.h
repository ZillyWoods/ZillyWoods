#ifndef GAME_TEAMSCORE_H
#define GAME_TEAMSCORE_H

#include <engine/shared/protocol.h>

enum
{
	TEAM_FLOCK = 0, TEAM_SUPER = MAX_CLIENTS
};

class CTeamsCore
{
	int m_Team[MAX_CLIENTS];
	bool m_IsSolo[MAX_CLIENTS];
public:
	CTeamsCore(void);

	bool SameTeam(int ClientID1, int ClientID2);

	bool CanKeepHook(int ClientID1, int ClientID2);
	bool CanCollide(int ClientID1, int ClientID2);

	int Team(int ClientID);
	void Team(int ClientID, int Team);

	void Reset();
	void SetSolo(int ClientID, bool Value)
	{
		m_IsSolo[ClientID] = Value;
	}

	bool GetSolo(int ClientID)
	{
		return m_IsSolo[ClientID];
	}
};

#endif
