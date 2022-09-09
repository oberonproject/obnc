/*Copyright (C) 2017 Karl Landstrom <karl@miasap.se>

This file is part of OBNC.

OBNC is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

OBNC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with OBNC.  If not, see <http://www.gnu.org/licenses/>.*/

#ifndef OBERON_H
#define OBERON_H

/*parse modes*/
#define OBERON_NORMAL_MODE 0
#define OBERON_ENTRY_POINT_MODE 1
#define OBERON_IMPORT_LIST_MODE 2

void Oberon_Parse(const char inputFile[], int mode);

void Oberon_PrintContext(void);

#endif
