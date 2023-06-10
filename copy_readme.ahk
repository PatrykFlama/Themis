CoordMode, Mouse, Screen 

AltTab(){
	Send, {AltDown}{Tab down}
	Sleep, 1
	Send, {AltUp}{Tab up}
}

SelectCode(){
	MouseClick, Left, 2123, 316, , , D
	Sleep, 1
	MouseClick, Left, 2610, 1380, , , U
}

SwitchToEditor(){
	MouseClick, Left , 994, 675
}

Copy(){
	Send, ^c
}

SelAll(){
	Send, ^a
}

Paste(){
	Send, ^v
}

CloseCard(){
	Send, ^w
}

Save(){
	Send, ^s
}

Sleep, 3000
Loop 5 {
	SelectCode()
	SelAll()
	Sleep, 50
	Copy()
	CloseCard()
	SwitchToEditor()
	Sleep, 50
	SelAll()
	Sleep, 30
	Paste()
	Sleep, 50
	Save()
	Sleep, 50
	CloseCard()
	Sleep, 10
}

return
