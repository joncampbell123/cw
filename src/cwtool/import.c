/****************************************************************************
 ****************************************************************************
 *
 * import.c
 *
 ****************************************************************************
 ****************************************************************************/





#include <stdio.h>

#include "import.h"
#include "error.h"
#include "debug.h"
#include "verbose.h"
#include "global.h"
#include "options.h"




/****************************************************************************
 *
 * global functions
 *
 ****************************************************************************/




/****************************************************************************
 * import_u16_be
 ****************************************************************************/
cw_u16_t
import_u16_be(
	cw_u8_t				*data)

	{
	cw_u16_t			val = data[0];

	val = (val << 8) | data[1];
	return (val);
	}



/****************************************************************************
 * import_u16_le
 ****************************************************************************/
cw_u16_t
import_u16_le(
	cw_u8_t				*data)

	{
	cw_u16_t			val = data[1];

	val = (val << 8) | data[0];
	return (val);
	}



/****************************************************************************
 * import_u32_le
 ****************************************************************************/
cw_u32_t
import_u32_le(
	cw_u8_t				*data)

	{
	cw_u32_t			val = data[3];

	val = (val << 8) | data[2];
	val = (val << 8) | data[1];
	val = (val << 8) | data[0];
	return (val);
	}
/******************************************************** Karsten Scheibler */