# 1 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"

# 2 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
MauvilleCity_PokemonCenter_2F_MapScripts::
# 3 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CableClub_OnFrame
# 4 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
# 5 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 6 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
# 7 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	.byte 0
# 8 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"

# 9 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
@ The below 3 are unused and leftover from RS
# 10 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
MauvilleCity_PokemonCenter_2F_EventScript_Colosseum::
# 11 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_Colosseum
# 12 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	end
# 13 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"

# 14 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
MauvilleCity_PokemonCenter_2F_EventScript_TradeCenter::
# 15 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_TradeCenter
# 16 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	end
# 17 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"

# 18 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
MauvilleCity_PokemonCenter_2F_EventScript_RecordCorner::
# 19 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_RecordCorner
# 20 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	end
# 21 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"

# 22 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
MauvilleCity_PokemonCenter_2F_EventScript_Youngster::
# 23 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_2F_Text_Youngster, MSGBOX_NPC
# 24 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	end
# 25 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"

# 26 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
MauvilleCity_PokemonCenter_2F_Text_Youngster:
# 27 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	.string "Did you know that you can link battle\n"
# 28 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	.string "at the COLOSSEUM here?\p"
# 29 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	.string "They put up your record on the wall\n"
# 30 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	.string "for everyone to see.\p"
# 31 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	.string "It's embarrassing if you lose more\n"
# 32 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	.string "often than you win…$"

Custom_Givemon_Mauville::
# 38 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	lockall
# 39 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	showmonpic SPECIES_GREAT_TUSK, 10, 3
# 40 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Mauville_Text_0, MSGBOX_YESNO
# 41 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Custom_Givemon_Mauville_2
# 63 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	hidemonpic
# 64 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Mauville_NotChosen
Custom_Givemon_Mauville_1:
# 66 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	waitmessage
# 67 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	releaseall
	end

Custom_Givemon_Mauville_2:
# 42 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	givemon SPECIES_GREAT_TUSK, 10, ITEM_LUXURY_BALL
# 43 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Custom_Givemon_Mauville_5
# 50 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Custom_Givemon_Mauville_6
# 58 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	hidemonpic
# 59 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Mauville_Text_3
	goto Custom_Givemon_Mauville_1

Custom_Givemon_Mauville_5:
# 44 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 45 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Mauville_Text_1
# 46 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	removeobject 6
# 47 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 48 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	call MauvilleNicknamePartyMon
	goto Custom_Givemon_Mauville_1

Custom_Givemon_Mauville_6:
# 51 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 52 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	msgbox Custom_Givemon_Mauville_Text_2
# 53 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	removeobject 6
# 54 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 55 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	call MauvilleNicknameBoxMon
	goto Custom_Givemon_Mauville_1


MauvilleNicknamePartyMon::
# 74 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	msgbox MauvilleNicknamePartyMon_Text_0, MSGBOX_YESNO
# 75 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	hidemonpic
# 76 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleNicknamePartyMon_1
	return

MauvilleNicknamePartyMon_1:
# 77 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 78 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


MauvilleNicknameBoxMon::
# 86 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	msgbox MauvilleNicknamePartyMon_Text_0, MSGBOX_YESNO
# 87 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	hidemonpic
# 88 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleNicknameBoxMon_2
MauvilleNicknameBoxMon_1:
# 91 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

MauvilleNicknameBoxMon_2:
# 89 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto MauvilleNicknameBoxMon_1


Custom_Givemon_Mauville_Text_0:
# 40 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	.string "Do you want this Great Tusk?$"

Custom_Givemon_Mauville_Text_1:
# 45 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	.string "Here you go!$"

Custom_Givemon_Mauville_Text_2:
# 52 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	.string "Great Tusk placed in your PC.$"

Custom_Givemon_Mauville_Text_3:
# 59 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	.string "You need to release something to get this.$"

MauvilleNicknamePartyMon_Text_0:
# 74 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	.string "Give it a nickname?$"

Custom_Givemon_Mauville_NotChosen::
# 95 "data/maps/MauvilleCity_PokemonCenter_2F/scripts.pory"
	.string "Guess I'll just have to use it for spells...$"
