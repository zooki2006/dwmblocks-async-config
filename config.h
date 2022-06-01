#define CMDLENGTH 45
#define DELIMITER "  "
#define CLICKABLE_BLOCKS 1

const Block blocks[] = {
//	BLOCK("sb-mail",    1800, 17),
//	BLOCK("sb-music",   0,    18),
//	BLOCK("sb-disk",    1800, 19),
//	BLOCK("sb-memory",  10,   20),
//	BLOCK("sb-loadavg", 5,    21),
//	BLOCK("sb-mic",     0,    26),
//	BLOCK("sb-record",  0,    27),
//	BLOCK("sb-volume",  0,    22),
//	BLOCK("sb-battery", 5,    23),
	BLOCK("sb-mpd", 30,    20),
	BLOCK("sb-volume",  0,    22),
	BLOCK("sb-internet", 120,    23),
        BLOCK("zuki-tray.sh",    360,    25),
//	BLOCK("zuki-tray.sh",    0,    30),
	BLOCK("sb-date",    1,    30),
};
