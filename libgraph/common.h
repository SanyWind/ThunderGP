#ifndef __COMMON_H__
#define __COMMON_H__


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

#include "global_config.h"



#define FLAG_SET                (1u)
#define FLAG_RESET              (0u)


#if 1

#define DEBUG_PRINTF(fmt,...)   printf(fmt,##__VA_ARGS__); fflush(stdout);

#else

#define DEBUG_PRINTF(fmt,...)   ;

#endif


#ifndef ARRAY_SIZE
#define ARRAY_SIZE(arr) sizeof(arr)/sizeof((arr)[0])
#endif


inline unsigned int get_aligned_size(unsigned int in, unsigned int align)
{
	if (in == 0)
	{
		return align;
	}
	else
	{
		return (((((in - 1) / align) + 1) * align));
	}
}

#define SIZE_ALIGNMENT(in,align)    get_aligned_size((unsigned int)in,(unsigned int)align)


#endif /* __COMMON_H__ */
