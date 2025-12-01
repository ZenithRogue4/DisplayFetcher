/* Jaden Rollman
 * DisplayFetcher
 * jadenrollman@gmail.com
 * This file contains the member functions
 * for the display fetcher.*/

#include "fetch.h"

/* Gets Model Information For Detected Displays
 * Returns 1 on Success
 * Returns 0 on Failure */
int get_model(char *model) {
	char info[1024];

	FILE *fp = popen("/Library/Preferences/com.apple.windowserver.displays.plist", "r");

	if (fp == NULL) return 0;

	// Parse File and Copy to Info Array

	model = malloc(sizeof(info) + 1);

	strcpy(model, info);

	pclose(fp);

	return 1;
}
