#ifndef TIME_H_INCLUDE
#define TIME_H_INCLUDE

class Time
{
public:
   Time( int = 0, int = 0, int = 0 );

   // set functions
   void setTime( int, int, int );
   void setHour( int );
   void setMinute( int );
   void setSecond( int );


   int getHour();
   int getMinute();
   int getSecond();

   void tick();
   void printUniversal();
   void printStandard();
private:
   int hour;
   int minute;
   int second;
};
#endif
