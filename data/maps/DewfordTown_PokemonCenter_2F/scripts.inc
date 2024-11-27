# 1 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"

# 2 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
DewfordTown_PokemonCenter_2F_MapScripts::
# 3 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CableClub_OnFrame
# 4 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
# 5 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 6 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
# 7 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	.byte 0
# 8 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"

# 9 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
@ The below 3 are unused and leftover from RS
# 10 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
DewfordTown_PokemonCenter_2F_EventScript_Colosseum::
# 11 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_Colosseum
# 12 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	end
# 13 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"

# 14 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
DewfordTown_PokemonCenter_2F_EventScript_TradeCenter::
# 15 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_TradeCenter
# 16 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	end
# 17 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"

# 18 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
DewfordTown_PokemonCenter_2F_EventScript_RecordCorner::
# 19 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_RecordCorner
# 20 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	end

Custom_Givemon_Dewford::
# 26 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	lockall
# 27 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	showmonpic SPECIES_HATENNA, 10, 3
# 28 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Dewford_Text_0, MSGBOX_YESNO
# 29 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Custom_Givemon_Dewford_2
# 51 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	hidemonpic
# 52 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Dewford_NotChosen
Custom_Givemon_Dewford_1:
# 54 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	waitmessage
# 55 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	releaseall
	end

Custom_Givemon_Dewford_2:
# 30 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	givemon SPECIES_HATENNA, 10, ITEM_LUXURY_BALL
# 31 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Custom_Givemon_Dewford_5
# 38 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Custom_Givemon_Dewford_6
# 46 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	hidemonpic
# 47 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Dewford_Text_3
	goto Custom_Givemon_Dewford_1

Custom_Givemon_Dewford_5:
# 32 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 33 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Dewford_Text_1
# 34 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	removeobject 5
# 35 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 36 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	call DewfordNicknamePartyMon
	goto Custom_Givemon_Dewford_1

Custom_Givemon_Dewford_6:
# 39 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 40 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Dewford_Text_2
# 41 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	removeobject 5
# 42 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 43 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	call DewfordNicknameBoxMon
	goto Custom_Givemon_Dewford_1


DewfordNicknamePartyMon::
# 62 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	msgbox DewfordNicknamePartyMon_Text_0, MSGBOX_YESNO
# 63 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	hidemonpic
# 64 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DewfordNicknamePartyMon_1
	return

DewfordNicknamePartyMon_1:
# 65 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 66 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


DewfordNicknameBoxMon::
# 74 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	msgbox DewfordNicknamePartyMon_Text_0, MSGBOX_YESNO
# 75 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	hidemonpic
# 76 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DewfordNicknameBoxMon_2
DewfordNicknameBoxMon_1:
# 79 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

DewfordNicknameBoxMon_2:
# 77 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto DewfordNicknameBoxMon_1


Custom_Givemon_Dewford_Text_0:
# 28 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	.string "Do you want this Hatenna?$"

Custom_Givemon_Dewford_Text_1:
# 33 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	.string "Here you go!$"

Custom_Givemon_Dewford_Text_2:
# 40 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	.string "Hatenna was placed in your PC.$"

Custom_Givemon_Dewford_Text_3:
# 47 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	.string "You need to release something to get this.$"

DewfordNicknamePartyMon_Text_0:
# 62 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	.string "Give it a nickname?$"

Custom_Givemon_Dewford_NotChosen::
# 83 "data/maps/DewfordTown_PokemonCenter_2F/scripts.pory"
	.string "Guess I'll just have to use it for spells...$"
