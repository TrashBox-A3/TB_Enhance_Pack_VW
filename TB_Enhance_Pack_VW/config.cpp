#include "BIS_AddonInfo.hpp"
class CfgPatches 
{
	class Rodeo_star42 
	{
		units[] = {};
		requiredVersion = 1.2.1;
		requiredAddons[] = {"Extended_EventHandlers"};	
		author[]= {"Rodeostar42"}; 		
	};

	
};



class CfgFunctions
{
	class Rodeo
	{
		class Rodeo_star42
		{
			class Init
			{
				file = "\TB_Enhance_Pack_VW\initPlayerLocal.sqf";
				preInit = 1;
			};
		};

	};
};
