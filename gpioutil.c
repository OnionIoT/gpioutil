/*
 * gpioutil: simple utility to manipulate GPIOs
 * Copyright (C) 2015  Boken Lin <bl@onion.io>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <linux/gpio/gpiolib.h>

static void usage_error (void) {
	fprintf(stderr, "Usage: gpioutil <command> <gpio#>\n\n");
	fprintf(stderr, "Commands:\n");
	fprintf(stderr, " - %-16s%s\n", "high", "Set GPIO output to high");
	fprintf(stderr, " - %-16s%s\n", "low", "Set GPIO output to low");
	fprintf(stderr, " - %-16s%s\n", "read", "Read input from GPIO");
	fprintf(stderr, " - %-16s%s\n", "clear", "Clear GPIO state");
}

int main (int argc, char* argv[]) {
	unsigned gpio;

	if (argc < 3) {
		usage_error();
		exit(EXIT_FAILURE);
	}
}