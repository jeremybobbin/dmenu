/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Xresources preferences to load at startup */
ResourcePref resources[] = {
	{ "font",           STRING,  &fonts[0]              },
	{ "normfgcolor",    STRING,  &colors[SchemeNorm][0] },
	{ "normbgcolor",    STRING,  &colors[SchemeNorm][1] },
	{ "selfgcolor",     STRING,  &colors[SchemeSel][0]  },
	{ "selbgcolor",     STRING,  &colors[SchemeSel][1]  },
	{ "borderfgcolor",  STRING,  &colors[SchemeOut][0]  },
	{ "borderbgcolor",  STRING,  &colors[SchemeOut][1]  },
	{ "topbar",         INTEGER, &topbar                },
};
