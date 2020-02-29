#include <string.h>
#include "mgos.h"
#include "mgos_system.h"
#include "mgos_time.h"
#include "mgos_timers.h"


static void mujmodul_timer_cb(void *buf) {

	char buf[128];
	time_t now;
	time(&now);
	int result = mgos_strftime(buf, sizeof(buf), "%F %T", now);

	LOG(LL_INFO,("Time is: %s", buf));
}

bool mgos_mujmodul_init(void) {

	mgos_set_timer(mgos_sys_config_get_mujmodul_time()
	  , MGOS_TIMER_REPEAT, mujmodul_timer_cb, NULL);

	return true;
}
