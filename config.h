/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMono Nerd Font:style=Medium:size=10:antialias=true:autohint=true"
  // "Iosevka Nerd Font:style=Medium:size=11:antialias=true",
   "Symbols Nerd Font Mono:style=2048-em:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#6E6C7E", "#1E1D2D" },
	[SchemeSel] = { "#CDD6F4", "#1E1D2D" },
	[SchemeSelHighlight] = { "#89B4FA", "#1E1D2D" },
	[SchemeNormHighlight] = { "#89B4FA", "#1E1D2D" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 30;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
