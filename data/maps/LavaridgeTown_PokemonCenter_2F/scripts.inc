# 1 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"

# 2 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
LavaridgeTown_PokemonCenter_2F_MapScripts::
# 3 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CableClub_OnFrame
# 4 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
# 5 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 6 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
# 7 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	.byte 0
# 8 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"

# 9 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
@ The below 3 are unused and leftover from RS
# 10 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
LavaridgeTown_PokemonCenter_2F_EventScript_Colosseum::
# 11 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_Colosseum
# 12 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	end
# 13 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"

# 14 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
LavaridgeTown_PokemonCenter_2F_EventScript_TradeCenter::
# 15 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_TradeCenter
# 16 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	end
# 17 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"

# 18 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
LavaridgeTown_PokemonCenter_2F_EventScript_RecordCorner::
# 19 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_RecordCorner
# 20 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	end

Custom_Givemon_Lavaridge::
# 26 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	lockall
# 27 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	showmonpic SPECIES_DREEPY, 10, 3
# 28 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Lavaridge_Text_0, MSGBOX_YESNO
# 29 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Custom_Givemon_Lavaridge_2
# 51 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	hidemonpic
# 52 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Lavaridge_NotChosen
Custom_Givemon_Lavaridge_1:
# 54 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	waitmessage
# 55 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	releaseall
	end

Custom_Givemon_Lavaridge_2:
# 30 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	givemon SPECIES_DREEPY, 10, ITEM_LUXURY_BALL
# 31 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Custom_Givemon_Lavaridge_5
# 38 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Custom_Givemon_Lavaridge_6
# 46 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	hidemonpic
# 47 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Lavaridge_Text_3
	goto Custom_Givemon_Lavaridge_1

Custom_Givemon_Lavaridge_5:
# 32 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 33 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Lavaridge_Text_1
# 34 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	removeobject 5
# 35 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 36 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	call LavaridgeNicknamePartyMon
	goto Custom_Givemon_Lavaridge_1

Custom_Givemon_Lavaridge_6:
# 39 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 40 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Lavaridge_Text_2
# 41 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	removeobject 5
# 42 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 43 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	call LavaridgeNicknameBoxMon
	goto Custom_Givemon_Lavaridge_1


LavaridgeNicknamePartyMon::
# 62 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	msgbox LavaridgeNicknamePartyMon_Text_0, MSGBOX_YESNO
# 63 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	hidemonpic
# 64 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LavaridgeNicknamePartyMon_1
	return

LavaridgeNicknamePartyMon_1:
# 65 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 66 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


LavaridgeNicknameBoxMon::
# 74 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	msgbox LavaridgeNicknamePartyMon_Text_0, MSGBOX_YESNO
# 75 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	hidemonpic
# 76 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LavaridgeNicknameBoxMon_2
LavaridgeNicknameBoxMon_1:
# 79 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

LavaridgeNicknameBoxMon_2:
# 77 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto LavaridgeNicknameBoxMon_1


Custom_Givemon_Lavaridge_Text_0:
# 28 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	.string "Do you want this Dreepy?$"

Custom_Givemon_Lavaridge_Text_1:
# 33 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	.string "Here you go!$"

Custom_Givemon_Lavaridge_Text_2:
# 40 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	.string "Dreepy was placed in your PC.$"

Custom_Givemon_Lavaridge_Text_3:
# 47 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	.string "You need to release something to get this.$"

LavaridgeNicknamePartyMon_Text_0:
# 62 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	.string "Give it a nickname?$"

Custom_Givemon_Lavaridge_NotChosen::
# 83 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	.string "Guess I'll just have to use it for spells...$"
