#include "timer.h"
#include <ITimer.h>

unsigned int irr_ITimer_getRealTime(irr_ITimer* timer)
{
	return reinterpret_cast<irr::ITimer*>(timer)->getRealTime();
}

RealTimeDate irr_ITimer_getRealTimeAndDate(irr_ITimer* timer)
{
	RealTimeDate date;
	auto temp = reinterpret_cast<irr::ITimer*>(timer)->getRealTimeAndDate();
	date.Hour = temp.Hour;
	date.Minute = temp.Minute;
	date.Second = temp.Second;
	date.Year = temp.Year;
	date.Month = temp.Month;
	date.Day = temp.Day;
	date.Weekday = EWeekday(temp.Weekday);
	date.Yearday = temp.Yearday;
	date.IsDST = temp.IsDST;
	return date;
}

unsigned int irr_ITimer_getTime(irr_ITimer* timer)
{
	return reinterpret_cast<irr::ITimer*>(timer)->getTime();
}

void irr_ITimer_setTime(irr_ITimer* timer, unsigned int time)
{
	reinterpret_cast<irr::ITimer*>(timer)->setTime(time);
}

void irr_ITimer_stop(irr_ITimer* timer)
{
	reinterpret_cast<irr::ITimer*>(timer)->stop();
}

void irr_ITimer_start(irr_ITimer* timer)
{
	reinterpret_cast<irr::ITimer*>(timer)->start();
}

void irr_ITimer_setSpeed(irr_ITimer* timer, float speed)
{
	reinterpret_cast<irr::ITimer*>(timer)->setSpeed(speed);
}

float irr_ITimer_getSpeed(irr_ITimer* timer)
{
	return reinterpret_cast<irr::ITimer*>(timer)->getSpeed();
}

bool irr_ITimer_isStopped(irr_ITimer* timer)
{
	return reinterpret_cast<irr::ITimer*>(timer)->isStopped();
}

void irr_ITimer_tick(irr_ITimer* timer)
{
	reinterpret_cast<irr::ITimer*>(timer)->tick();
}
