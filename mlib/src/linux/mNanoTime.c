/*$
 Copyright (C) 2013-2019 Azel.

 This file is part of AzPainter.

 AzPainter is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 AzPainter is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
$*/

/*****************************************
 * <Linux> mNanoTime
 *****************************************/

/* glibc 2.17 以前では、clock_gettime() を使う場合 librt のリンクが必要 */


#include <unistd.h>

#if defined(_POSIX_TIMERS) && _POSIX_TIMERS > 0
#include <time.h>
#else
#include <sys/time.h>
#endif

#include "mDef.h"
#include "mNanoTime.h"


/**
@addtogroup nanotime
 
@{
*/

/** 現在のナノ時間を取得 */

void mNanoTimeGet(mNanoTime *nt)
{
#if defined(_POSIX_TIMERS) && _POSIX_TIMERS > 0

	struct timespec ts;

	clock_gettime(CLOCK_MONOTONIC, &ts);

	nt->sec  = ts.tv_sec;
	nt->nsec = ts.tv_nsec;

#else

	struct timeval tv;

	gettimeofday(&tv, NULL);

	nt->sec  = tv.tv_sec;
	nt->nsec = tv.tv_usec * 1000;

#endif
}

/** @} */
