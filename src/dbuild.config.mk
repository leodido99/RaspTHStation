
CFLAGS += -march=armv6z -g -Wall -Wextra
CFLAGS += -I $(BASE)FreeRTOS/Source/portable/GCC/RaspberryPi/
CFLAGS += -I $(BASE)FreeRTOS/Source/include/
CFLAGS += -I $(BASE)Demo/Drivers/
CFLAGS += -I $(BASE)Demo/MiniUART/
CFLAGS += -I $(BASE)Demo/Auxiliary/
CFLAGS += -I $(BASE)Demo/tools/

TOOLCHAIN=arm-none-eabi-
