/**
 * shape_circle.h  2014-05-03 16:10:55
 * anonymouse(anonymouse@email)
 *
 * Copyright (C) 2000-2014 All Right Reserved
 * 
 * THIS CODE AND INFORMATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
 * KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
 * PARTICULAR PURPOSE.
 *
 * Auto generate for Design Patterns in C
 */
#ifndef __SHAPE_CIRCLE_H__
#define __SHAPE_CIRCLE_H__

#include <mycommon.h>

#include "shape.h"

struct shape_circle {
	struct shape shape;
};

void shape_circle_init(struct shape_circle *, struct color *);

#endif /* __SHAPE_CIRCLE_H__ */
