/* user and group to drop privileges to */
static const char *user  = "rushabhp";
static const char *group = "nobody"; // use "nobody" for arch

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[CAPS] =   "red",       /* CapsLock on */
	[PAM] =    "#9400D3",   /* waiting for PAM */
	[BLOCKS] = "#6f91b7",   /* key feedback block */
};


/* Background image path, should be available to the user above */
static const char * background_image = "/home/rushabhp/Downloads/wallhaven-5gg3y8_3840x2160.png";


/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "bg_image",     STRING,  &background_image },
		{ "locked",       STRING,  &colorname[INIT] },
		{ "input",        STRING,  &colorname[INPUT] },
		{ "failed",       STRING,  &colorname[FAILED] },
		{ "capslock",     STRING,  &colorname[CAPS] },
		{ "pamauth",      STRING,  &colorname[PAM] },
};


/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;


/* number of failed password attempts until failcommand is executed.
   Set to 0 to disable */
static const int failcount = 0;

/* command to be executed after [failcount] failed password attempts */
static const char *failcommand = "shutdown";

static const secretpass scom[] = {
	/* Password             command */
	{ "shutdown",           "sudo poweroff"},
};

/* Enable blur */
#define BLUR
/* Set blur radius */
static const int blurRadius = 5;
/* Enable Pixelation */
//#define PIXELATION
/* Set pixelation radius */
static const int pixelSize = 10;

/* allow control key to trigger fail on clear */
static const int controlkeyclear = 1;


static short int blocks_enabled = 1; // 0 = don't show blocks
static const int blocks_width = 0; // 0 = full width
static const int blocks_height = 16;

// position
static const int blocks_x = 0;
static const int blocks_y = 0;

// Number of blocks
static const int blocks_count = 30;

/* PAM service that's used for authentication */
static const char* pam_service = "login";

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 4;
