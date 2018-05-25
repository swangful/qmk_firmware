Swang's Keymap
===

Layer 1: Identical to TADA68

Layer 2: RGB/Media

Layer 3: Mashing

Keymap Maintainer: [Steve Wang](https://github.com/swangful)

Difference from default layout: Added rgb/media/mashing layer

Intended usage: Daily driver

I found the easiest way to install is using QMK Toolbox to flash.

Steps to using QMK Toolbox

1. Install via homebrew
2. QMK Toolbox: Select Keyboard from QMK.fm = jc65/v32u4
3. $ make jc65/v32u4:swang
4. QMK Toolbox: Open new hexfile at root
5. If no issues with keyboard, step 6. Otherwise Reset EEPROM
6. Flash


### MOON Programming
1. Open TKG chrome app
2. Make sure Kimera is selected
3. Select custom config
4. Rows 1,2,3,4,5,6,7,8
5. Columns 20,21,22,23,24,25,26,27,28,29,30
6. Matrix mapping
```
["1,1",{x:1},"1,2","1,3","1,4","1,5",{x:0.5},"1,6","1,7","1,8","1,9",{x:0.5},"1,10","1,11","7,1","7,2",{x:0.25},"7,3","7,4","7,5"],
[{y:0.5},"2,1","2,2","2,3","2,4","2,5","2,6","2,7","2,8","2,9","2,10","2,11","7,6","7,7",{w:2},"7,8",{x:0.25},"7,9","7,10","7,11"],
[{w:1.5},"3,1","3,2","3,3","3,4","3,5","3,6","3,7","3,8","3,9","3,10","3,11","8,1","8,2",{w:1.5},"8,3",{x:0.25},"8,4","8,5","8,6"],
[{w:1.75},"4,1","4,2","4,3","4,4","4,5","4,6","4,7","4,8","4,9","4,10","4,11","8,7",{w:2.25},"8,8"],
[{w:2.25},"5,1","5,3","5,4","5,5","5,6","5,7","5,8","5,9","5,10","5,11","8,9",{w:2.75},"8,11",{x:1.25},"8,10"],
[{w:1.25},"6,1",{w:1.25},"6,2",{w:1.25},"6,3",{w:6.25},"6,4",{w:1.25},"6,5",{w:1.25},"6,6",{w:1.25},"6,7",{w:1.25},"6,8",{x:0.25},"6,9","6,10","6,11"]
```

7. Close out of config
8. Layer 0

```
["Esc",{x:1},"F1","F2","F3","F4",{x:0.5},"F5","F6","F7","F8",{x:0.5},"F9","F10","F11","F12",{x:0.25},"PrtSc","Scroll Lock","Pause\nBreak"],
[{y:0.5},"~\n`","!\n1","@\n2","#\n3","$\n4","%\n5","^\n6","&\n7","*\n8","(\n9",")\n0","_\n-","+\n=",{w:2},"Backspace",{x:0.25},"Insert","Home","PgUp"],
[{w:1.5},"Tab","Q","W","E","R","T","Y","U","I","O","P","{\n[","}\n]",{w:1.5},"|\n\\",{x:0.25},"Delete","End","PgDn"],
[{w:1.75},"Caps Lock","A","S","D","F","G","H","J","K","L",":\n;","\"\n'",{w:2.25},"Enter"],
[{w:2.25},"Shift","Z","X","C","V","B","N","M","<\n,",">\n.","?\n/",{w:2.75},"rShift",{x:1.25},"↑"],
[{w:1.25},"Ctrl",{w:1.25},"Win",{w:1.25},"Alt",{a:7,w:6.25},"space",{a:4,w:1.25},"rAlt",{w:1.25},"fn0",{w:1.25},"Menu",{w:1.25},"rCtrl",{x:0.25},"←","↓","→"]
```
9. Layer 1

```
["Esc",{x:1},"F1","F2","F3","F4",{x:0.5},"F5","F6","F7","F8",{x:0.5},"F9","F10","F11","F12",{x:0.25},"PrtSc","Scroll Lock","Pause\nBreak"],
[{y:0.5},"~\n`","!\n1","@\n2","#\n3","$\n4","%\n5","^\n6","&\n7","*\n8","(\n9","fn1","fn2","fn3",{w:2},"Backspace",{x:0.25},"Insert","Home","PgUp"],
[{w:1.5},"Tab","Q","W","E","R","T","Y","U","I","O","volumedown","volumeup","mute",{w:1.5},"fn3",{x:0.25},"Delete","End","PgDn"],
[{w:1.75},"Caps Lock","A","S","D","F","G","H","J","K","L",":\n;","\"\n'",{w:2.25},"Enter"],
[{w:2.25},"Shift","Z","X","C","V","B","N","M","<\n,",">\n.","?\n/",{w:2.75},"rShift",{x:1.25},"↑"],
[{w:1.25},"Ctrl",{w:1.25},"Win",{w:1.25},"Alt",{a:7,w:6.25},"space",{a:4,w:1.25},"rAlt",{w:1.25},"fn0",{w:1.25},"Menu",{w:1.25},"rCtrl",{x:0.25},"prevtrack","play","nexttrack"]
```
10. Select Fn0 - Momentarily -> Layer 1
11. Press reset button on board
12. Click drop down on Burn .eep and make sure ATM32U4DFU is selected
13. Burn EEP
14. keyboardtester.com
