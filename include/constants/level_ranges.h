#ifndef GUARD_LEVEL_RANGES_H
#define GUARD_LEVEL_RANGES_H
/*
const int BADGE_LEVEL_DIFS[] = {
    5, //0 -> 1, lower version would be 3
    4, //1 -> 2,
    4, //2 -> 3, lower version would be 4
    4, //3 -> 4
    4, //4 -> 5, lower version would be 1 or 3
    5, //5 -> 6, covers both aqua/magma bases so there's a lot in this badge level
    4, //6 -> 7, higher version would be 4
    4,//7 -> 8, assuming previous is 3
}; */

#define RANGE_START 0
#define RANGE_END 1

#define HAVE_0_BADGES 0
#define HAVE_1_BADGES 1
#define HAVE_2_BADGES 2
#define HAVE_3_BADGES 3
#define HAVE_4_BADGES 4
#define HAVE_5_BADGES 5
#define HAVE_6_BADGES 6
#define HAVE_7_BADGES 7
#define HAVE_8_BADGES 8

#endif // GUARD_LEVEL_RANGES_H