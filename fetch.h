/* Jaden Rollman
 * DisplayFetcher
 * jadenrollman@gmail.com
 * The purpose of this program is to
 * fetch the information of connected
 * display devices. The fetcher will show
 * whether the display is internal, the
 * serial bus, current resolution, max resolution,
 * and the refresh rate.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Struct for Display
struct display {
	char* model;
	char* connection;
	int* set_resolution;
	int* max_resolution;
	int refresh_rate;
	bool internal;
};

// Function Prototypes (to be added later)
