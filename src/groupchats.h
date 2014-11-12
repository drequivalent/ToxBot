/*  groupchats.h
 *
 *
 *  Copyright (C) 2014 toxbot All Rights Reserved.
 *
 *  This file is part of toxbot.
 *
 *  toxbot is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  toxbot is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with toxbot. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef GROUPCHATS_H
#define GROUPCHATS_H

#define SECONDS_IN_DAY 86400UL
#define MAX_PASSWORD_SIZE 64

struct Group_Chat {
    int num;
    bool active;
    bool has_pass;
    uint8_t type;
    char password[MAX_PASSWORD_SIZE];
};

int group_add(int groupnum, uint8_t type, const char *password);
void group_leave(int groupnum);
int group_index(int groupnum);
void realloc_groupchats(int n);

#endif  /* GROUPCHATS_H */
