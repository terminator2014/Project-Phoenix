object_building_player_vipbunker_house = object_building_player_shared_vipbunker_house:new {
	lotSize = 2,
	baseMaintenanceRate = 16,
	allowedZones = {"corellia", "dantooine", "lok", "naboo", "rori", "talus", "tatooine", "yavin4", "dathomir", "kaas", "endor"},
	publicStructure = 0,
	constructionMarker = "object/building/player/construction/construction_player_house_corellia_large_style_01.iff",
	length = 1,
	width = 1,
	skillMods = {
		{"private_medical_rating", 125},
		{"private_buff_mind", 125},
		{"private_med_battle_fatigue", 15},
		{"advanced_assembly", 50},
		{"armor_assembly", 50},
		{"general_assembly", 50},
		{"bio_engineer_assembly", 50},
		{"booster_assembly", 50},
		{"chassis_assembly", 50},
		{"clothing_assembly", 50},
		{"combat_medicine_assembly", 50},
		{"creature_assembly", 50},
		{"domestic_assembly", 50},
		{"droid_assembly", 50},
		{"engine_assembly", 50},
		{"engineering_assembly", 50},
		{"firearm_assembly", 50},
		{"food_assembly", 50},
		{"force_assembly", 50},
		{"grenade_assembly", 50},
		{"instrument_assembly", 50},
		{"jedi_saber_assembly", 50},
		{"medicine_assembly", 50},
		{"melee_assembly", 50},
		{"munition_assembly", 50},
		{"shields_assembly", 50},
		{"spice_assembly", 50},
		{"structure_assembly", 50},
		{"tissue_assembly", 50},
		{"weapon_assembly", 50},
		{"advanced_ship_experimentation", 50},
		{"armor_experimentation", 50},
		{"general_experimentation", 50},
		{"bio_engineer_experimentation", 50},
		{"booster_experimentation", 50},
		{"chassis_experimentation", 50},
		{"clothing_experimentation", 50},
		{"combat_medicine_experimentation", 50},
		{"creature_experimentation", 50},
		{"droid_experimentation", 50},
		{"engine_experimentation", 50},
		{"firearm_experimentation", 50},
		{"food_experimentation", 50},
		{"force_experimentation", 50},
		{"grenade_experimentation", 50},
		{"jedi_saber_experimentation", 50},
		{"medicine_experimentation", 50},
		{"melee_experimentation", 50},
		{"munition_experimentation", 50},
		{"power_systems_experimentation", 50},
		{"shields_experimentation", 50},
		{"spice_experimentation", 50},
		{"structure_experimentation", 50},
		{"tissue_experimentation", 50},
		{"weapon_experimentation", 50},
		{"weapon_systems_experimentation", 50},
		{"armor_complexity", 50},
		{"clothing_complexity", 50},
		{"medicine_complexity", 50},
		{"droid_complexity", 50},
		{"firearm_complexity", 50},
		{"food_complexity", 50},
		{"melee_complexity", 50},
		{"munition_complexity", 50},
		{"structure_complexity", 50},
		{"armor_customization", 50},
		{"artisan_clothing_customization", 50},
		{"clothing_customization", 50},
		{"droid_customization", 50},
		{"armor_repair", 50},
		{"clothing_repair", 50},
		{"force_repair_bonus", 50},
		{"crafting_repair", 50},
		{"weapon_repair", 50},
		{"combat_medic_effectiveness", 50},
		{"general_damag", 50},
		{"shop_sign", 50},
		{"sales", 50},
		{"structure_maintenance_mod", 50}
	},
	childObjects = {
		{templateFile = "object/tangible/terminal/terminal_player_structure.iff", x = -2.88153, z = 0.469495, y = 3.30171, ow = 1, ox = 0, oz = 0, oy = 0, cellid = 1, containmentType = -1},
		{templateFile = "object/tangible/sign/player/house_address.iff", x = -2.90, z = 1.31, y = 0.35, ox = 0, oy = 0, oz = 0, ow = 1, cellid = -1, containmentType = -1}
	},
	shopSigns = {
			{templateFile = "object/tangible/sign/player/house_address.iff", x = -2.90, z = 1.31, y = 0.35, ox = 0, oy = 0, oz = 0, ow = 1, cellid = -1, containmentType = -1, requiredSkill = "", suiItem = "@player_structure:house_address"},
			{templateFile = "object/tangible/sign/player/shop_sign_s01.iff", x = 0, z = 5.18, y = 0.80, ox = 0, oy = 0, oz = 0, ow = 1, cellid = -1, containmentType = -1, requiredSkill = "crafting_merchant_management_01", suiItem = "@player_structure:shop_sign1"},
			{templateFile = "object/tangible/sign/player/shop_sign_s02.iff", x = 0, z = 5.18, y = 0.80, ox = 0, oy = 0, oz = 0, ow = 1, cellid = -1, containmentType = -1, requiredSkill = "crafting_merchant_management_02", suiItem = "@player_structure:shop_sign2"},
			{templateFile = "object/tangible/sign/player/shop_sign_s03.iff", x = 0, z = 5.18, y = 0.80, ox = 0, oy = 0, oz = 0, ow = 1, cellid = -1, containmentType = -1, requiredSkill = "crafting_merchant_management_03", suiItem = "@player_structure:shop_sign3"},
			{templateFile = "object/tangible/sign/player/shop_sign_s04.iff", x = 0, z = 5.18, y = 0.80, ox = 0, oy = 0, oz = 0, ow = 1, cellid = -1, containmentType = -1, requiredSkill = "crafting_merchant_management_04", suiItem = "@player_structure:shop_sign4"}	
	}
}

ObjectTemplates:addTemplate(object_building_player_vipbunker_house, "object/building/player/vipbunker_house.iff")
