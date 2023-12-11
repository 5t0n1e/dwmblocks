//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.dwm/dwmblocks/bin/temp", 5, 0},
	{"", "~/.dwm/dwmblocks/bin/cpu", 5, 0},
	{"", "~/.dwm/dwmblocks/bin/memory", 5, 0},
	{"", "~/.dwm/dwmblocks/bin/disk", 60, 0},
	{"", "~/.dwm/dwmblocks/bin/brightness", 0, 1},
	{"", "~/.dwm/dwmblocks/bin/volume", 0, 2},
	{"", "~/.dwm/dwmblocks/bin/battery", 10, 0},
	{"", "~/.dwm/dwmblocks/bin/network", 5, 0},
	{"", "~/.dwm/dwmblocks/bin/date", 60, 0},
	{"", "~/.dwm/dwmblocks/bin/time", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "";
static unsigned int delimLen = 5;
