#pragma once
#include <stdio.h>
#include "person.h"

struct SchoolClass {
struct Person students[26];
char group; //паралелка
int number_class;
struct Person teacher; //класен ръководител
};