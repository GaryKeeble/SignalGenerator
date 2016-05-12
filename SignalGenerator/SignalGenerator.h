#ifndef SignalGenerator_h
#define SignalGenerator_h

#ifndef HARDWARESETUP
  #define HARDWARESETUP

  #define CH1_PIN (10)              // the pin number of channel 1
  #define CH2_PIN (11)              // the pin number of channel 2
  #define LED_PIN (13)              // the pin number of channel 3
        
#endif

#ifndef TIMES
  	#define TIMES
  	#define TIME_1MSEC       (1)
	#define TIME_10MSEC      (10)
	#define TIME_15MSEC      (15)
	#define TIME_20MSEC      (20)
	#define TIME_35MSEC      (35)
	#define TIME_50MSEC      (50)
	#define TIME_100MSEC     (100)
	#define TIME_250MSEC     (250)
	#define TIME_300MSEC     (300)
	#define TIME_350MSEC     (350)
	#define TIME_500MSEC     (500)
	#define TIME_1SEC 	 (1000)
	#define TIME_5SEC 	 (5000)
	#define TIME_10SEC 	 (10000)
	#define TIME_30SEC 	 (30000)
	#define TIME_1MIN	 (60000)
	#define TIME_5MIN	 (300000)
	#define TIME_10MIN	 (600000)
	#define TIME_15MIN	 (900000)
	#define TIME_20MIN	 (1200000)
	#define TIME_25MIN	 (1500000)
	#define TIME_30MIN	 (1800000)
#endif

#ifndef FREQUENCY
  	#define FREQUENCY        // pulse time in microseconds for frequencies
  	#define FREQUENCY_1Hz    (1000000)
  	#define FREQUENCY_2Hz    (500000)
  	#define FREQUENCY_5Hz    (200000)
  	#define FREQUENCY_10Hz   (100000)
  	#define FREQUENCY_20Hz   (50000)
  	#define FREQUENCY_50Hz   (20000)
  	#define FREQUENCY_100Hz  (10000)
  	#define FREQUENCY_200Hz  (5000)
  	#define FREQUENCY_500Hz  (2000)
  	#define FREQUENCY_1kHz   (1000)
  	#define FREQUENCY_2kHz   (500)
  	#define FREQUENCY_5kHz   (200)
#endif

#ifndef EVERY
  #define EVERY(interval, event) { \
			unsigned long interval##_now = millis(); \
			static unsigned long interval##_lastTriggered; \
			if ((( interval##_now ) - interval##_lastTriggered) > interval) {\
				{event;} \
				interval##_lastTriggered = interval##_now; } \
			} 
#endif

#ifndef PULSE
  #define PULSE(interval, length, on, off) { \
			unsigned long interval##_now = micros(); \
                        static bool interval##_On; \
			static unsigned long interval##_lastTriggered; \
			if ( ((( interval##_now ) - interval##_lastTriggered) > length) && interval##_On ) {\
				interval##_On = false; \
				{off;} \
                                } \
			if ((( interval##_now ) - interval##_lastTriggered) > interval) {\
				interval##_lastTriggered = interval##_now; \
				interval##_On = true; \
				{on;} \
                                } \
			} 
#endif

#endif

