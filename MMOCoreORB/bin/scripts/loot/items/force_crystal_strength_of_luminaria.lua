force_crystal_strength_of_luminaria = {
	minimumLevel = 0,
	maximumLevel = -1,
	customObjectName = "Strength of Luminaria",
	directObjectTemplate = "object/tangible/component/weapon/lightsaber/lightsaber_module_force_crystal.iff",
	craftingValues = {
		{"mindamage",54,55,0},
		{"maxdamage",84,85,0},
		{"attackspeed",1,-1,5},
		{"woundchance",4,8,5},
		{"hitpoints",850,1700,0},
		{"attackhealthcost",0,5,0},
		{"attackactioncost",0,5,0},
		{"attackmindcost",0,5,0},
		{"forcecost",0,4,0},
		{"color",22,22,0},
		{"quality",7,7,0},
	},
	customizationStringNames = {},
	customizationValues = {},
	junkDealerTypeNeeded = JUNKGENERIC,
	junkMinValue = 10,
	junkMaxValue = 100,
}

addLootItemTemplate("force_crystal_strength_of_luminaria", force_crystal_strength_of_luminaria)