# 1 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"

# 2 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
FortreeCity_PokemonCenter_2F_MapScripts::
# 3 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CableClub_OnFrame
# 4 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
# 5 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 6 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
# 7 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	.byte 0
# 8 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"

# 9 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
@ The below 3 are unused and leftover from RS
# 10 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
FortreeCity_PokemonCenter_2F_EventScript_Colosseum::
# 11 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_Colosseum
# 12 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	end
# 13 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"

# 14 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
FortreeCity_PokemonCenter_2F_EventScript_TradeCenter::
# 15 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_TradeCenter
# 16 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	end
# 17 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"

# 18 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
FortreeCity_PokemonCenter_2F_EventScript_RecordCorner::
# 19 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_RecordCorner
# 20 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	end

Custom_Givemon_Fortree::
# 27 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	lockall
# 28 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	showmonpic SPECIES_VULPIX_ALOLAN, 10, 3
# 29 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Fortree_Text_0, MSGBOX_YESNO
# 30 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Custom_Givemon_Fortree_2
# 52 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	hidemonpic
# 53 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Fortree_NotChosen
Custom_Givemon_Fortree_1:
# 55 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	waitmessage
# 56 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	releaseall
	end

Custom_Givemon_Fortree_2:
# 31 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	givemon SPECIES_VULPIX_ALOLAN, 10, ITEM_LUXURY_BALL
# 32 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Custom_Givemon_Fortree_5
# 39 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Custom_Givemon_Fortree_6
# 47 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	hidemonpic
# 48 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Fortree_Text_3
	goto Custom_Givemon_Fortree_1

Custom_Givemon_Fortree_5:
# 33 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 34 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Fortree_Text_1
# 35 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	removeobject 5
# 36 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 37 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	call FortreeNicknamePartyMon
	goto Custom_Givemon_Fortree_1

Custom_Givemon_Fortree_6:
# 40 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 41 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Fortree_Text_2
# 42 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	removeobject 5
# 43 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 44 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	call FortreeNicknameBoxMon
	goto Custom_Givemon_Fortree_1


FortreeNicknamePartyMon::
# 63 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	msgbox FortreeNicknamePartyMon_Text_0, MSGBOX_YESNO
# 64 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	hidemonpic
# 65 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FortreeNicknamePartyMon_1
	return

FortreeNicknamePartyMon_1:
# 66 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 67 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


FortreeNicknameBoxMon::
# 75 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	msgbox FortreeNicknamePartyMon_Text_0, MSGBOX_YESNO
# 76 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	hidemonpic
# 77 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FortreeNicknameBoxMon_2
FortreeNicknameBoxMon_1:
# 80 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

FortreeNicknameBoxMon_2:
# 78 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto FortreeNicknameBoxMon_1


Custom_Givemon_Fortree_Text_0:
# 29 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	.string "Do you want this Vulpix?$"

Custom_Givemon_Fortree_Text_1:
# 34 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	.string "Here you go!$"

Custom_Givemon_Fortree_Text_2:
# 41 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	.string "Vulpix was placed in your PC.$"

Custom_Givemon_Fortree_Text_3:
# 48 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	.string "You need to release something to get this.$"

FortreeNicknamePartyMon_Text_0:
# 63 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	.string "Give it a nickname?$"

Custom_Givemon_Fortree_NotChosen::
# 84 "data/maps/FortreeCity_PokemonCenter_2F/scripts.pory"
	.string "Guess I'll just have to use it for spells...$"
