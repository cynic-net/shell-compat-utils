
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
BSDINC = $(shell pkgconf --cflags libbsd-overlay)

CFLAGS = --include apple_env.h ${BSDINC}  -Wno-error=unused-result

all: sed

#   Requires `libbsd-dev`
sed: $(OBJS)
	$(CC) -o sed $(OBJS) -lbsd

.PHONY: clean
clean:
	rm -f sed $(OBJS)
