//Forked for my own experimental use! i'm using this because im in the need of a temporary exploit sandbox. - will be updated and
removed and inputting my own created sandbox, @FCE365 @GeoSn0w

#ifndef _SANDBOX_ESCAPE_H
#define _SANDBOX_ESCAPE_H

#include <mach/mach.h>

/*
 * do the launchd exploit and return the host priv port
 */


mach_port_t get_host_priv_port(char* app_group, mach_port_t* _real_service_port, mach_port_t* _mitm_port);
void kill_powerd();

#endif
