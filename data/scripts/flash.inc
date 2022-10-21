EventScript_UseFlashLantern:: @ 82926F8
	msgbox Text_PlayerUsedLantern, MSGBOX_DEFAULT
	goto EventScript_UseFlash

EventScript_UseFlash
	closemessage
	animateflash 1
	setflashlevel 1
	end

Text_PlayerUsedLantern:
	.string "{PLAYER} used the LANTERN!$"
