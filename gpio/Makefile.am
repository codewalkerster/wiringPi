bin_PROGRAMS = gpio

gpio_SOURCES = \
	gpio.c \
	readall.c

gpio_CFLAGS = \
	-I ../wiringPi \
	@EXTRA_CFLAGS@ \
	$(LIBCRYPT_CFLAGS)

gpio_LDFLAGS = \
	-L../wiringPi/.libs -lwiringPi \
	$(LIBCRYPT_LIBS) # -lgpiod
