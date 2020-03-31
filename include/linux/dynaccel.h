/*
 *  Dynamic (fake) Acceleration for Linux
 *
 *  Copyright (C) 2012 TOSHIBA CORPORATION
 *
 */

#ifndef _LINUX_DYNACCEL_H
#define _LINUX_DYNACCEL_H

#define DEFAULT_SPEEDUP_RATIO   1   /* No accelerarion */

#ifdef __KERNEL__
extern unsigned int speedup_ratio;
#endif  /* __KERNEL */

#endif	/* _LINUX_DYNACCEL_H */
