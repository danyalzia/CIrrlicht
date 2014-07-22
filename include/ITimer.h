/*
    CIrrlicht - C Bindings for Irrlicht Engine

    Copyright (C) 2014- Danyal Zia (catofdanyal@yahoo.com)

    This software is provided 'as-is', without any express or
    implied warranty. In no event will the authors be held
    liable for any damages arising from the use of this software.

    Permission is granted to anyone to use this software for any purpose,
    including commercial applications, and to alter it and redistribute
    it freely, subject to the following restrictions:

    1. The origin of this software must not be misrepresented;
       you must not claim that you wrote the original software.
       If you use this software in a product, an acknowledgment
       in the product documentation would be appreciated but
       is not required.

    2. Altered source versions must be plainly marked as such,
       and must not be misrepresented as being the original software.

    3. This notice may not be removed or altered from any
       source distribution.
*/

#pragma once

#include "CompileConfig.h"

enum EWeekday
{
	EWD_SUNDAY=0,
	EWD_MONDAY,
	EWD_TUESDAY,
	EWD_WEDNESDAY,
	EWD_THURSDAY,
	EWD_FRIDAY,
	EWD_SATURDAY
};

struct RealTimeDate
{
	// Hour of the day, from 0 to 23
	unsigned int Hour;
	// Minute of the hour, from 0 to 59
	unsigned int Minute;
	// Second of the minute, due to extra seconds from 0 to 61
	unsigned int Second;
	// Year of the gregorian calender
	int Year;
	// Month of the year, from 1 to 12
	unsigned int Month;
	// Day of the month, from 1 to 31
	unsigned int Day;
	// Weekday for the current day
	EWeekday Weekday;
	// Day of the year, from 1 to 366
	unsigned int Yearday;
	// Whether daylight saving is on
	bool IsDST;
};
	
typedef struct irr_ITimer irr_ITimer;

CIRRLICHT_API unsigned int irr_ITimer_getRealTime(irr_ITimer* timer);
CIRRLICHT_API RealTimeDate irr_ITimer_getRealTimeAndDate(irr_ITimer* timer);
CIRRLICHT_API unsigned int irr_ITimer_getTime(irr_ITimer* timer);
CIRRLICHT_API void irr_ITimer_setTime(irr_ITimer* timer, unsigned int time);
CIRRLICHT_API void irr_ITimer_stop(irr_ITimer* timer);
CIRRLICHT_API void irr_ITimer_start(irr_ITimer* timer);
CIRRLICHT_API void irr_ITimer_setSpeed(irr_ITimer* timer, float speed = 1.0f);
CIRRLICHT_API float irr_ITimer_getSpeed(irr_ITimer* timer);
CIRRLICHT_API bool irr_ITimer_isStopped(irr_ITimer* timer);
CIRRLICHT_API void irr_ITimer_tick(irr_ITimer* timer);
