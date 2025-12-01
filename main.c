#include "fetch.h"

// Displays Welcome Screen
void welcome() {
	printf("\n===================\n");
	printf("\nDisplayFetcher\n");
	printf("\n===================\n");
}

int main(void) {
	int retrieve_model = 0;

	welcome();

	char* model = NULL;
	retrieve_model = get_model(model);

	if (!retrieve_model) printf("\nFailed To Retrieve Model Info\n");
	else printf("\nModel Name: %s\n", model);

	return 0;
}
