#include "GI_MainC.h"

UGI_MainC::UGI_MainC()
{
	CurrentPlayerCount = 0;
}

bool UGI_MainC::SetCurrentPlayerCount(int PlayerCount)
{
	if (PlayerCount > 0)
	{
		CurrentPlayerCount = PlayerCount;
		return true;
	}
	return false;
}
