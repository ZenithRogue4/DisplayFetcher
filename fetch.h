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
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Struct for Display
struct display {
	char* model;
	char* connection;
	int* setResolution;
	int* maxResolution;
	int refreshRate;
	int isInternal;
};

// Function Prototypes
void welcome();					// Welcomes the User to the Program
int get_model(char *model); 				// Gets the Model Name of the Detected Display(s)
int get_connection(char *connection, int isInternal);	// Gets the Connection Type (HDMI, DP, Internal)
int getSetRes(char *setResolution);			// Gets the Set Resolution for Each Display
int getMaxRes(char *maxResolution);			// Gets the Maximum Possible Resolution for Each Display
int getRefRate(char *refreshRate);			// Gets the Refresh Rate of Each Display
