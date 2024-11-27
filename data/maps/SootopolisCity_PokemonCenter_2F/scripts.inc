# 1 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"

# 2 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
SootopolisCity_PokemonCenter_2F_MapScripts::
# 3 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CableClub_OnFrame
# 4 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
# 5 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 6 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
# 7 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	.byte 0
# 8 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"

# 9 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
@ The below 3 are unused and leftover from RS
# 10 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
SootopolisCity_PokemonCenter_2F_EventScript_Colosseum::
# 11 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_Colosseum
# 12 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	end
# 13 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"

# 14 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
SootopolisCity_PokemonCenter_2F_EventScript_TradeCenter::
# 15 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_TradeCenter
# 16 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	end
# 17 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"

# 18 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
SootopolisCity_PokemonCenter_2F_EventScript_RecordCorner::
# 19 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_RecordCorner
# 20 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	end

Custom_Givemon_Sootpolis::
# 26 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	lockall
# 27 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	showmonpic SPECIES_LATIAS, 10, 3
# 28 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Sootpolis_Text_0, MSGBOX_YESNO
# 29 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Custom_Givemon_Sootpolis_2
# 51 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	hidemonpic
# 52 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Sootpolis_NotChosen
Custom_Givemon_Sootpolis_1:
# 54 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	waitmessage
# 55 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	releaseall
	end

Custom_Givemon_Sootpolis_2:
# 30 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	givemon SPECIES_LATIAS, 10, ITEM_LUXURY_BALL
# 31 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Custom_Givemon_Sootpolis_5
# 38 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Custom_Givemon_Sootpolis_6
# 46 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	hidemonpic
# 47 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Sootpolis_Text_3
	goto Custom_Givemon_Sootpolis_1

Custom_Givemon_Sootpolis_5:
# 32 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 33 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Sootpolis_Text_1
# 34 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	removeobject 5
# 35 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 36 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	call SootpolisNicknamePartyMon
	goto Custom_Givemon_Sootpolis_1

Custom_Givemon_Sootpolis_6:
# 39 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 40 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Sootpolis_Text_2
# 41 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	removeobject 5
# 42 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 43 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	call SootpolisNicknameBoxMon
	goto Custom_Givemon_Sootpolis_1


SootpolisNicknamePartyMon::
# 62 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	msgbox SootpolisNicknamePartyMon_Text_0, MSGBOX_YESNO
# 63 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	hidemonpic
# 64 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SootpolisNicknamePartyMon_1
	return

SootpolisNicknamePartyMon_1:
# 65 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 66 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


SootpolisNicknameBoxMon::
# 74 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	msgbox SootpolisNicknamePartyMon_Text_0, MSGBOX_YESNO
# 75 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	hidemonpic
# 76 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SootpolisNicknameBoxMon_2
SootpolisNicknameBoxMon_1:
# 79 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

SootpolisNicknameBoxMon_2:
# 77 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto SootpolisNicknameBoxMon_1


Custom_Givemon_Sootpolis_Text_0:
# 28 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	.string "Do you want this Latias?$"

Custom_Givemon_Sootpolis_Text_1:
# 33 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	.string "Here you go!$"

Custom_Givemon_Sootpolis_Text_2:
# 40 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	.string "Latias was placed in your PC.$"

Custom_Givemon_Sootpolis_Text_3:
# 47 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	.string "You need to release something to get this.$"

SootpolisNicknamePartyMon_Text_0:
# 62 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	.string "Give it a nickname?$"

Custom_Givemon_Sootpolis_NotChosen::
# 83 "data/maps/SootopolisCity_PokemonCenter_2F/scripts.pory"
	.string "Guess I'll just have to use it for spells...$"
