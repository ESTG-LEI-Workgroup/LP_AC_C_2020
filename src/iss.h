/*
 * Created by Hugo Carvalho on 12/24/20.
 */

#ifndef ISS_H
#define ISS_H

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include "util.h"
#include "strs.h"

#define BUFFER_SIZE 64

typedef struct
{
	char* criteria;
	float employer;
	float employee;
} s_iss;

typedef struct
{
	s_iss* data;
	int used;
	int max_capacity;
} s_arr_iss;

s_arr_iss* h_iss_alloc(int initial_capacity);
void h_iss_free(s_arr_iss* array);
void h_iss_parse(s_arr_iss* array, char* str);
void h_iss_print(s_arr_iss* array);
void h_iss_add(s_arr_iss* array);
void h_iss_delete(s_arr_iss* array);
void h_iss_write(s_arr_iss* array, const char* path);
void h_iss_edit(s_arr_iss* array);

#endif //ISS_H