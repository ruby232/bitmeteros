/*
 * BitMeterOS
 * http://codebox.org.uk/bitmeterOS
 *
 * Copyright (c) 2011 Rob Dawson
 *
 * Licensed under the GNU General Public License
 * http://www.gnu.org/licenses/gpl.txt
 *
 * This file is part of BitMeterOS.
 *
 * BitMeterOS is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * BitMeterOS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with BitMeterOS.  If not, see <http://www.gnu.org/licenses/>.
 */

#define SERVICE_NAME "BitMeterCaptureService"

#define POLL_INTERVAL   1

#include <stdio.h>

struct Data* getData();

void setupDb();
int updateDb(int, struct Data*);
int insertData(struct Data* data);
int compressDb();

int getNextCompressTime();

void setupCapture();
int processCapture();
void shutdownCapture();
void logData(struct Data*);
struct Data* extractDiffs(int ts, struct Data* oldList, struct Data* newList);
#ifdef TESTING
void setPrevData(struct Data* data);
#endif
