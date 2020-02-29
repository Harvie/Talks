#include "mgos.h"

void mgos_app_preinit(void) {
	//Before FreeRTOS!!!
	return;
}

enum mgos_app_init_result mgos_app_init(void)
{
	//Main logic

	LOG(LL_INFO,("Firmware booted. All modules loaded."));

	return MGOS_APP_INIT_SUCCESS;
}
